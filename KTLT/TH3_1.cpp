#include <stdio.h>

int sumdau(int a[], int n)
{
    if (n == 1)
        return a[0];
    return sumdau(a, n - 1) + a[n - 1];
}

int sumduoi(int a[], int n, int sum, int i)
{
    if (i >= n)
        return sum;
    return sumduoi(a, n, sum + a[i], i + 1);
}

int tiendau(int n)
{
    if (n == 0)
        return 100;
    return 1.065 * tiendau(n - 1);
}

int tienduoi(int n, int i, int s)
{
    if (i > n)
        return s;
    return tienduoi(n, i + 1, s * 1.065);
}

int main()
{
    // a
    int n = 5, sum = 0, i = 0;
    int a[] = {1, 2, 3, 4, 5};
    printf("Tinh tong de quy dau: %d\n", sumdau(a, n));
    printf("Tinh tong de quy duoi: %d\n", sumduoi(a, n, sum, i));
    // b
    n = 5, i = 1;
    int s = 100;
    printf("Tinh tien de quy dau: %d\n", tiendau(n));
    printf("Tinh tien de quy duoi: %d\n", tienduoi(n, i, s));

    return 0;
}