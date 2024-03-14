#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, int val) // head will be updated so use reference
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return; // should be returned here
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "Enter your option:" << endl;
        cout << "Option 1: insert at tail" << endl;
        cout << "Option 2: print" << endl;
        cout << "Option 3: terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter your value:" << endl;
            int val;
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (op == 2)
        {
            print(head);
            cout << endl;
        }
        else if (op == 3)
        {
            break;
        }
    }

    return 0;
}