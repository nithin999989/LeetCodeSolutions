/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL or head->next == NULL) return head;
        
        int i=0;
        
        ListNode *curr = head;
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        
        
        while(curr != NULL){
            
            i++;
            
            if(i % 2 == 0){
                swap(dummy->val, curr->val);
            }
            dummy = dummy->next;
            curr = curr->next;
        }
        return head;
    }
};