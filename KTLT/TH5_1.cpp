#include <iostream>
using namespace std;

// a
int lt(int a, int l, int r)
{
    if (l == r)
        return a;
    int m = (l + r) / 2;
    return lt(a, l, m) * lt(a, m + 1, r);
}

// b
int tong(int a[], int l, int r)
{
    if (l == r)
        return a[l];
    int m = (l + r) / 2;
    return tong(a, l, m) + tong(a, m + 1, r);
}

int main()
{
    // int a, n;
    // cin >> a >> n;
    // cout << lt(a, 1, n);
    int b[100], k;
    cin >> k;
    for (int i = 0; i < k; i++)
        cin >> b[k];
    cout << tong(b, 0, k - 1);
}