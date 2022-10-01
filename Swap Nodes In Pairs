/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode swapPairs(ListNode head) {
        
        if(head == null || head.next == null)   //If zeo or 1 node in linked list
            return head;
        
        ListNode remaining = head.next.next;    //3rd node stored
        
        ListNode newHead = head.next;   //after swapping 2nd head is the head node
        
        head.next.next = head;  //2nd node connected to 1st one
        
        head.next = swapPairs(remaining);
        
        return newHead;
    }
}
