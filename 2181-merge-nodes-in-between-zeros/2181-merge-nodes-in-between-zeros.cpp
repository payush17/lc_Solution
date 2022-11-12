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
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* curr = new ListNode(-1);
        ListNode* dummy = curr;
        int sum=0;
        ListNode* temp = head->next; 
        while(temp != NULL){
            sum=0;
            while(temp->val != 0){
                sum += temp->val;
                temp = temp->next;
            }
            dummy->next = new ListNode(sum);
            temp=temp->next;
            dummy=dummy->next;
            
        }
        return curr->next;
        
    }
};