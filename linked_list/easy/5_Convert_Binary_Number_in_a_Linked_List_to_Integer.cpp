//leetcode 1290
#include <stdio.h>
//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    //approach 1: reverse a linked list then solve
    //approach 2 : count nodes in a linked list
    //approach 3: count within a single iteration assume current node as last node 
    int getDecimalValue(ListNode* head) {
        int ans = 0;
        ListNode *ptr=head;
        while(ptr!=NULL){
           ans=ans*2;
           ans=ans+ptr->val;
            ptr=ptr->next;
        }
        return ans;
    }

};