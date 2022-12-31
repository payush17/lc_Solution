/**
 *Definition for singly-linked list.
 *struct ListNode {
 *int val;
 *ListNode * next;
 *ListNode() : val(0), next(nullptr) {}
 *ListNode(int x) : val(x), next(nullptr) {}
 *ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* rotateRight(ListNode *head, int k)
        {
            int length = 1;
            if (head == NULL || head->next == NULL || k == 0) return head;
            ListNode *len = head;
            ListNode *dum = head;
            ListNode *trav = head;
            while (len->next != NULL)
            {
                length++;
                len = len->next;
                dum = dum->next;
            }
            int rot = k % length;
            if (rot == 0) return head;
            dum->next = head;

            rot = length - rot;
            for (int i = 0; i < rot; i++)
                dum = dum->next;

            ListNode *newHead = dum->next;

            dum->next = NULL;

            return newHead;
        }
};