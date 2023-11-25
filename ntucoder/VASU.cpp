#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, a[100];
    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a, a + n, greater<int>());

    int s = 0;
    for (int i = 0; i < n; ++i)
        s += max(a[i] - i, 0);

    cout << s;

    return 0;
}
