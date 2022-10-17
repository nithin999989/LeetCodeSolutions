# Solution

## [Problem : Remove Duplicates from Sorted List](https://leetcode.com/problems/remove-duplicates-from-sorted-list/)


Code:

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */x  
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
          if(!head)  return head ;
          ListNode *temp =head  ,  *p =  head -> next ;
          int pre =  head -> val ;
          while(p!= NULL){
            if(pre != p->val){
              temp->next = p ;
              pre = p->val ;
              temp = temp ->next  ;
            }
            p = p->next ;
          }
          temp->next = NULL ;
          return head ;
    }
};

```