class EventEmitter {
  constructor() {
    this.events = new Map();
  }

  subscribe(event, cb) {
    if (!this.events.has(event)) {
      this.events.set(event, []);
    }

    const eventCallbacks = this.events.get(event);
    eventCallbacks.push(cb);

    return {
      unsubscribe: () => {
        const index = eventCallbacks.indexOf(cb);
        if (index !== -1) {
          eventCallbacks.splice(index, 1);
        }
      }
    };
  }

  emit(event, args = []) {
    if (!this.events.has(event)) {
      return [];
    }

    const eventCallbacks = this.events.get(event);
    const results = eventCallbacks.map(cb => cb(...args));

    return results;
  }
}