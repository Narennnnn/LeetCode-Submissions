/**
 * @param {number} num
 * @return {number[]}
 */
var sumOfThree = function(num) {
  if(num%3!=0)
   return [];
  const i = Math.floor(num / 3) - 1;
      return [i, i + 1, i + 2];
};