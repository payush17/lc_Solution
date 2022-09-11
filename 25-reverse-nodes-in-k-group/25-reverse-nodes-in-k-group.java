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
    public ListNode reverseKGroup(ListNode head, int k) {
        if(head==null || head.next==null || k==1)return head;
        int count =0;
        ListNode temp = head;
        
        //traverse till kth node first eg 123 k =3 reach till 3
        while(temp!=null && count<k){
          temp = temp.next;
            count++;
        }
        if(count<k)return head;//less node present in LL than k 
        
        int cnt =k;
        ListNode rev = head;
        ListNode startInd = reverseNode(head,cnt);//calling for reverse k node
        rev.next = reverseKGroup(temp,cnt);
        return startInd;//this will be at last Index i.e. front index for reverse LL
        
        
        
    }
    public ListNode reverseNode(ListNode head, int k){
    ListNode prev = null;
    ListNode curr = head;
    ListNode next = head;  
    while(k > 0){
        next = curr.next;
        curr.next = prev;
        prev = curr;
        curr = next;
        k--;
    }
    return prev;
    }
}