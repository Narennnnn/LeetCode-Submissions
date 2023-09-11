class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int, vector<int>> groups;
        vector<vector<int>> result;
        for (int i = 0; i < groupSizes.size(); ++i) {
            groups[groupSizes[i]].push_back(i);
            cout << "index " << i << " added to group size " << groupSizes[i] << endl;
        }
        for (const auto entry : groups) {
            int groupSize = entry.first;
            const vector<int> indices = entry.second;

            for (int i = 0; i < indices.size(); i += groupSize) {
                vector<int> subgroup(indices.begin() + i, indices.begin() + i + groupSize);
                result.push_back(subgroup);
            }
        }

        return result;
    }
};
