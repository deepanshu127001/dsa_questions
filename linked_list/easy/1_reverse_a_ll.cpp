#include <stdio.h>
#include <iostream>
struct ListNode{
    int val;
    ListNode *next;
};
//iterative approach
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev=NULL;
        ListNode *curr=head;
        while(curr!=NULL){
            ListNode *forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }

    //recursive approach - 1
    ListNode* reverseListRecursive1(ListNode *head){

    }

    //recursive approach -  2
    ListNode* reverseListRecursive2(ListNode *head){
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode *splitedLinkedList = reverseListRecursive2(head->next);
        head->next->next=head;
        head->next=NULL;
        return splitedLinkedList;
    }
};