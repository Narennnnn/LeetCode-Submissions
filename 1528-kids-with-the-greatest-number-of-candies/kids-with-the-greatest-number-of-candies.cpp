static const auto fast=[](){ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return nullptr;}();

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>res;
        int max=*max_element(candies.begin(),candies.end());
        
        for(int i=0;i<candies.size();i++)
        {
            res.push_back(extraCandies+candies[i]>=max);
        }
        return res;
    }
};