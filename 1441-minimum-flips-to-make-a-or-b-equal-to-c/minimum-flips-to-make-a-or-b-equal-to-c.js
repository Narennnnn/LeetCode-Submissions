var minFlips = function(a, b, c) {
    const padLeadingZeroes = (num, length) => {
        const binary = num.toString(2);
        return '0'.repeat(length - binary.length) + binary;
    };

    const maxLen = Math.max(a.toString(2).length, b.toString(2).length, c.toString(2).length);
    const newA = padLeadingZeroes(a, maxLen);
    const newB = padLeadingZeroes(b, maxLen);
    const newC = padLeadingZeroes(c, maxLen);

    var mini = 0;

    for (let i = newC.length - 1; i >= 0; i--) {
        const bitC = newC.charAt(i);
        const bitA = newA.charAt(i);
        const bitB = newB.charAt(i);

        if (bitC == '0') {
            if (bitA == '0' && bitB == '0') continue;
            if (bitA == '0' && bitB == '1') mini++;
            if (bitA == '1' && bitB == '0') mini++;
            if (bitA == '1' && bitB == '1') {
                mini += 2;
                console.log("check");
            }
        } else if (bitC == '1') {
            if (bitA == '1' && bitB == '1') continue;
            if ((bitA == '0' && bitB == '1') || (bitA == '1' && bitB == '0')) continue;
            if (bitA == '0' && bitB == '0') mini++;
        } else continue;
    }
    return mini;
};


