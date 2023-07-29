/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
    let carry = 1;
    const result = [];

    for (let i = digits.length - 1; i >= 0; i--) {
        const sum = digits[i] + carry;
        carry = Math.floor(sum / 10);
        result.unshift(sum % 10);
    }

    if (carry > 0) {
        result.unshift(carry);
    }

    return result;
};
