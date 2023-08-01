
    function findComb(ans: number[][], subAns: number[], s: number, n: number, k: number) {
        if (subAns.length === k) {
            ans.push([...subAns]);
            return;
        }
        for (let i = s; i <= n; i++) {
            subAns.push(i);
            findComb(ans, subAns, i + 1, n, k);
            subAns.pop();
        }
    }

    function combine(n: number, k: number): number[][] {
        const ans: number[][] = [];
        const subAns: number[] = [];
        findComb(ans, subAns, 1, n, k);
        return ans;
    }

