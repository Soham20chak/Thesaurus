class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* entry=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next ;
            slow=slow->next;
            if(fast==slow){
                while(entry!=slow){
                    entry=entry->next;
                    slow=slow->next;
                }
                return slow;
            }
        }
        return NULL; 
    }
};
