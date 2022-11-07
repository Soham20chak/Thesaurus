class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* nextptr=NULL;
        while(curr!=NULL){
            prev=nextptr;
            nextptr=curr;
            curr=curr->next;
            nextptr->next=prev;
        }
        head=nextptr;
        return head;
        
    }
};
