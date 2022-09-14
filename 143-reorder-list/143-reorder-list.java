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
    public void reorderList(ListNode head) {
        if(head==null || head.next==null)return;
        ListNode l1 = head;
        ListNode slow=head;
        ListNode fast = head;
        ListNode prev = head;
        while(fast!=null && fast.next!=null){
            prev = slow;
            slow=slow.next;
            fast=fast.next.next;
            }
        prev.next=null;
        ListNode l2 = reverse(slow);
        mergeNode(l1,l2);
}
    public ListNode reverse(ListNode head){
        ListNode prev = null;
        ListNode curr = head;
        while(curr!=null){
            ListNode next = curr.next;
            curr.next=prev;
            prev = curr;
            curr =next;
        }
        return prev;
    }
    public void mergeNode(ListNode l1,ListNode l2){
        while(l1!=null){
            ListNode nextl1 = l1.next;
            ListNode nextl2 = l2.next;
            l1.next=l2;
            if(nextl1==null)break;
            l2.next=nextl1;
            l1= nextl1;
            l2=nextl2;
        }
    }
}