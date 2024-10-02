#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar, ac, br, bc;
    ar = ac = br = bc = 3;
    int a[ar][ac], b[br][bc];
    for (int i = 0; i < ar; i++)
    {
        for (int j = 0; j < ac; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < br; i++)
    {
        for (int j = 0; j < bc; j++)
        {
            cin >> b[i][j];
        }
    }
    int ans[ar][ac];
    for (int i = 0; i < ar; i++)
    {
        for (int j = 0; j < bc; j++)
        {
            ans[i][j] = 0;
            for (int k = 0; k < ac; k++)
            {
                ans[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < ar; i++)
    {
        for (int j = 0; j < ac; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}