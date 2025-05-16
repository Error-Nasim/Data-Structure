#include <bits/stdc++.h>
using namespace std;

void primeSieve(int n)
{
    bool prime[n + 1] = {false};

    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == false)
        {
            for (int j = i * i; j <= n; j += i)
                prime[i] = true;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == false)
            cout << i << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    primeSieve(n);
    return 0;
}
