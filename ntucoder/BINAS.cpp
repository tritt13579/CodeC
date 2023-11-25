#include <iostream>
using namespace std;

int n, x[100];
void xuat()
{
    for (int i = 1; i <= n; i++)
        cout << x[i];
    cout << endl;
}

void dq(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        x[i] = j;
        if (n == i)
            xuat();
        else
            dq(i + 1);
    }
}

int main()
{
    cin >> n;
    dq(1);
}