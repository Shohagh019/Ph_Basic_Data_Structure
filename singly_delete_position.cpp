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
void insert_at_position(Node* head,int pos, int val)
{
    Node* newNode = new Node(val);
    Node *tmp = head;
    for(int i = 1; i <= pos-1; i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;

}
void insert_at_head(Node*&head, int val)
{
    Node* newNode = new Node(val);
    if (head == NULL)
    {
        head=newNode;
    }
    newNode->next=head;
    head=newNode;
}
void delete_at_position(Node* head,int pos)
{
    Node* tmp = head;
    for(int i=0; i<pos-1; i++)
    {
        tmp=tmp->next;
    }
    Node* deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
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
        cout << "Option 2: insert at a position" << endl;
        cout << "Option 3: insert at head" << endl;
        cout << "Option 4: delete position" << endl;
        cout << "Option 5: print" << endl;
        cout << "Option 6: terminate" << endl;
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
            cout<<"enter position:"<<endl;
            int pos;
            cin >> pos;
            cout<<"Enter value:"<<endl;
            int val;
            cin >> val;
            if(pos == 0)
            {
                insert_at_head(head,val);
            }
            else
            {
                insert_at_position(head,pos,val);
            }
            
        }
        else if (op == 3)
        {
            cout<<"enter your value:" << endl;
            int val;
            cin >> val;
            insert_at_head(head,val);
        }
        else if (op == 4)
        {

            cout<<"enter your position:" << endl;
            int pos;
            cin >> pos;
            delete_at_position(head,pos);
        }
        else if (op == 5)
        {
            print(head);
            cout << endl;
        }
        else if (op == 6)
        {
            break;
        }
    }
    return 0;
}