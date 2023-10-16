/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode resA, ListNode resB) {
        ListNode interA = resA;
        ListNode interB = resB;

        ListNode tot = null;

        while (interA != null) {
        interB = resB;
        while (interB != null) {
            if (interA == interB) {
            return interA;
            }

            interB = interB.next;
        }
        interA = interA.next;
        }
            return tot;
        }
}
