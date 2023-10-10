function twoSum(nums: number[], target: number): number[] {
 let newArr=[]
 for(let i=0;i<nums.length-1;i++){
     for(let j=i+1;j<nums.length;j++){
         if(nums[i]+nums[j]==target)
         newArr.push(i,j);
     }
 }
 return newArr;
 
};