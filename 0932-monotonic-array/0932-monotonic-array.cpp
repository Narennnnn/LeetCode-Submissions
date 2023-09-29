class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        int direction = 0;
        
        for(int i = 1; i < n; i++) {
            if(nums[i] > nums[i-1]) {
                if(direction == -1) {
                    return false;
                }
                direction = 1;
            } else if(nums[i] < nums[i-1]) {
                if(direction == 1) {
                    return false;
                }
                direction = -1;
            }
        }
        
        return true;
    }
};