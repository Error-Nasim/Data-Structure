#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int ar[], int n, int target)
{
    int l = 0;     // start index ke left nibo
    int r = n - 1; // last index ke right nibo
    while (l <= r)
    {
        int mid = (l + r) / 2; // proti bar mid ber kore nibo
        if (ar[mid] == target)
        {
            return mid; // peye gele mid ke retun kore dibo
        }
        else if (ar[mid] < target)
        {
            // target boro hole dane jabo
            l = mid + 1;
        }
        else
        {
            // target choto hole bame jabo
            r = mid - 1;
        }
    }
    return -1; // na pawa gele return -1 korbo
}
// TIME COMPLEXITY = O(logN);
int main()
{
    /*BInary Search korar jonno array obossoi sorted thaka lagbe..

      Sorted na thakle sort kore nibo */
    int a[5] = {2, 4, 5, 7, 10};

    int n = 5;
    int target = 7;
    int ind = BinarySearch(a, n, target);
    if (ind == -1)
    {
        cout << "NOT FOUND" << endl;
    }
    else
    {
        cout << "FOUND at index " << ind << endl; // Corrected output for found case
    }
    return 0;
}
