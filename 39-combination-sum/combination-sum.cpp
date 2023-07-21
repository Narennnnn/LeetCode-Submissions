class Solution {
public:
    void findComb(int index,int target,vector<int>& candidates,vector<vector<int>>&res,vector<int>&temp)
    {
        if(index==candidates.size() || target==0)
        {
            if(target==0)
                res.push_back(temp);
             return;
        }
        if(candidates[index]<=target)
        {
            temp.push_back(candidates[index]);
            findComb(index,target-candidates[index],candidates,res,temp);
            temp.pop_back();
        }
        findComb(index+1,target,candidates,res,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>temp;
        findComb(0,target,candidates,res,temp);
        return res;
    }
};