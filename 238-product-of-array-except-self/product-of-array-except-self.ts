function productExceptSelf(nums: number[]): number[] {
    const leftProduct: number[] = [];
    const rightProduct: number[] = [];
    leftProduct.push(1);
    const n = nums.length;
    for (let i = 1; i < n; i++) {
        leftProduct[i] = leftProduct[i - 1] * nums[i - 1];
    }
    rightProduct[n - 1] = 1;
    for (let i = n - 2; i >= 0; i--) {
        rightProduct[i] = rightProduct[i + 1] * nums[i + 1];
    }
    const ans: number[] = [];
    for (let i = 0; i < n; i++) {
        ans[i] = leftProduct[i] * rightProduct[i];
    }
    return ans;
}
