/**
 *Definition for singly-linked list.
 *struct ListNode {
 *  int val;
 *  ListNode * next;
 *  ListNode() : val(0), next(nullptr) {}
 *  ListNode(int x) : val(x), next(nullptr) {}
 *  ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        int pairSum(ListNode *head)
        {
            int twinSum = 0;
            ListNode *fast = head;
            ListNode *slow = head;
            while (fast != NULL && fast->next != NULL)
            {
                fast = fast->next->next;
                slow = slow->next;
            }
           	// ListNode *front, *prev = NULL;
           	// while (slow != NULL)
           	// {
           	//     front = slow->next;
           	//     prev = slow->next;
           	//     prev = slow;
           	//     slow = front;
           	// }
            ListNode *nextNode, *prev = NULL;
            while (slow)
            {
                nextNode = slow->next;
                slow->next = prev;
                prev = slow;
                slow = nextNode;
            }

            ListNode *temp = head;
            while (prev != NULL)
            {
                twinSum = max(twinSum, prev->val + temp->val);

                prev = prev->next;
                temp = temp->next;
            }

            return twinSum;
        }
};