#include <stdio.h>
#include <math.h>

#define MAX 100

void doc(int a[], int &n)
{
	FILE *f = fopen("Lab2_1.inp", "r");
	if (f == NULL)
		printf("Loi doc file");
	else
	{
		fscanf(f, "%d", &n);
		for (int i = 0; i < n; i++)
			fscanf(f, "%d", &a[i]);
		fclose(f);
	}
}

void xuat(int a[], int n)
{
	printf("So phan tu trong mang: %d\n", n);
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
}

int ktcp(int n)
{
	int i = sqrt(n);
	if (i * i == n)
		return 1;
	else
		return 0;
}

int ktnt(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return 0;
	return n > 1;
}

float tbc(int a[], int n, int &c)
{
	c = 0;
	float s = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 1)
		{
			c++;
			s += a[i];
		}
	}
	return s / (float)c;
}

void ghi(int a[], int n)
{
	FILE *f = fopen("Lab2_1.out", "w");
	if (f == NULL)
		printf("Loi ghi file");
	else
	{
		int kt = 0;
		for (int i = 0; i < n; i++)
		{
			if (ktcp(a[i]))
			{
				fprintf(f, "%d ", a[i]);
				kt = 1;
			}
		}
		if (kt == 0)
			fprintf(f, "-1");
		int c;
		fprintf(f, "\nTBC: %.2f\n", tbc(a, n, c));
		fprintf(f, "So luong so le: %d", c);
		fclose(f);
	}
}

int main()
{
	int a[MAX], n;
	doc(a, n);
	xuat(a, n);
	ghi(a, n);
}