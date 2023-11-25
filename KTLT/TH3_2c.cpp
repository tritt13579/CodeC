#include <stdio.h>
#define MAX 50

int x[MAX];
bool c[MAX];
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
    for (int j = 1; j <= n; j++)
        if (c[j] == 0)
        {
            x[i] = j;
            if (i == k)
                xuatnghiem();
            else
                c[j] = 1;
            Try(i + 1);
            c[j] = 0;
        }
}

int main()
{
    printf("Nhap k, n: ");
    scanf("%d%d", &k, &n);
    Try(1);
}