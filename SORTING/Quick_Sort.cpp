#include <bits/stdc++.h>
using namespace std;
/*
    Time complexity=O(nlogn);
    Space Complexity=O(1);
*/
int partition(int ar[], int low, int high)
{
    int pivot = ar[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (ar[i] <= pivot && i < high)
        {
            i++;
        }
        while (ar[j] > pivot && j > low)
        {
            j--;
        }
        if (i < j)
            swap(ar[i], ar[j]);
    }
    swap(ar[low], ar[j]);
    return j;
}
void quick_sort(int ar[], int low, int high)
{
    if (low < high)
    {
        int pIndex = partition(ar, low, high);
        quick_sort(ar, low, pIndex - 1);
        quick_sort(ar, pIndex + 1, high);
    }
}
int main()
{
    int n = 10;
    int ar[n] = {2, 4, 5, 8, 6, 7, 9, 10, 1, 3};
    cout << "Before Quick sort :";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
    quick_sort(ar, 0, n - 1);
    cout << "After Quick sort :";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}
