class Solution {
private:
    void findPerm(vector<vector<int>>& res, vector<int>& ds, vector<int>& nums, int n) {
        if (ds.size() == n) {
            res.push_back(ds);
            return;
        }
        for (int i = 0; i < n; i++) {
            if (find(ds.begin(), ds.end(), nums[i]) != ds.end()) {
                continue;//if already present
            }
            ds.push_back(nums[i]);
            findPerm(res, ds, nums, n); 
            ds.pop_back();
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> resultComb;
        vector<int> ds;
        int n = nums.size();
        findPerm(resultComb, ds, nums, n);
        return resultComb;
    }
};
