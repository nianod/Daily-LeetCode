# Ugly Number
# An ugly number is a positive integer which does not have a prime factor other than 2, 3, and 5.

# Given an integer n, return true if n is an ugly number.

class Solution:
    def isUgly(self, n: int) -> bool:
        if n <= 0:
            return False
        while n != 1:
            if n % 2 == 0:
                n //= 2
            elif n % 3 == 0:
                n //= 3
            elif n % 5 == 0:
                n //= 5
            else:
                return False
        return True

if __name__ == "__main__":
    sol = Solution()
    
    print("6  ->", sol.isUgly(6))   
    print("1  ->", sol.isUgly(1))    
    print("14 ->", sol.isUgly(14))   
    print("0  ->", sol.isUgly(0))   
    print("-6 ->", sol.isUgly(-6))    
