/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function(nums, target) {
    let l = 0, h = nums.length - 1;
    
    while (l <= h) {
        let mid = l + Math.floor((h - l) / 2);
        
        if (nums[mid] === target) {
            return mid;
        }
        
        if (nums[l] <= nums[mid]) {
            if (nums[l] <= target && target < nums[mid]) {
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        } else {
            if (nums[mid] < target && target <= nums[h]) {
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }
    }
    
    return -1;
};
