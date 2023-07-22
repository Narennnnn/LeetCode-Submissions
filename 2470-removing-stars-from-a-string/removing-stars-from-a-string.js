/**
 * @param {string} s
 * @return {string}
 */
var removeStars = function(s) {
  let ans = '';
  for (const c of s) {
    if (c === '*' && ans.length > 0) {
      ans = ans.slice(0, -1); // Remove the last character from ans
    } else if (c !== '*') {
      ans += c;
    }
  }
  return ans;
};
