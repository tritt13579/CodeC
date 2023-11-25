#include <stdio.h>

int tong(int a[], int n)
{
    if (n == 0)
        return 0;
    if (a[n - 1] % 2 == 0)
        return a[n - 1] + tong(a, n - 1);
    return tong(a, n - 1);
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;
    printf("%d", tong(a, n));
}