#include <bits/stdc++.h>
using namespace std;
void merge(int ar[], int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    int tmp[high - low + 1] = {0};
    int x = 0;
    while (left <= mid && right <= high)
    {
        if (ar[left] < ar[right])
        {
            tmp[x++] = ar[left++];
        }
        else
        {
            tmp[x++] = ar[right++];
        }
    }
    while (left <= mid)
    {
        tmp[x++] = ar[left++];
    }
    while (right <= high)
    {
        tmp[x++] = ar[right++];
    }
    for (int i = low; i <= high; i++)
    {
        ar[i] = tmp[i - low];
    }
}
void merge_sort(int ar[], int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    merge_sort(ar, low, mid);
    merge_sort(ar, mid + 1, high);
    merge(ar, low, mid, high);
}
int main()
{
    int n = 10;
    int ar[n] = {2, 4, 5, 8, 6, 7, 9, 10, 1, 3};
    cout << "Before Merge sort :";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
    merge_sort(ar, 0, n - 1);
    cout << "After Merge sort :";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}