#include <bits/stdc++.h>
using namespace std;
#define mx 999
int q[mx], head = 0, tail = -1;

void insert(int val)
{
    if (tail < mx)
    {
        tail++;
        q[tail] = val;
    }
    else
    {
        cout << "NO space in queue\n";
    }
}
int dlt()
{
    int t;
    if (head == tail)
    {
        cout << "Empty Queue" << endl;
        return -999;
    }
    t = q[head];
    head++;
    return t;
}
void display()
{
    if (head > tail)
    {
        cout << "Empty Queue";
        return;
    }
    cout << "The queue is: ";
    for (int i = head; i <= tail; i++)
    {
        cout << q[i] << " ";
    }
    cout << endl;
}
int main()
{
    int op, num, n;
    while (true)
    {
        cout << "Choose an Option:\n1. Insert \n2. Delete \n3. DIsplay\n4.Exit\nOption: ";
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "Enter a number to insert in queue: ";
            cin >> num;
            insert(num);
            break;
        case 2:
            n = dlt();
            if (n != -999)
                cout << n << " is deleted" << endl;
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