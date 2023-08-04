function rob(nums: number[]): number { 
    let a=0,b=0;
    for(let i=0;i<nums.length;i++){
        const temp=a
        a=Math.max(b+nums[i],a)
        b=temp
    }
    return Math.max(a,b);
};