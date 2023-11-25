#include <iostream>
using namespace std;
#define MAX 100

void InsertionSort(int a[MAX], int n)
{
    int i, j, x;
    for (i = 1; i < n; i++)
    {
        x = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > x)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = x;
        cout << x << " " << j + 1 << endl;
    }
}

int main()
{
    int n, a[MAX];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    InsertionSort(a, n);
}