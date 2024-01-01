class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> pascalTri;
        for (int i = 0; i <=rowIndex; i++) {
            vector<int> innerRow(i + 1, 1);
            for (int j = 1; j < i; j++) {
                innerRow[j] = pascalTri[i-1][j-1] + pascalTri[i-1][j];
            }
            pascalTri.push_back(innerRow);
            if(i==rowIndex)
             return innerRow;  
        }
        return {-1,-1};//will never execute actually
    }
};
