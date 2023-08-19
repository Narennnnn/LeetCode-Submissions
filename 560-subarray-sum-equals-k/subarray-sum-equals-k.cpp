class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size(),c=0,s=0;
        unordered_map<int,int>mp;
        mp[0]++;
        for(int i=0;i<n;i++)
        {
           s+=nums[i];
            if(mp.find(s-k) !=mp.end())
                c+=mp[s-k];
            mp[s]++;
        }
        return c;
    }
};