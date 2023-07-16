/**
 * @param {number[]} nums
 * @return {number[]}
 */
const sort = function(nums, l, m, h) {
  const n1 = m - l + 1;
  const n2 = h - m;
  const x = new Array(n1);
  const y = new Array(n2);

  for (let i = 0; i < n1; i++) {
    x[i] = nums[l + i];
  }

  for (let j = 0; j < n2; j++) {
    y[j] = nums[m + 1 + j];
  }

  let k = l;
  let i = 0;
  let j = 0;

  while (i < n1 && j < n2) {
    if (x[i] < y[j]) {
      nums[k++] = x[i++];
    } else {
      nums[k++] = y[j++];
    }
  }

  while (i < n1) {
    nums[k++] = x[i++];
  }

  while (j < n2) {
    nums[k++] = y[j++];
  }
};

const mergeSort = function(nums, l, h) {
  if (l >= h) {
    return;
  }

  const mid = Math.floor(l + (h - l) / 2);
  mergeSort(nums, l, mid);
  mergeSort(nums, mid + 1, h);
  sort(nums, l, mid, h);
};

const sortArray = function(nums) {
  mergeSort(nums, 0, nums.length - 1);
  return nums;
};
