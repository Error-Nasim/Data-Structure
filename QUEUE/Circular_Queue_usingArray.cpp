#include <bits/stdc++.h>
using namespace std;
#define mx 5
int pq[mx], head = -1, tail = -1;

void insert(int val)
{
    if ((tail + 1) % mx == head)
    {
        cout << "Array is full" << endl;
    }
    else
    {
        if (head == -1)
            head = 0;
        tail = (tail + 1) % mx;
        pq[tail] = val;
    }
}

int dlt()
{
    int t;
    if (head == -1)
    {
        cout << "Empty Queue" << endl;
        t = -999;
    }
    else
    {
        t = pq[head];
        if (head == tail)
        {
            head = tail = -1;
        }
        else
        {
            head = (head + 1) % mx;
        }
    }
    return t;
}

void display()
{
    if (head == -1)
    {
        cout << "Empty Queue" << endl;
        return;
    }

    cout << "Queue elements: ";
    int i = head;
    while (i != tail)
    {
        cout << pq[i] << " ";
        i = (i + 1) % mx;
    }
    cout << pq[tail] << endl;
}

int main()
{
    int op, num, n;
    while (true)
    {
        cout << "Choose an Option:\n1. Insert \n2. Delete \n3. Display\n4. Exit\nOption: ";
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