#include <stdio.h>
//  Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    void reverse(ListNode *start,ListNode *end){
        ListNode *prev=NULL, *curr = start,*fwd =  start->next;
        while(prev!=end){
            curr->next=prev;
            prev=curr;
            curr=fwd;
            if(fwd!=NULL)
                fwd = fwd->next;
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL||head->next==NULL||k==1)
            return head;
        int kReversal = k-1;
        ListNode *start=head,*end=head;
        while(kReversal--){
            end = end->next;
            if(end==NULL)
                return head;
        }
        ListNode *splittedList = reverseKGroup(end->next,k);
        reverse(start,end);
        start->next= splittedList;
        return end;
    }
};