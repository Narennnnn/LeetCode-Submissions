class Solution {
private:
int findLowerBound(int low, int high, vector<int> tempArr, int num) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (tempArr[mid] == num)
            return mid;
        else if (tempArr[mid] < num)
            low = mid + 1;
        else if (tempArr[mid] > num)
            high = mid - 1;
    }
    return low;
}

public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>illusionArr;
        illusionArr.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]>illusionArr.back()){
                illusionArr.push_back(nums[i]);
            }else{
                int index=findLowerBound(0,illusionArr.size()-1,illusionArr,nums[i]);//returns index if curr val found else index of value just greater than passed value 
                illusionArr[index]=nums[i];
            }
        }
        return illusionArr.size();
    }
};