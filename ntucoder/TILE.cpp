#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, gh = 100000, res = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        res++;
        gh = min(gh - 1, a[i]);
        if (gh == 0)
        {
            cout << res;
            return 0;
        }
    }
}
