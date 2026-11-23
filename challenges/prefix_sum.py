# Range Sum Query - Immutable

# Given an integer array nums, handle multiple queries of the following type:

# Calculate the sum of the elements of nums between indices left and right inclusive where left <= right.
# Implement the NumArray class:

# NumArray(int[] nums) Initializes the object with the integer array nums.
# int sumRange(int left, int right) Returns the sum of the elements of nums between indices left and right inclusive (i.e. nums[left] + nums[left + 1] + ... + nums[right]).



class NumArray:
    def __init__(self, nums: list[int]):
        self.prefix = nums
        
        for i in range(1, len(self.prefix)):
            
            self.prefix[i] += self.prefix[i - 1]

    def sumRange(self, left: int, right: int) -> int:
        if left == 0:
            return self.prefix[right]
        
        return self.prefix[right] - self.prefix[left - 1]

# run locally
obj = NumArray([-2, 0, 3, -5, 2, -1])
print(obj.sumRange(0, 2))  # Output: 1
print(obj.sumRange(2, 5))  # Output: -1
print(obj.sumRange(0, 5))  # Output: -3
