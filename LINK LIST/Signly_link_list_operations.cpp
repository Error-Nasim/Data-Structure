#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(node *&head, int v)
{
    node *newNode = new node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void insert_at_any_position(node *&head, int pos, int v)
{
    node *newNode = new node(v);
    node *tmp = head;
    for (int i = 0; i < pos; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "INVALID INDEX!!" << endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void insert_at_head(node *&head, int v)
{
    node *newNode = new node(v);
    newNode->next = head;
    head = newNode;
}
void delete_from_position(node *head, int pos)
{
    node *tmp = head;
    for (int i = 0; i < pos; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "INVALID INDEX!!" << endl;
            return;
        }
    }
    if (tmp->next == NULL)
    {
        cout << "INVALID INDEX!!" << endl;
        return;
    }
    node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
void delete_head(node *&head)
{
    if (head == NULL)
    {

        cout << "Head is unavailable !!" << endl;
        return;
    }
    node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}
void print(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    node *head = NULL;

    while (true)
    {
        cout << "Option 1: Insert At Tail" << endl;
        cout << "Option 2: Insert At Any Position" << endl;
        cout << "Option 3: Insert At Head" << endl;
        cout << "Option 4: Delete From Position" << endl;
        cout << "Option 5: Delete Head" << endl;
        cout << "Option 6: print Link List" << endl;
        cout << "Option 7: Terminate" << endl;
        int op;
        cout << "Enter an option: ";
        cin >> op;
        if (op == 1)
        {
            cout << "Enter value to insert: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            int v, pos;
            cout << "Enter position: ";
            cin >> pos;
            cout << " Enter value: ";
            cin >> v;
            if (pos == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
                insert_at_any_position(head, pos, v);
            }
        }
        else if (op == 3)
        {
            int v;
            cout << " Enter value: ";
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 4)
        {
            int pos;
            cout << "Enter position to Delete: " << endl;
            cin >> pos;
            delete_from_position(head, pos);
            cout << "Deleted " << pos << "NODE" << endl;
        }
        else if (op == 5)
        {
            delete_head(head);
            cout << "Head Deleted" << endl;
        }
        else if (op == 6)
        {
            print(head);
        }
        else if (op == 7)
        {
            break;
        }
        else
        {
            cout << "Wong Input!!" << endl;
        }
    }

    return 0;
}