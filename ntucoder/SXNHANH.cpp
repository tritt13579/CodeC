#include <iostream>
using namespace std;
#define MAX 100

void partition(int a[], int p, int r)
{
    int pivot = a[r];
    int i = p - 1;
    for (int j = p; j <= r - 1; j++)
    {
        if (a[j] <= pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[r]);
    for (int j = 0; j <= r; j++)
    {
        if (j == i + 1)
            cout << "[" << a[j] << "] ";
        else
            cout << a[j] << " ";
    }
}

int main()
{
    int a[MAX], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    partition(a, 0, n - 1);
}
// #include <iostream>
// using namespace std;
// #define MAX 100

// int partition(int a[], int p, int r)
// {
//     int pivot = a[r];
//     int i = p - 1;
//     for (int j = p; j <= r - 1; j++)
//     {
//         if (a[j] <= pivot)
//         {
//             i++;
//             swap(a[i], a[j]);
//         }
//     }
//     swap(a[i + 1], a[r]);
//     return i + 1;
// }

// int main()
// {
//     int a[MAX], n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     int pivotIndex = partition(a, 0, n - 1);

//     for (int i = 0; i < n; i++)
//     {
//         if (i == pivotIndex)
//             cout << "[" << a[i] << "] ";
//         else
//             cout << a[i] << " ";
//     }
//     return 0;
// }
