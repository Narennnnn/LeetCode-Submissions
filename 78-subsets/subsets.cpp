static const auto fast=[](){ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return nullptr;}();
class Solution {
public:
    void findAll(int index, vector<int>temp,vector<vector<int>>&res,vector<int>& nums,int n)
    {
        if(index==n)
        {
            res.push_back(temp);
            return;
        }
        findAll(index+1,temp,res,nums,n);
        //not picking current element and moving on
        temp.push_back(nums[index]);
        findAll(index+1,temp,res,nums,n);
        //picking
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>temp;
        int n=nums.size();
        findAll(0,temp,res,nums,n);
        return res;
    }
};