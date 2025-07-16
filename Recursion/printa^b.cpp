#include <bits/stdc++.h>
using namespace std;
// Calculate a^B using exponention
// Time Complexcity log(b)
int pow(int a, int b)
{
    if (b == 0)
        return 1;
    if (b % 2 == 0)
    {
        int tmp = pow(a, b / 2);
        return tmp * tmp;
    }
    else
        return a * pow(a, b - 1);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << pow(a, b);
    return 0;
}