class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int pairCount=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int k=i+1;k<n;k++){
                if(nums[i]==nums[k])
                 pairCount++;
            }
        }
        return pairCount;
    }
};