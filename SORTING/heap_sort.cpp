#include <bits/stdc++.h>
using namespace std;
void heapify(int a[], int n, int i)
{
    int large = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    while (l < n && a[l] > a[large])
        large = l;
    while (r < n && a[r] > a[large])
        large = r;
    if (large != i)
    {
        swap(a[i], a[large]);
        heapify(a, n, large);
    }
}
void heapSort(int a[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);
    for (int i = n - 1; i >= 0; i--)
    {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}
int main()
{
    int n = 6;
    int arr[n] = {12, 11, 13, 5, 6, 7};

    cout << "Original array: ";
    printArray(arr, n);

    heapSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}