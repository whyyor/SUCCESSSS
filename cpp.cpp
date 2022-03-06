class Solution
{
public:
    // Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x)
    {
        // Your code here
        if (head == NULL)
        {
            Node *temp = new Node(x);
            head = temp;
            return head;
        }
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
        return head;
    }

    // Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)
    {
        // Your code
        if (head == NULL)
        {
            Node *temp = new Node(x);
            head = temp;
            return head;
        }
        Node *cur = head;
        while (cur->next != NULL)
        {
            cur = cur->next;
        }
        Node *temp = new Node(x);
        cur->next = temp;
        return head;
    }
};
