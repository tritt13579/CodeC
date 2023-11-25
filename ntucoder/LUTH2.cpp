#include <iostream>

using namespace std;

int lt(int x)
{
    if (x <= 0)
        return 0;
    while (x > 1)
    {
        if (x % 2 != 0)
            return 0;
        x /= 2;
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (lt(a[i]))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}