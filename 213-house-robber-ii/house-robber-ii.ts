function rob(nums: number[]): number { 
    if(nums.length==1)
    return nums[0];
    let a=0,b=0,c=0,d=0;
    for(let i=0;i<nums.length-1;i++){
        const temp=a
        a=Math.max(b+nums[i],a)
        b=temp
    }
    let res1= Math.max(a,b);
    
    for(let i=1;i<nums.length;i++){
        const temp=c
        c=Math.max(d+nums[i],c)
        d=temp
    }
    let res2= Math.max(c,d);
    return Math.max(res1,res2);
};