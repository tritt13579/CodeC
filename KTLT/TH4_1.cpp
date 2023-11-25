#include <stdio.h>
#define MAX 100
int c[MAX][MAX], x[MAX], chuaxet[MAX], n;

void DocFile()
{
    FILE *f = fopen("DULICH.txt", "r");
    if (f == NULL)
        printf("Loi file");
    else
    {
        fscanf(f, "%d\n", &n);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                fscanf(f, "%d", &c[i][j]);
            fscanf(f, "\n");
        }
        fclose(f);
    }
}

void XuatMT()
{
    printf("%d\n", n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }
}

void InKetQua()
{
    int s = 0;
    printf("TP1 -> ");
    for (int i = 2; i <= n; i++)
    {
        printf("TP%d -> ", x[i]);
        s += c[x[i - 1]][x[i]];
    }
    s += c[x[n]][1];
    printf("TP1\n");
    printf("Tong chi phi la: %d\n", s);
}

void TP(int i)
{
    for (int j = 2; j <= n; j++)
        if (chuaxet[j] == 0)
        {
            x[i] = j;
            chuaxet[j] = 1;
            if (i == n)
                InKetQua();
            else
                TP(i + 1);
            chuaxet[j] = 0;
        }
}

int main()
{
    for (int i = 2; i <= n; i++)
        chuaxet[i] = 0;
    x[1] = 1;

    DocFile();
    XuatMT();
    TP(2);

    return 0;
}