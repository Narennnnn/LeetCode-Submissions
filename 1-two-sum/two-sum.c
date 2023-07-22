/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numSize, int target, int* returnSize){
    int i = 0, j = 0;
    for (i = 0; i < numSize; i++) {
        for (j = i + 1; j < numSize; j++) {
            if (nums[i] + nums[j] == target) {
                int* result = (int*)malloc(2 * sizeof(int)); // Allocate memory for the array
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    return NULL;
}
