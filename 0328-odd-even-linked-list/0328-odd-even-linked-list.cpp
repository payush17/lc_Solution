/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* oddEvenList(ListNode *head)
        {
            vector<int> oddInd;
            vector<int> evenInd;
            int temp = 1;
            ListNode *curr = head;
            while (curr != NULL)
            {
                if (temp % 2 == 0)
                    evenInd.push_back(curr->val);
                else
                    oddInd.push_back(curr->val);
                temp++;
                curr = curr->next;
            }
            for (int x: evenInd)
            {
                oddInd.push_back(x);
            }
            ListNode* oddeven = new ListNode();
            ListNode* ans = oddeven;
            for (int i = 0; i < oddInd.size(); i++)
            {
                ans->next = new ListNode(oddInd[i]);
                ans = ans->next;
            }
            return oddeven->next;
        }
};