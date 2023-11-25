#include <iostream>
using namespace std;
#define MAX 100

void in(int a[], int n, int k, int i)
{
    for (int j = 0; j < n; j++)
    {
        if (j == k || j == i)
            cout << "[" << a[j] << "] ";
        else
            cout << a[j] << " ";
    }
    cout << endl;
}

void SelectionSort(int a[MAX], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int k = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[k])
                k = j;
        if (k != i)
            swap(a[k], a[i]);
        in(a, n, k, i);
    }
}

int main()
{
    int n, a[MAX];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    SelectionSort(a, n);
    // for (int i = 0; i < n; i++)
    //     cout << a[i] << " ";
}
