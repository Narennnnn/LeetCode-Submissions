/**
 * @return {number}
 */
var argumentsLength = function(...args) {
 var c=0;
 for(let x of args)
  c++;
  return c;
};


/**
 * argumentsLength(1, 2, 3); // 3
 */