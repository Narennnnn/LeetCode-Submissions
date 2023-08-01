class Solution {
    void findComb(vector<vector<int>>&ans, vector<int>&subAns,int s,int n,int k){
       
        if(subAns.size()==k){
            ans.push_back(subAns);
            return;
        }
        for(int i=s;i<=n;i++){
            subAns.push_back(i);
            findComb(ans,subAns,i+1,n,k);
            subAns.pop_back();
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
         vector<int>subAns;
        findComb(ans,subAns,1,n,k);
        return ans;
    }
};