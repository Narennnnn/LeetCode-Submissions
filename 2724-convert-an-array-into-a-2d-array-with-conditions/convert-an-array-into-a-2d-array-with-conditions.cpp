class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int>mp;
        int rowCount=0;
        for(auto n:nums){
            mp[n]++;
            rowCount=max(rowCount,mp[n]);
        }
        vector<vector<int>>res(rowCount);
        for(auto num:mp){
            int n=num.first;
            int freq=num.second;
            for(int i=0;i<freq;i++){
                res[i].emplace_back(n);
            }
        }
        return res;
    }
};