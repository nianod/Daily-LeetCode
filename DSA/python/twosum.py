from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        tmp = {}
        for i, num in enumerate(nums):
            if target - num in tmp:
                return [tmp[target - num], i]
            tmp[num] = i
        return [-1, -1]


if __name__ == "__main__":
    sol = Solution()
    print(sol.twoSum([2, 7, 11, 15], 9))  #
