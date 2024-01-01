class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalTri;
        for (int i = 0; i < numRows; i++) {
            vector<int> innerRow(i + 1, 1);  // Initialize innerRow with i+1 elements, all set to 1
            for (int j = 1; j < i; j++) {
                innerRow[j] = pascalTri[i-1][j-1] + pascalTri[i-1][j];
            }
            pascalTri.push_back(innerRow);
        }
        return pascalTri;
    }
};
