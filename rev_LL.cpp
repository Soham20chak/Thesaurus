class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* next=NULL;
        ListNode* curr=head;
        while(curr!=NULL){
            next = curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head = prev;
        return head;
        
    }
};
