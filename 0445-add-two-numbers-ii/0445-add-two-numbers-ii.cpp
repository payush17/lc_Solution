/**
 *Definition for singly-linked list.
 *struct ListNode {
 *   int val;
 *   ListNode * next;
 *   ListNode() : val(0), next(nullptr) {}
 *   ListNode(int x) : val(x), next(nullptr) {}
 *   ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* reverseList(ListNode *head)
        {
            if (!head || !head->next)
            {
                return head;
            }

            auto ans = reverseList(head->next);
            head->next->next = head;
            head->next = NULL;

            return ans;
        }
    
    ListNode* addTwoNumbers(ListNode *li1, ListNode *li2)
    {
        if (li1 == 0) return li2;
        if (li2 == 0) return li1;
        ListNode *l1 = reverseList(li1);
        ListNode *l2 = reverseList(li2);
        ListNode *temp = new ListNode();
        ListNode *curr = temp;
        int carry = 0;
        while (l1 != NULL || l2 != NULL || carry)
        {
            int sum = 0;
            if (l1 != NULL)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            sum += carry;
            carry = sum / 10;
            ListNode *newnode = new ListNode(sum % 10);
            curr->next = newnode;
            curr = curr->next;
        }
        ListNode* ansSum = reverseList(temp->next);
        return ansSum;
    }
};