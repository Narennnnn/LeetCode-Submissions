class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int ind = 0;
        int maxi = 0;
        for (int i = 1; i < arr.size() - 1; i++) {
            int prev = arr[i - 1];
            int next = arr[i + 1];
            int curr = arr[i];
            if (curr > prev && curr > next) {
                maxi = max(maxi, curr);
                ind = i;
            }
        }
        return ind;
    }
};
