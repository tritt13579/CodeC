#include <iostream>
using namespace std;

long long lt(int x, long long n)
{
    if (n == 0)
        return 1;
    long long res = lt(x, n / 2);
    if (n % 2)
        return (((res % 10000) * (res % 10000) % 10000) * (x % 10000)) % 10000;
    else
        return ((res % 10000) * (res % 10000) % 10000);
}

int main()
{
    int x;
    long long n;
    cin >> x >> n;
    cout << lt(x, n);
}
