# Add Two Numbers

# You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
# You may assume the two numbers do not contain any leading zero, except the number 0 itself.

from typing import Optional

class ListNode:
    def __init__(self, val: int = 0, next: Optional["ListNode"] = None):
        self.val = val
        self.next = next

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode()
        res = dummy
        total = carry = 0
        while l1 or l2 or carry:
            total = carry
            if l1:
                total += l1.val
                l1 = l1.next
            if l2:
                total += l2.val
                l2 = l2.next
            num = total % 10
            carry = total // 10
            dummy.next = ListNode(num)
            dummy = dummy.next
        return res.next


def build_list(nums: list[int]) -> Optional[ListNode]:
    dummy = ListNode()
    curr = dummy
    for n in nums:
        curr.next = ListNode(n)
        curr = curr.next
    return dummy.next

def to_array(head: Optional[ListNode]) -> list[int]:
    out = []
    while head:
        out.append(head.val)
        head = head.next
    return out

#  TestS
if __name__ == "__main__":
    sol = Solution()

    # Test 1
    l1 = build_list([2, 4, 3])
    l2 = build_list([5, 6, 4])
    print("Test 1:", to_array(sol.addTwoNumbers(l1, l2)))

    # Test 2:
    l1 = build_list([0])
    l2 = build_list([0])
    print("Test 2:", to_array(sol.addTwoNumbers(l1, l2)))

    # Test 3:
    l1 = build_list([9, 9, 9, 9, 9, 9, 9])
    l2 = build_list([9, 9, 9, 9])
    print("Test 3:", to_array(sol.addTwoNumbers(l1, l2)))
