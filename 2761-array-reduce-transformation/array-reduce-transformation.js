/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    if(nums.length==0)
    return init;
    let ans=init;
    for(let x of nums){
        ans=fn(ans,x);
    }
    return ans;
};