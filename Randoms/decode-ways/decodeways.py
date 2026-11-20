class Solution:
    def numDecodings(self, s: str) -> int:
        if not s:
            return 0
        return self._helper(0, s)

    def _helper(self, p: int, s: str) -> int:
        n = len(s)
        if p == n:
            return 1
        if s[p] == '0':
            return 0
        
        res = self._helper(p + 1, s)
        if p < n - 1 and (s[p] == '1' or (s[p] == '2' and s[p + 1] < '7')):
            res += self._helper(p + 2, s)
        return res

#  run locally
if __name__ == "__main__":
    sol = Solution()
    print(sol.numDecodings("12"))   # Output: 2
    print(sol.numDecodings("226"))  # Output: 3
    print(sol.numDecodings("06"))   # Output: 0
