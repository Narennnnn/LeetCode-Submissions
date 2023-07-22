

int removeDuplicates(int* nums, int numsSize){
   int i,j,k=1;
    if(nums<2)
        return nums;
    for(i=1;i<numsSize;i++)
    {      
      if(nums[i-1]!=nums[i])
          nums[k++]=nums[i];
    }
    
    return k;
}