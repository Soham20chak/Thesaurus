class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        int c=0;
        int i=0;
        ListNode* x=head;
        while(x!=NULL && i<k){
            x=x->next;
            i++;
        }
        if(i<k){
            return head;
        }
        
        else{
        while(curr!= NULL && c<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            c++;
        }
        }
        if(next!=NULL){
           head->next=reverseKGroup(next,k); 
        }
        return prev;
    }
};
