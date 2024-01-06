class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size(),mid=0,low=0,high=n-1;
        while(mid<=high){
            if(nums[mid]==0){
                int temp=nums[mid];
                nums[mid]=nums[low];
                nums[low]=temp;
                low++;
                mid++;
            }else if(nums[mid]==2){
                int temp=nums[mid];
                nums[mid]=nums[high];
                nums[high]=temp;
                high--;
            }else if(nums[mid]==1){
                mid++;
            }
        }
    }
};