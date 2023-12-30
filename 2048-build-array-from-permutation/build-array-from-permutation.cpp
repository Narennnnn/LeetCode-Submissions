class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>permArr;
        for(int i=0;i<nums.size();i++){
            int ind=nums[i];
            permArr.push_back(nums[ind]);
        }
        return permArr;
    }
};