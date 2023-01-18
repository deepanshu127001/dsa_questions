#include <stdio.h>
//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next) return nullptr;

        ListNode *slow = head->next, *fast = head -> next-> next;
        int answer = 0;

        while(fast != slow) {
            slow = slow -> next;
            if(fast == nullptr || fast -> next == nullptr) return nullptr;
            fast = fast -> next -> next;
        }

        slow = head;
        while(slow != fast) {
            fast = fast -> next;
            slow = slow -> next;
        }

        return fast;
    }
};