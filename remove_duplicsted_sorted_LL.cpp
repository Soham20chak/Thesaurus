class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* node = head;
        while(!head==NULL && node->next!=NULL){
            if(node->val==node->next->val)
                node->next=node->next->next;
            else{
                node=node->next;
            }
        }
        return head;
        
    }
};
