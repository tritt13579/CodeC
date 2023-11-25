#include <stdio.h>
#define MAX 100
int n, s, t[MAX], x[MAX], count = 1;

void DocFile()
{
    FILE *f = fopen("Lab4_3.inp", "r");
    if (f == NULL)
        printf("Loi file");
    else
    {
        fscanf(f, "%d\n", &n);
        fscanf(f, "%d\n", &s);
        for (int i = 1; i <= n; i++)
            fscanf(f, "%d", &t[i]);
        fclose(f);
    }
}

void Xuat()
{
    printf("%d\t%d\n", n, s);
    for (int i = 1; i <= n; i++)
        printf("%d\t", t[i]);
    printf("\n");
}

void xuatnghiem()
{
    int tong = 0;
    for (int i = 1; i <= n; i++)
    {
        tong += x[i] * t[i];
    }
    if (tong == s)
    {
        printf("C%d: ", count++);
        for (int i = 1; i <= n; i++)
        {
            if (x[i])
            {
                printf("(%d)%d\t", i, t[i]);
            }
        }
        printf("\n");
    }
}
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        x[i] = j;
        if (i == n)
            xuatnghiem();
        else
            Try(i + 1);
    }
}

int main()
{
    DocFile();
    Xuat();
    Try(1);
    return 0;
}