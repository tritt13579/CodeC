#include <iostream>
using namespace std;

// a
int Dem(int a[], int l, int r, int x)
{
    if (l == r)
        if (a[l] == x)
            return 1;
        else
            return 0;
    int m = (l + r) / 2;
    return Dem(a, l, m, x) + Dem(a, m + 1, r, x);
}

// b vị trí
int Max(int a[], int l, int r)
{
    if (l == r)
        return l + 1;
    int m = (l + r) / 2;
    return (a[Max(a, l, m) - 1] > a[Max(a, m + 1, r) - 1] ? Max(a, l, m) : Max(a, m + 1, r));
}

// b giá trị
int Max1(int a[], int l, int r)
{
    if (l == r)
        return a[l];
    int m = (l + r) / 2;
    return (Max1(a, l, m) > Max1(a, m + 1, r) ? Max1(a, l, m) : Max1(a, m + 1, r));
}

int main()
{
    int a[100], n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    // cout << Dem(a, 0, n - 1, x);
    cout << Max(a, 0, n - 1) << endl;
    // cout << Max1(a, 0, n - 1);
    return 0;
}