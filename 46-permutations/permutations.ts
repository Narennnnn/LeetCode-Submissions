function swap(arr: any[], i: number, j: number) {
  const temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

function allPerm(index: number, nums: number[], ans: number[][]) {
  if (index === nums.length) {
    ans.push([...nums]); 
    return;
  }
  for (let i = index; i < nums.length; i++) {
    swap(nums, index, i); 
    allPerm(index + 1, nums, ans);
    swap(nums, index, i); 
  }
}

function permute(nums: number[]): number[][] {
  const ans: number[][] = [];
  allPerm(0, nums, ans);
  return ans;
}
