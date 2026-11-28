//  Add Two Numbers

// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.


class ListNode {
    constructor(val = 0, next = null) {
        this.val = val;
        this.next = next;
    }
}

var addTwoNumbers = function(l1, l2) {
    let dummy = new ListNode();
    let res = dummy;
    let total = 0, carry = 0;

    while (l1 || l2 || carry) {
        total = carry;

        if (l1) {
            total += l1.val;
            l1 = l1.next;
        }
        if (l2) {
            total += l2.val;
            l2 = l2.next;
        }

        let num = total % 10;
        carry = Math.floor(total / 10);
        dummy.next = new ListNode(num);
        dummy = dummy.next;
    }

    return res.next;    
}

 function buildList(nums) {
    let dummy = new ListNode();
    let curr = dummy;
    for (let n of nums) {
        curr.next = new ListNode(n);
        curr = curr.next;
    }
    return dummy.next;
}

function toArray(head) {
    let out = [];
    while (head) {
        out.push(head.val);
        head = head.next;
    }
    return out;
}

//  Test Cases 
// Test 1 
let l1 = buildList([2, 4, 3]);
let l2 = buildList([5, 6, 4]);
console.log("Test 1:", toArray(addTwoNumbers(l1, l2)));

// Test 2 
l1 = buildList([0]);
l2 = buildList([0]);
console.log("Test 2:", toArray(addTwoNumbers(l1, l2)));

// Test 3: 
l1 = buildList([9, 9, 9, 9, 9, 9, 9]);
l2 = buildList([9, 9, 9, 9]);
console.log("Test 3:", toArray(addTwoNumbers(l1, l2)));
