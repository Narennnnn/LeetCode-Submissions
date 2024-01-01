class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> resArr(rowIndex + 1, 1);
        for(int k = 1; k <= rowIndex; k++) {
            long long nextVal = (long long)(resArr[k - 1]) * (rowIndex - k + 1) / k;
            //Binomial Coefficient Formula for mext coefficient when previous available
            resArr[k] = nextVal;
        }
        return resArr;
    }
};
