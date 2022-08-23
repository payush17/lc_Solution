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
    public boolean isPalindrome(ListNode head) {
         int i =0,j=0,mul=1;
        while(head!=null){
            i = i * 10 + head.val;
            j = head.val*mul + j;
            mul *= 10;
            head=head.next;
            
        }
        return i==j;
    }
}