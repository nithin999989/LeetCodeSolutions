class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return NULL;

        if(head->val == val)
        return removeElements(head->next,val);

        head->next = removeElements(head->next,val);

        return head;
        
    }
};
