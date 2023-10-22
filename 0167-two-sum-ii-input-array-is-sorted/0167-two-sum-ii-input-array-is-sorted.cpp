class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,r=numbers.size()-1;
        vector<int>ans;
        while(l<r)
        {
            if(numbers[l]+numbers[r]==target)
            {
                ans.emplace_back(l+1);
                ans.emplace_back(r+1);
                break;
            }
             if(numbers[l]+numbers[r]<target)
            {
                l++;
            }
             if(numbers[l]+numbers[r]>target)
            {
                r--;
            }
        }
        return ans;
    }
};