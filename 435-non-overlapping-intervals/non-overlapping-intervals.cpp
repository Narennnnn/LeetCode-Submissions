bool comp(vector<int>& i1, vector<int>& i2) {
    return i1[1] < i2[1];
}

class Solution {
public:
int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    int count = 0;
    sort(intervals.begin(), intervals.end(), comp);

    vector<vector<int>> result;
    int prevEnd = INT_MIN;

    for (const auto& interval : intervals) {
        int start = interval[0];
        int end = interval[1];

        if (start >= prevEnd) {
            // No overlap, add the interval to the result
            result.push_back(interval);
            prevEnd = end;
        } else {
            // Overlapping interval, increment count
            count++;
        }
    }

    return count;
}


};
