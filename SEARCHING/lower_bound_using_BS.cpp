#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int ar[], int n, int target)
{
    int l = 0;     // start index ke left nibo
    int r = n - 1; // last index ke right nibo
    int ans = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (ar[mid] <= target) // eta ans hote pare or ans obossoi mid er dan dike ache
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            // daner half bad diye bamer half check korbo
            r = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int a[5] = {2, 4, 5, 8, 10};

    int n = 5;
    int target = 7;
    int ind = BinarySearch(a, n, target);
    if (ind == -1)
    {
        cout << "Lower bound NOT FOUND" << endl;
    }
    else
    {
        cout << " Lower bound FOUND at index " << ind << endl; // Corrected output for found case
    }
    return 0;
}
