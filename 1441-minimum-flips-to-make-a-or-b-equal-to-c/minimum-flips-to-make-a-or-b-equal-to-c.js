var minFlips = function(a, b, c) {
    let count = 0;
    for (let i = 0; i < 31; i++) { // Running for 32 bits (0 to 31)
        const x = !!(a & (1 << i)); // Check whether i-th bit is set in 'a'
        const y = !!(b & (1 << i)); // Check whether i-th bit is set in 'b'
        const z = !!(c & (1 << i)); // Check whether i-th bit is set in 'c'

        if (!z) {
            if (x && y) count += 2;
            else if (x || y) count++;
        } else {
            if (!x && !y) count++;
        }
    }
    return count;
};

