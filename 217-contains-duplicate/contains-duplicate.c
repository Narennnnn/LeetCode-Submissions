int compareIntegers(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

bool containsDuplicate(int* arr, int n) {
    // Sort the array using qsort
    qsort(arr, n, sizeof(int), compareIntegers);
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1])
            return true;
    }
    return false;
}
