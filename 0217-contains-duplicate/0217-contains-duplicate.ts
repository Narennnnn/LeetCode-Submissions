function containsDuplicate(nums: number[]): boolean {
  const dummySet = new Set([...nums]);
  return dummySet.size !== nums.length;
}