#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

#define MAX 100

void tao()
{
	int n;
	FILE *f = fopen("Lab2_2.dat", "w");
	if (f == NULL)
		printf("Loi file");
	else
	{
		printf("Nhap n: ");
		scanf("%d", &n);

		fprintf(f, "%d\n", n);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				fprintf(f, "%d ", rand() % 1000);
			fprintf(f, "\n");
		}
		fclose(f);
	}
}

void doc(int a[MAX][MAX], int &n)
{
	FILE *f = fopen("Lab2_2.dat", "r");
	if (f == NULL)
		printf("Loi file");
	else
	{
		fscanf(f, "%d", &n);
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				fscanf(f, "%d", &a[i][j]);
		fclose(f);
	}
}

void xuat(int a[MAX][MAX], int n)
{
	printf("So phan tu cua ma tran: %d\n", n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}

int ktnt(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return 0;
	return n > 1;
}

void ghi(int a[MAX][MAX], int n)
{
	int dem = 0;
	FILE *f = fopen("Lab2_2.out", "w");
	if (f == NULL)
		printf("Loi");
	else
	{
		fprintf(f, "\n");
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (ktnt(a[i][j]))
				{
					dem++;
					fprintf(f, "%d\t", a[i][j]);
				}
		rewind(f);
		if (dem)
			fprintf(f, "%d", dem);
		else
			fprintf(f, "Khong co so nguyen to");
		fclose(f);
	}
}

int main()
{
	int a[MAX][MAX], n;
	tao();
	doc(a, n);
	xuat(a, n);
	ghi(a, n);
	return 0;
}
