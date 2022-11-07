class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head) return false;
        ListNode* prev = head;
        ListNode* later = head;
        while(later->next !=NULL && later->next->next !=NULL){
            prev=prev->next;
            later=later->next->next;
            if(prev==later){return true;}
        
        }
        return false;
    }
};
