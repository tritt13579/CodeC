#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    // Lấy hai số nhỏ nhất và tính tổng của chúng
    int min1 = a[0];
    int min2 = a[1];
    int result = min1 + min2;

    cout << result << endl;

    return 0;
}
