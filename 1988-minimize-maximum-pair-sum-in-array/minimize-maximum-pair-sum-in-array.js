/**
 * @param {number[]} nums
 * @return {number}
 */
var minPairSum = function(nums) {
  let n = nums.length;
  let maxi = 0;
  nums.sort((a, b) => a - b); // Correctly apply sort() function

  for (let i = 0, j = n - 1; i <= n / 2; i++, j--) {
    maxi = Math.max(maxi, nums[i] + nums[j]);
  }

  return maxi;
};
