#include <bits/stdc++.h>
using namespace std;
int MaxSum(int ar[], int n)
{
    int sum = 0;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += ar[i];
        if (sum < 0)
            sum = 0;
        mx = max(mx, sum);
        }
    return mx;
}
int main()
{
    int n, a[100];
    /* Copy and paste this input:
    9
    -2 1 -3 4 -1 2 1 -5 4
    max sum=6
    */
    cout << "Array length: ";
    cin >> n;
    cout << "array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Max subarray Sum: " << MaxSum(a, n);
    return 0;
}