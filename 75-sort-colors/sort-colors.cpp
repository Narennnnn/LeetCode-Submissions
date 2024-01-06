
class Solution {
public:
    void merge(vector<int>& nums, int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;
        vector<int> leftArr(n1);
        vector<int> rightArr(n2);

        for (int i = 0; i < n1; i++) {
            leftArr[i] = nums[left + i];
        }
        for (int j = 0; j < n2; j++) {
            rightArr[j] = nums[mid + j + 1];
        }

        int i = 0;
        int j = 0;
        int k = left;

        while (i < n1 && j < n2) {
            if (leftArr[i] <= rightArr[j]) {
                nums[k] = leftArr[i];
                i++;
            } else {
                nums[k] = rightArr[j];
                j++;
            }
            k++;
        }

        while (i < n1) {
            nums[k] = leftArr[i];
            i++;
            k++;
        }

        while (j < n2) {
            nums[k] = rightArr[j];
            j++;
            k++;
        }
    }

    void mergeSort(vector<int>& nums, int start, int end) {
        if (start >= end)
            return;
        int mid = start + (end - start) / 2;
        mergeSort(nums, start, mid);
        mergeSort(nums, mid + 1, end);
        merge(nums, start, mid, end);
    }

    void sortColors(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
    }
};
