class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp=headA;
        int c1=0;
        while(temp!=NULL){
            c1++;
            temp=temp->next;
        }
        int c2=0;
        ListNode* temp2=headB;
        while(temp2!=NULL){
            c2++;
            temp2=temp2->next;
        }
        int diff=abs(c1-c2);
        ListNode* ptr1=new ListNode();
        
        ListNode* ptr2=new ListNode();
        if(c1>c2){
            ptr1=headA;
            ptr2=headB;
        }
        else{
            ptr1=headB;
            ptr2=headA;
        }
        int c=0;
        while(c<diff){
            ptr1=ptr1->next;
            c++;
        }
        while(ptr1!=NULL && ptr2!=NULL){
            if(ptr1!=ptr2){
                ptr1=ptr1->next;
                ptr2=ptr2->next;
            }
            else{
                return ptr1;
            }
        }
        return NULL;
    }
};
