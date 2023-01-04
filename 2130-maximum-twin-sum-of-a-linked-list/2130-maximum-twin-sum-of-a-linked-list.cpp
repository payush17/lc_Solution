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
        int pairSum(ListNode *head)
        {
            vector<int> sum;
            ListNode *temp = head;
            int len = 0;
            while (temp != NULL)
            {
                sum.push_back(temp->val);
                temp = temp->next;
                len++;
            }
            int low = 0;
            int high = len - 1;
            int maxTwinsum = 0;
            while (low < high)
            {
                int local_sum = sum[low] + sum[high];
                if (maxTwinsum < local_sum)
                    maxTwinsum = local_sum;
                low++;
                high--;
            }

            return maxTwinsum;
        }
};