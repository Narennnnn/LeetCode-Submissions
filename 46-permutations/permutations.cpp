class Solution {
private:
    void findPerm(vector<vector<int>>&res,vector<int>&ds,vector<int>& nums,int freq[],int n){
        if(ds.size()==n){
            res.push_back(ds);
            return;
        }
        for(int i=0;i<n;i++){
            if(freq[i]==0){
                freq[i]=1;
                ds.push_back(nums[i]);
                findPerm(res,ds,nums,freq,n);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>resultComb;
        vector<int>ds;
        int freq[nums.size()];
        int n=nums.size();
        for(int i=0;i<n;i++)
         freq[i]=0;
        findPerm(resultComb,ds,nums,freq,n);
        return resultComb;
    }
};