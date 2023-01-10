
//Leetcode 203
#include <stdio.h>
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *temp = new ListNode (-1);
        temp->next = head;
        ListNode *tail=temp;
        while(tail!=NULL&&tail->next!=NULL){
        if(tail->next->val==val){
            ListNode *tmp=tail->next;
            tail->next=tail->next->next;
            delete tmp;
        }
        else{
            tail=tail->next;
        }
        }
        return temp->next;
    }
};