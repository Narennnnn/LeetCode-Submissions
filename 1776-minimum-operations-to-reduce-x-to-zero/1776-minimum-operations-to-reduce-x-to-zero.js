var minOperations = function(nums, x) {
    let i = 0, j = 0, n = nums.length, len = -1, cur = 0;
    let tar = nums.reduce((acc, val) => acc + val, 0) - x;
    if (tar < 0) return -1;
    while (j < n) {
        cur += nums[j];  
        while (cur > tar) {
            cur -= nums[i];
            i++;
        }
        if (cur === tar) {
            len = Math.max(len, j - i + 1);
        }

        j++;
    }
    return len === -1 ? -1 : n - len;
};
