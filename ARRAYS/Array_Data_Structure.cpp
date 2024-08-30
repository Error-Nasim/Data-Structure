/*
CSE 252
Data Structures and Algorithms I Lab

The purpose of this lab is to understand and perform basic array
operations like traverse, insert, delete
*/
#include <bits/stdc++.h>
using namespace std;

void TraverseArray(int a[], int n)
{
    // Traverces and excesing the every elements in the array

    /* Substack 1
     Writing a loop from 0 to its size to acces all the elements in the array*/

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void InsertArray(int a[], int n, int value, int pos)
{
    /* Subtask 02
    Using for loop, shift the values of a[] to the right till position pos.
    Start from the last element of the array*/
    for (int i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    /* Subtask 03
    Update the array at index pos*/
    a[pos] = value;
}
void DeleteArray(int a[], int n, int pos)
{
    // Deletes the element at index pos

    /* Subtask 04
    Using for loop, shift the values of a[] to the left,
    starting from index pos. */
    for (int i = pos; i < n; i++)
    {
        a[i] = a[i + 1];
    }
}
void ReverseTraverse(int a[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void DeleteArrayRange(int a[], int n, int start, int ends)
{
    int diff = ends - start;
    for (int i = start; i < n - diff; i++)
    {
        a[i] = a[ends + 1];
        ends++;
    }
}

void ReverseFullArray(int a[], int n)
{
    int last = n;

    for (int i = 0; i < n / 2; i++)
    {
        swap(a[i], a[last - 1]);
        last--;
    }
}
int main()
{
    int n, a[100];
    /* Copy and paste this input:
    10
    0 1 2 3 4 5 6 7 8 9
    */
    cout << "Array lentgh: ";
    cin >> n;
    cout << "array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Orginal Array : ";
    TraverseArray(a, n);

    cout << "Array After insertation: ";
    InsertArray(a, n, 11, 5);
    n++;
    TraverseArray(a, n);

    cout << "ARRAY After Deletion: ";
    DeleteArray(a, n, 2);
    n--;
    TraverseArray(a, n);

    cout << "ARRAY After ReverseTraverse : ";
    ReverseTraverse(a, n);
    cout << "after deleteArrayRange : ";
    DeleteArrayRange(a, n, 2, 5);
    n -= (5 - 2) + 1;
    TraverseArray(a, n);

    ReverseFullArray(a, n);
    cout << "after ReverseFullArray : ";

    TraverseArray(a, n);

    return 0;
}