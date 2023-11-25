#include <stdio.h>
#include <math.h>

bool KTDS(int a[], int n)
{
	bool kt = true; // co hieu
	int i;
	for (i = 0; i < n - 1; i++)
		if (a[i] > a[i + 1])
		{
			kt = false;
			break;
		}
	return kt;
}
// kiem tra chinh phuong
bool CP(int x)
{
	int i = sqrt(x);
	if (i * i == x)
		return true;
	return false;
}
// tim va in ra so cp nho nhat
void MinCP(int a[], int n)
{
	// tim so cp dau tien
	int i, p;
	for (i = 0; i < n; i++)
		if (CP(a[i]))
			break;
	if (i < n)
	{					// co so CP trong mang
		int min = a[i]; // linh canh
		for (p = i + 1; p < n; p++)
			if (CP(a[p]) && a[p] < min)
				min = a[p];
		printf("so CP nho nhat: %d\n", min);
	}
	else
	{
		printf("Khong co so chinh phuong!\n");
	}
}
//
int main()
{
	int a[] = {10, 2, 8, 4, 5};
	int n = sizeof(a) / sizeof(a[0]);
	MinCP(a, n);
	if (KTDS(a, n))
		printf("day tang");
	else
		printf("day khong tang");
}
