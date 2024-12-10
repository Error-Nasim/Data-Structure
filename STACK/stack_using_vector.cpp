#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if (v.size() == 0)
            return true;
        else
            return false;
    }
};

/*
YOU CAN FIND THE TRUTH IN MY CODE *_* NASIM
*/

int main()
{
    myStack st;

    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}