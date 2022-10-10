/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {

private:
    ListNode* detectLoop(ListNode* &head){
        if(head==NULL){
            return NULL;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(slow!=NULL and fast!=NULL){
            slow=slow->next;
            fast=fast->next;
            
            if(fast!=NULL){
                fast=fast->next;
            }
            
            if(slow==fast){
                return slow;
            }
        }
        return NULL;
        
    }
public:
    ListNode *detectCycle(ListNode *head) {
        
        // Using Floyd's Algo
        // solution using constant extra space -- Floyd's Algorithm
        
        if(head==NULL) return NULL;
        if(head->next==NULL) return NULL;
        
        ListNode* intersectionNode = detectLoop(head);
        if(intersectionNode==NULL) return NULL;
        
        ListNode* slowPointer = head;
        while(slowPointer != intersectionNode){
            slowPointer = slowPointer->next;
            intersectionNode = intersectionNode->next;
        }
        
        return slowPointer;
    }
    
};