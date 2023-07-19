/**
 * @param {number[][]} intervals
 * @return {number}
 */
var eraseOverlapIntervals = function(intervals) {
    function comp(i1, i2) {
        return i1[1] - i2[1];
    }

    intervals.sort(comp);
    let count = 0;
    let prevEnd = Number.MIN_SAFE_INTEGER;

    for (const interval of intervals) {
        const start = interval[0];
        const end = interval[1];

        if (start >= prevEnd) {
            prevEnd = end;
        } else {
            // Overlapping interval, increment count
            count++;
        }
    }

    return count;
};
