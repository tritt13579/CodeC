#include <stdio.h>
#define MAX 100
int n, s, t[MAX], x[MAX], tmax[MAX], kq[MAX], sum, c, cbest;
bool kt = false;

void DocFile()
{
    FILE *f = fopen("ATM.inp", "r");
    if (f == NULL)
        printf("Loi file");
    else
    {
        fscanf(f, "%d\t", &n);
        fscanf(f, "%d\n", &s);
        for (int i = 1; i <= n; i++)
            fscanf(f, "%d", &t[i]);
        fclose(f);
    }
}

void XuatMang()
{
    printf("%d\t%d\n", n, s);
    for (int i = 1; i <= n; i++)
        printf("%d\t", t[i]);
    printf("\n");
}

void capnhat()
{
    if (sum == s && c < cbest)
    {
        cbest = c;
        kt = true;
        for (int i = 1; i <= n; i++)
            kq[i] = x[i];
    }
}

void xuatnghiem()
{
    FILE *f = fopen("ATM_out.out", "w");
    if (f)
    {
        if (cbest < n + 1)
        {
            fprintf(f, "Cach tra tien cua ATM: ");
            for (int i = 1; i <= n; i++)
                if (kq[i])
                    fprintf(f, "%d\t", t[i]);
            fprintf(f, "\n");
            fprintf(f, "Tong so to la: %d", cbest);
        }
        else
            fprintf(f, "Khong co phuong an tra tien");
    }
    else
        printf("Loi file");
}

void ATM(int i)
{
    if (c + (s - sum) / tmax[i] < cbest)
        for (int j = 0; j <= 1; j++)
        {
            x[i] = j;
            sum += x[i] * t[i];
            c += j;
            if (i == n)
                capnhat();
            else if (sum < s)
                ATM(i + 1);
            sum -= x[i] * t[i];
            c -= j;
        }
}

int main()
{
    DocFile();
    XuatMang();
    tmax[n] = t[n];
    for (int i = n - 1; i >= 1; i--)
    {
        tmax[i] = tmax[i + 1];
        if (tmax[i] < t[i])
            tmax[i] = t[i];
    }

    sum = 0;
    c = 0;
    cbest = n + 1;
    ATM(1);
    xuatnghiem();

    return 0;
}
