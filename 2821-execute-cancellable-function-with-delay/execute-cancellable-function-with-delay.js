/**
 * @param {Function} fn
 * @param {Array} args
 * @param {number} t
 * @return {Function}
 */
var cancellable = function(fn, args, t) {
    let timeoutId = setTimeout(() => {
        fn(...args);
    }, t);

    // Return a new function that cancels the timeout
    return function cancelFn() {
        clearTimeout(timeoutId);
    };
};
