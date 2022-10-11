 
/**
 * Add two numbers represented as a singly-linked list. 
 */

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
 
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        int carry =0;
        ListNode res = null;
        ListNode prev = null;
        ListNode temp  = null;
        while(l1!=null || l2!=null){
            int data = (l1!=null ? l1.val : 0) + (l2!=null ? l2.val : 0) + carry;
            int ans = data%10;
            carry = data/10;
            temp = new ListNode(ans);
            if(res==null){
                res=temp;
                res.next=null;
            }
            else{
                prev.next = temp;
            }
            prev = temp;
            if(l1!=null){
                l1=l1.next;
            }
            if(l2!=null){
                l2=l2.next;
            }
                      
        }
        if(carry>0){
           temp.next = new ListNode(carry);
        }
        return res;
        
    }
}