/**
 * @param {Function} fn
 * @return {Array}
 */
Array.prototype.groupBy = function(fn) {
  let res = {};
  for (let i of this) {
    const key = fn(i); // Apply the transformation function to get the key
    if (!res[key]) {
      res[key] = []; // Initialize an empty array for the key if it doesn't exist
    }
    res[key].push(i); // Push the current element into the array corresponding to the key
  }
  return res;
};

/**
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */