class Solution {
    void allPerm(int index,vector<int>nums,vector<vector<int>>&ans)
    {
        if(index==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++)
        {
            if((i!=index) && (nums[i]==nums[index])){continue;}
            swap(nums[index],nums[i]);
            allPerm(index+1,nums,ans);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        allPerm(0,nums,ans);
        return ans;
    }
};