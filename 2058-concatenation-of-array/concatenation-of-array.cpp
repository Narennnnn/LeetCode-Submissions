class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>resArr(2*n);
        for(int i=0;i<n;i++){
            resArr[i]=nums[i];
            resArr[i+n]=nums[i];
        }
        return resArr;
    }
};