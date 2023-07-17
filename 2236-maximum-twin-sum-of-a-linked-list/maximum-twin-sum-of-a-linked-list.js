/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {number}
 */
const pairSum = (head) => {
  const values = [];
  let current = head;

  while (current) {
    values.push(current.val);
    current = current.next;
  }

  const n = values.length;
  let ans = Number.MIN_SAFE_INTEGER;

  for (let i = 0, j = n - i - 1; i <= Math.floor(n / 2) - 1; i++, j--) {
    ans = Math.max(ans, values[i] + values[j]);
    console.log(ans);
  }

  return ans;
};
