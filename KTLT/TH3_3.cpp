#include <stdio.h>
#define MAX 50

int x[MAX], s[MAX];
int n;

void xuatnghiem(int k)
{
    for (int i = 1; i <= k; i++)
        if (i != k)
            printf("%d + ", x[i]);
        else
            printf("%d ", x[i]);
    printf("\n");
}

void ghifile(int k)
{
    FILE *f = fopen("Lab4_3.out", "a");
    if (f == NULL)
        printf("Loi file");
    else
    {
        for (int i = 1; i <= k; i++)
            if (i != k)
                fprintf(f, "%d + ", x[i]);
            else
                fprintf(f, "%d ", x[i]);
        fprintf(f, "\n");
        fclose(f);
    }
}

void phantichso(int i)
{
    for (int j = x[i - 1]; j <= n - s[i - 1]; j++)
    {
        x[i] = j;
        s[i] = s[i - 1] + j;
        if (x[i] == n - s[i - 1])
        {
            xuatnghiem(i);
            ghifile(i);
        }
        else
            phantichso(i + 1);
    }
}

int main()
{
    printf("Nhap n: ");
    scanf("%d", &n);
    x[0] = 1;
    s[0] = 0;
    phantichso(1);

    return 0;
}
