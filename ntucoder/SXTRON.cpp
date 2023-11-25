#include <iostream>

using namespace std;

void merge(int n, int m, int b[], int c[])
{
    int i = 0, j = 0;

    while (i < n || j < m)
    {
        if (j == m || (i < n && b[i] <= c[j]))
        {
            cout << "b" << i + 1 << " ";
            i++;
        }
        else
        {
            cout << "c" << j + 1 << " ";
            j++;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    int b[n], c[m];

    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < m; i++)
        cin >> c[i];
    merge(n, m, b, c);

    return 0;
}
