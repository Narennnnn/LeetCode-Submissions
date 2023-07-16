/**
 * @param {Function[]} functions
 * @return {Function}
 */
var compose = function(functions) {
	return acc=> functions.reduceRight((acc,fn)=>fn(acc),acc);
        
};

/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */