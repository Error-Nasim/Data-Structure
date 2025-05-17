#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> c(n);
    for (int &x : c)
        cin >> x;
    int x;
    cin >> x;
    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= x; j++)
        {
            if (i == 0 && j == 0)
                dp[i][j] = 1;
            else
            {
                if (c[i - 1] > j)
                {
                    dp[i][j] = dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j] + dp[i][j - c[i - 1]];
                }
            }
        }
    }
    cout << dp[n][x];
    return 0;
}