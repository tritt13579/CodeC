#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, idx = 0, cnt = 0;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n, greater<int>());
    if (m == 1)
    {
        cout << "0";
        return 0;
    }
    while (m > 0)
    {
        if (idx == n)
        {
            cout << "-1";
            return 0;
        }
        if (m > a[idx])
        {
            m = m - a[idx] + 1;
            cnt++;
            idx++;
        }
        else
        {
            m -= a[idx];
            cnt++;
        }
    }
    cout << cnt;
}