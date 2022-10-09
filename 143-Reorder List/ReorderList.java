 Strategy: Reverse the second half of the list and reconnect the nodes of the 2 lists.
 Time complexity: O(N)


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
 
 /*

 
 
 
class Solution {
    public ListNode reverse(ListNode head){
        ListNode prev=null;
        ListNode curr=head;
        ListNode next=null;
        while(curr!=null){
            next=curr.next;
            curr.next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    public ListNode middleNode(ListNode head){
        ListNode slow = head;
        ListNode fast = head;
        while(fast!=null && fast.next!=null){
            slow=slow.next;
            fast=fast.next.next;
        }
        return slow;
    }
    public void reorderList(ListNode head) {
        ListNode h1 = head;
        ListNode h2 = reverse(middleNode(head));
        while(h1!=null && h2!=null){
            ListNode temp =h1.next;
            h1.next=h2;
            h1=temp;
            
            temp=h2.next;
            h2.next=h1;
            h2=temp;
        }
        if(h1!=null){
            h1.next=null;
        }

    }
}