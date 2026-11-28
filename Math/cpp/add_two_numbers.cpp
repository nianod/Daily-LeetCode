//  Add Two Numbers

// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.


#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode();
        ListNode* res = dummy;
        int total = 0, carry = 0;

        while (l1 || l2 || carry) {
            total = carry;

            if (l1) {
                total += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                total += l2->val;
                l2 = l2->next;
            }

            int num = total % 10;
            carry = total / 10;
            dummy->next = new ListNode(num);
            dummy = dummy->next;
        }

        ListNode* result = res->next;
        delete res;
        return result;         
    }
};

 
ListNode* buildList(const vector<int>& nums) {
    ListNode dummy;
    ListNode* curr = &dummy;
    for (int n : nums) {
        curr->next = new ListNode(n);
        curr = curr->next;
    }
    return dummy.next;
}

void printList(ListNode* head) {
    cout << "[";
    while (head) {
        cout << head->val;
        if (head->next) cout << ", ";
        head = head->next;
    }
    cout << "]\n";
}

void freeList(ListNode* head) {
    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

 
int main() {
    Solution sol;

    
    ListNode* l1 = buildList({2, 4, 3});
    ListNode* l2 = buildList({5, 6, 4});
    ListNode* out1 = sol.addTwoNumbers(l1, l2);
    cout << "Test 1: ";
    printList(out1);
    freeList(l1); freeList(l2); freeList(out1);

     
    l1 = buildList({0});
    l2 = buildList({0});
    ListNode* out2 = sol.addTwoNumbers(l1, l2);
    cout << "Test 2: ";
    printList(out2);
    freeList(l1); freeList(l2); freeList(out2);

     
    l1 = buildList({9, 9, 9, 9, 9, 9, 9});
    l2 = buildList({9, 9, 9, 9});
    ListNode* out3 = sol.addTwoNumbers(l1, l2);
    cout << "Test 3: ";
    printList(out3);
    freeList(l1); freeList(l2); freeList(out3);

    return 0;
}
