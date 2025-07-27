#include <bits/stdc++.h>
using namespace std;
int n, ar[15];
vector<int> currSub;
//  ALL POSSIBLE SUBSET
void sub(int i)
{
    // Base Case
    if (i >= n)
    {
        for (auto u : currSub)
            cout << u << " ";
        cout << endl;
        return;
    }
    // Dont take ar[i]
    sub(i + 1);
    // take ar[i]
    currSub.push_back(ar[i]);
    sub(i + 1);
    currSub.pop_back();
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    sub(0);
    return 0;
}