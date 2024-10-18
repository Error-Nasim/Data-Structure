
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
void insert_at_head(node *&head, int v)
{
    node *newNode = new node(v);
    newNode->next = head;
    head = newNode;
}
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
void insert_in_sorted_way(node *&head, int v)
{
    node *newNode = new node(v);

    if (head == NULL || head->val >= v)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    node *i = head;
    while (i->next != NULL && i->next->val < v)
    {
        i = i->next;
    }

    // Insert the new node after 'i'
    newNode->next = i->next;
    i->next = newNode;
}

void print_reverse(node *head)
{
    if (head == NULL)
        return;
    print_reverse(head->next);
    cout << head->val << " ";
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
    /* Just paste this as A INPUT
    20 30 10 50 40 -1
    */
    node *head = NULL;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        insert_in_sorted_way(head, v);
    }
    cout << "Normal: ";
    print(head);
    print_reverse(head);
    return 0;
}
