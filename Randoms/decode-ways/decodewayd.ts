function numDecodings(s: string): number {
    if (s.length === 0) return 0;

    function helper(p: number): number {
        const n = s.length;
        if (p === n) return 1;
        if (s[p] === '0') return 0;

        let res = helper(p + 1);
        if (p < n - 1 && (s[p] === '1' || (s[p] === '2' && s[p + 1] < '7'))) {
            res += helper(p + 2);
        }
        return res;
    }

    return helper(0);
}

// Driver code to run locally
console.log(numDecodings("12"));   // Output: 2
console.log(numDecodings("226"));  // Output: 3
console.log(numDecodings("06"));   // Output: 0
