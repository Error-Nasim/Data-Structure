#include <bits/stdc++.h>
using namespace std;
void selection_sort(int ar[], int n)
{
    // TIME COMPLEXITY = O(n^2);
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (ar[j] < ar[min])
            {
                min = j;
            }
        }
        swap(ar[min], ar[i]);
    }
    cout << "After selection sort :";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
}

void bubble_sort(int ar[], int n)
{
    // TIME COMPLEXITY = O(n^2);
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                swap(ar[j], ar[j + 1]);
            }
        }
    }
    cout << "After Bubble sort :";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
}

void insertion_sort(int ar[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int j = i;
        while (j > 0 && ar[j - 1] > ar[j])
        {
            swap(ar[j - 1], ar[j]);
            j--;
        }
    }
    cout << "After insertion sort :";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
}

int main()
{
    int ar[6] = {3, 2, 6, 1, 4, 5};
    cout << "Before selection sort :";
    for (int i = 0; i < 6; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
    // selection_sort(ar, 6);
    // bubble_sort(ar, 6);
    insertion_sort(ar, 6);
    return 0;
}