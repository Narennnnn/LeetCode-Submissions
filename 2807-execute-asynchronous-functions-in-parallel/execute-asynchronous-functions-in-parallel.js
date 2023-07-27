/**
 * @param {Array<Function>} functions
 * @return {Promise<any>}
 */
var promiseAll = async function(functions) {
    const resultArray = [];
    let resolvedCount = 0;
    if (functions.length === 0) {
        return Promise.resolve(functions);
    }

    return new Promise((resolve, reject) => {
        functions.forEach((func, index) => {
            func()
            .then((res) => {
                resultArray[index] = res;
                resolvedCount++;
                if (resolvedCount === functions.length) {
                    resolve(resultArray);
                }
            })
            .catch((err) => {
                reject(err);
            });
        });
    });
};

/**
 * Test example:
 * const promise = promiseAll([() => new Promise(res => res(42))])
 * promise.then(console.log); // [42]
 */
