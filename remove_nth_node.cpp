class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy=new ListNode(0);
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        dummy->next=head;
        if(head==NULL || head->next==NULL){
            return NULL;
        
        }
        if(count==n){
            return head->next;
        }
        
        
        ListNode* fast=dummy;
        ListNode* slow=dummy;
        for(int i=0;i<n;i++){
            fast=fast->next;
        }
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        ListNode* del = slow->next;
        slow->next=del->next;
        delete del;
        return head;
        
    }
    
    
};
