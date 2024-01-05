class Solution {
private:
    void backTrack(vector<int>& nums,vector<vector<int>>& list, vector<int>& templist, int startInd){
        list.push_back(templist);
        for(int i=startInd;i<nums.size();i++){
            if(i>startInd && nums[i]==nums[i-1])continue;
            templist.push_back(nums[i]);
            backTrack(nums,list,templist,i+1);
            templist.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>list;
        vector<int>tempList;
        sort(nums.begin(),nums.end());
        backTrack(nums,list,tempList,0);
        return list;   
    }
};
