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
    const int INF = 1e9;
    vector<vector<int>> dp(n + 1, vector<int>(x + 1, INF));
    for (int i = 0; i <= n; i++)
        dp[i][0] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= x; j++)
        {

            if (c[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = min(dp[i - 1][j], 1 + dp[i][j - c[i - 1]]);
            }
        }
    }
    if (dp[n][x] == INF)
        cout << "-1";
    else
        cout << dp[n][x];
    return 0;
}