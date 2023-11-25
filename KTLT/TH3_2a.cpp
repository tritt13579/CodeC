#include <stdio.h>
#define MAX 100
int n;
int x[MAX];

void print()
{
    for (int i = 1; i <= n; i++)
        printf("%d ", x[i]);
    printf("\n");
}

void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        x[i] = j;
        if (i == n)
            print();
        else
            Try(i + 1);
    }
}

int main()
{
    printf("Nhap n: ");
    scanf("%d", &n);
    Try(1);
}