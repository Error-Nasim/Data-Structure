#include <bits/stdc++.h>
using namespace std;
bool messi(int i, string s, int n)
{
    if (i >= n / 2)
        return true;
    if (s[i] != s[n - i - 1])
        return false;
    messi(i + 1, s, n);
}
int main()
{
    string s = "madama";
    int n = s.length();
    if (messi(0, s, n))
        cout << "Palindrom";
    else
        cout << "No";

    return 0;
}