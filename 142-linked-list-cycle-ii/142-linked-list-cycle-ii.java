/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode head) {
          ListNode curr=head;
        int i=0;
        //Map<ListNode,Integer> map = new HashMap<>();
        Set<ListNode> s = new HashSet<>();
        while(curr!=null){
            if(s.contains(curr)){
                return curr;
            }
            s.add(curr);
            curr=curr.next;
        }
       return null;
    }
}