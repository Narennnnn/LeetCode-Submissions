class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size(),c=0,pSum=0,rem=0;
        unordered_map<int,int>mp;
        mp[0]++;
        for(int i=0;i<n;i++)
        {
           pSum+=nums[i];
            rem=pSum%k;
            if(rem<0)
                rem+=k;
            if(mp.count(rem))
                c+=mp[rem];
            mp[rem]++;
        }
        return c;
    }
};