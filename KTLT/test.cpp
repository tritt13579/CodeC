#include <stdio.h>

int min(int a[], int n)
{
    int min = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0 && a[i] < min)
        {
            min = a[i];
            break;
        }
    }
    for (int j = i + 1; j < n; j++)
    {
        if (a[j] > 0 && a[j] < min)
            min = a[j];
    }
    if (min)
        return min;
    else
        return -1;
}

int main()
{
    int a[4] = {1, 2, 3, 4};
    int n;
    printf("%d", min(a, 4));
}