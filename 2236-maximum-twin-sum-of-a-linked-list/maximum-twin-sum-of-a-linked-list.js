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
  const stack = [];
  let ans = Number.MIN_SAFE_INTEGER;
  let current = head;

  while (current) {
    stack.push(current.val);
    current = current.next;
  }
  for(let i = 0; i <stack.length; i++) {
      ans = Math.max(ans, stack[i] + stack[stack.length -i- 1]);
    }

  return ans;
}
