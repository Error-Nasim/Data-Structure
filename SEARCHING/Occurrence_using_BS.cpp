#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int ar[], int n, int target)
{
    int l = 0;
    int r = n - 1;
    int ans = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (ar[mid] == target)
        {
            ans = mid;
            r = mid - 1;  // First occurrence ber korbe, pawar poreu check korbo left ki aro ache kina

            l = mid + 1;  // Last occurrence ber korbe, pawar poreu check korbo right ki aro ache kina

            // Total Occurence = Last occurrence - first occurence + 1 ;
        }
        else if (ar[mid] < target)
        {

            l = mid + 1;
        }
        else
        {

            r = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n, t;
    cin >> n >> t;
    int ar[n];
    for (auto &u : ar)
    {
        cin >> u;
    }
    int ind = BinarySearch(ar, n, t);
    if (ind == -1)
    {
        cout << "NOT FOUND" << endl;
    }
    else
    {
        cout << "FOUND at index " << ind << endl;
    }
    return 0;
}
