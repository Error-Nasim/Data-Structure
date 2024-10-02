#include <bits/stdc++.h>
using namespace std;
void messi(int i, int a[], int n)
{
    if (i >= n / 2)
        return;
    swap(a[i], a[n - i - 1]);
    messi(i + 1, a, n);
}
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    messi(0, a, 5);
    cout << "After swap: ";
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    return 0;
}