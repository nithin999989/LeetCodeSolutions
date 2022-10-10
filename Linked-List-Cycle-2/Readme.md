<strong>Linked List Cycle 2</strong>

Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to (<strong>0-indexed</strong>). It is -1 if there is no cycle. <strong>Note that</strong> pos <strong>is not passed as a parameter</strong>.

<strong>Do not modify</strong> the linked list.

 

<strong>Example 1:</strong>


Input: head = [3,2,0,-4], pos = 1
Output: tail connects to node index 1
Explanation: There is a cycle in the linked list, where tail connects to the second node.


<strong>Example 2:</strong>


Input: head = [1,2], pos = 0
Output: tail connects to node index 0
Explanation: There is a cycle in the linked list, where tail connects to the first node.


<strong>Example 1:</strong>


Input: head = [1], pos = -1
Output: no cycle
Explanation: There is no cycle in the linked list.
 

<strong>Constraints:</strong>

The number of the nodes in the list is in the range [0, 104].
-105 <= Node.val <= 105
pos is -1 or a valid index in the linked-list.
 

<strong>Follow up:</strong> Can you solve it using O(1) (i.e. constant) memory?