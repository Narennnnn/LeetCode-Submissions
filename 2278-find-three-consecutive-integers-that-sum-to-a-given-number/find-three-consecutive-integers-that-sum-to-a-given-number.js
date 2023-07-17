/**
 * @param {number} num
 * @return {number[]}
 */
var sumOfThree = function(num) {
  const start = Math.floor(num / 3) - 1;
  for (let i = start; i <= start + 2; i++) {
    if (i + (i + 1) + (i + 2) === num) {
      return [i, i + 1, i + 2];
    }
  }

  return [];
};