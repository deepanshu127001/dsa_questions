  #include <stdio.h>
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL||head->next==NULL)
            return false;
        ListNode *slow=head;
        ListNode *fast=head;
        do{
            if(fast==NULL)
                return false;
            if(fast->next){
                fast=fast->next->next;
            }
            else
            return false;
        slow = slow->next;
        }while(slow!=fast);
        return true;
    }
};