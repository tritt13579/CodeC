#include <stdio.h>
#define MAX 50
int x[MAX];
int k, n;
int i;

void xuatnghiem()
{
    for (int i = 1; i <= k; i++)
        printf("%d ", x[i]);
    printf("\n");
}

int Try(int i)
{
    for (int j = x[i - 1] + 1; j <= n - k + i; j++)
    {
        x[i] = j;
        if (i == k)
            xuatnghiem();
        else
            return Try(i + 1);
    }
}

int main()
{
    x[0] = 0;
    printf("Nhap k, n: ");
    scanf("%d%d", &k, &n);
    Try(1);
}