class Solution
{
public:
    Node *flatten(Node *head)
    {
        Node *cur = head;
        Node *cached = NULL;
        while (cur != NULL)
        {
            if (cur->child != NULL)
            {
                cached = cur->next;
                cur->next = cur->child;
                cur->next->prev = cur;
                cur->child = NULL;

                Node *temp = cur->next;
                while (temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = cached;
                if (cached != NULL)
                {
                    cached->prev = temp;
                }
            }
            cur = cur->next;
        }

        return head;
    }
};