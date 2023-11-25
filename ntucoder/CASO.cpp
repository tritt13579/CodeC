#include <iostream>
#include <algorithm>
using namespace std;

long long cs(int a[], int n)
{
    long long count = 1;
    long long cap = 0;
    sort(a, a + n);
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
            count++;
        else
        {
            if (count > 1)
                cap += (count * (count - 1)) / 2;
            count = 1;
        }
    }
    if (count > 1)
        cap += (count * (count - 1)) / 2;
    return cap;
}

int main()
{
    int n, a[100000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << cs(a, n);
}