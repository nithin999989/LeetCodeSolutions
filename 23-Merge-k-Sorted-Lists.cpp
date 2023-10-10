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
class compare{
    public:
    bool operator()(ListNode* a, ListNode* b){
        return a->val > b->val;
    }

};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& l) {
        priority_queue<ListNode*, vector<ListNode*> , compare> pq;
        int k= l.size();
        if(k==0) return NULL;

        for(int i=0;i<k;i++){
            if(l[i]!=NULL){
                pq.push(l[i]);
            }
        }

        ListNode* h = NULL;
        ListNode* t = NULL;

        while(!pq.empty()){
            ListNode* temp = pq.top();

            pq.pop();

            if(h==NULL){
                h=temp;
                t=temp;
                if(t->next!=NULL){
                    pq.push(t->next);
                }

            }else{
                t->next=temp;
                t=temp;
                if(t->next!=NULL){
                    pq.push(t->next);
                }
            }
        }
        return h;
    }
};
