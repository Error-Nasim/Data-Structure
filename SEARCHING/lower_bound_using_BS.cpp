#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int ar[], int n, int target)
{
    int l = 0;     // start index ke left nibo
    int r = n - 1; // last index ke right nibo
    int ans = n;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (ar[mid] >= target) // eta ans hote pare or ans obossoi mid er dan dike ache
                               // ar[mid]>target ei logiv=c dile upper bound ber hobe
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            // daner half bad diye bamer half check korbo
            l = mid + 1;
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
    // int ind = (lower_bound(a, a + n, target) - a);
    /*
       c++ there is lower bound STL lower_bound(start pointer,end pointer,target)-start pointer
        same for upper bound
    */
    cout << "Lower Bound " << ind;
    return 0;
}
