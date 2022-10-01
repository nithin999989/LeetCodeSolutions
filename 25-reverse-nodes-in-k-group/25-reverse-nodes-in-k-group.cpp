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
    ListNode* reverseKGroup(ListNode* head, int k) 
    {   
        //to not reverse the last group which is less than k
         ListNode* temp=head;
         for(int i=0;i<k;i++)
         {
            if(!temp)return head;
            temp=temp->next;
        }
        
        //here we go again
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *next;
        int count=0;
        while(curr and count<k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        
        //aage ka recursion ke bharose
        if(next){
            head->next = reverseKGroup(next,k);    //head->next=prev
        }
        
        return prev;
    }
};