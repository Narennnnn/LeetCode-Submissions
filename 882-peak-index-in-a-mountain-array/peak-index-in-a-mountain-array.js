/**
 * @param {number[]} arr
 * @return {number}
 */
var peakIndexInMountainArray = function(arr) {
     var ind = 0;
        var maxi = 0;
        for (var i = 1; i < arr.length - 1; i++) {
            var prev = arr[i - 1];
            var next = arr[i + 1];
            var curr = arr[i];
            if (curr > prev && curr > next) {
                maxi = Math.max(maxi, curr);
                ind = i;
            }
        }
        return ind;
};