class Solution {
private:
    void findPerm(vector<vector<int>>& res, vector<int>& ds, vector<int>& nums, int n, vector<bool>& used) {
        if (ds.size() == n) {
            res.push_back(ds);
            return;
        }
        for (int i = 0; i < n; i++) {
            if (used[i] || (i > 0 && nums[i] == nums[i - 1] && !used[i - 1])) {
                continue;//skip over repeated elements
            }
            used[i] = true;
            ds.push_back(nums[i]);
            findPerm(res, ds, nums, n, used);
            used[i] = false;
            ds.pop_back();
        }
    }

public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> resultComb;
        vector<int> ds;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<bool> used(n, false);
        findPerm(resultComb, ds, nums, n, used);
        return resultComb;
    }
};
