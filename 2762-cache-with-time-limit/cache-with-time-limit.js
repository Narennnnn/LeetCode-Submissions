class TimeLimitedCache {
  constructor() {
    this.cache = new Map();
  }

  /**
   * @param {number} key
   * @param {number} value
   * @param {number} duration time until expiration in ms
   * @return {boolean} if un-expired key already existed
   */
  set(key, value, duration) {
    const currentTime = Date.now();
    if (this.cache.has(key)) {
      const { expirationTime } = this.cache.get(key);
      if (expirationTime >= currentTime) {
        this.cache.set(key, { value, expirationTime: currentTime + duration });
        return true;
      }
    }
    this.cache.set(key, { value, expirationTime: currentTime + duration });
    return false;
  }

  /**
   * @param {number} key
   * @return {number} value associated with key
   */
  get(key) {
    const currentTime = Date.now();
    if (this.cache.has(key)) {
      const { value, expirationTime } = this.cache.get(key);
      if (expirationTime >= currentTime) {
        return value;
      } else {
        this.cache.delete(key);
      }
    }
    return -1;
  }

  /**
   * @return {number} count of non-expired keys
   */
  count() {
    const currentTime = Date.now();
    let count = 0;
    for (const [key, { expirationTime }] of this.cache) {
      if (expirationTime >= currentTime) {
        count++;
      } else {
        this.cache.delete(key);
      }
    }
    return count;
  }
}