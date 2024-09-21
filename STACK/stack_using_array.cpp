#include <bits/stdc++.h>
using namespace std;
#define mx 50

int stck[mx], tail = -1;
void push(int val)
{
    tail++;
    stck[tail] = val;
}
int pop()
{
    int t;
    if (tail == -1)
    {
        cout << "The stack is empty" << endl;
        return 0;
    }
    else
    {
        t = stck[tail];
        tail--;
        return t;
    }
}
void display()
{
    int i;

    if (tail == -1)
        cout << "No Element Found" << endl;
    else
    {
        cout << "The stack :";
        for (int i = 0; i <= tail; i++)
        {
            cout << stck[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int op, num, n;
    while (true)
    {
        cout << "Choose an Option:\n1. Insert (Push)\n2. Delete (Pop)\n3. DIsplay\n4.Exit\nOption: ";
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "Enter a number to insert in stack: ";
            cin >> num;
            push(num);
            break;
        case 2:
            n = pop();
            if (n != 0)
                cout << n << " is poped" << endl;
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        default:
            cout << "Wrong Input" << endl;
        }
    }
    return 0;
}