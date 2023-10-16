function productExceptSelf(nums: number[]): number[] {
    let totalProduct = 1;
    let zeroCount = 0;
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] === 0) {
            zeroCount++;
        } else {
            totalProduct *= nums[i];
        }
    }
    const result: number[] = [];
    for (let i = 0; i < nums.length; i++) {
        if (zeroCount > 1) {
            result.push(0);
        } else if (zeroCount === 1) {
            result.push(nums[i] === 0 ? totalProduct : 0);
        } else {
            result.push(totalProduct / nums[i]);
        }
    }

    return result;
}