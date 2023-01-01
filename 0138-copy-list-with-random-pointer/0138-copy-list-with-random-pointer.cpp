/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution
{
    public:
        Node* copyRandomList(Node *head)
        {
            unordered_map<Node*, Node*> map;
            //map[NULL]=NULL;
            Node *temp = head;
            int cnt = 0;
            while (temp != NULL)
            {
                Node *curr = new Node(temp->val);
                map[temp] = curr;
                temp = temp->next;
            }
            temp = head;
            while (temp != NULL)
            {
                Node *copy = map[temp];
                copy->next = map[temp->next];
                copy->random = map[temp->random];
                temp=temp->next;
            }

            return map[head];
        }
};