// // struc HocPhan
// #include <stdio.h>
// #define MAX 50

// struct HocPhan
// {
// 	char ma[7];
// 	char ten[50];
// 	unsigned int sotc;
// 	float dtb;
// };
// // nhap, xuat 1 hoc phan
// void Nhap(HocPhan &hp);
// void Xuat(HocPhan hp);
// // nhap, xuat n hoc phan
// void NhapDSHP(HocPhan ds[], int &n);
// void XuatDSHP(HocPhan ds[], int n);
// //
// int main()
// {
// 	HocPhan hp;
// 	Nhap(hp);
// 	Xuat(hp);
// 	int n;
// 	HocPhan ds[MAX];
// 	// NhapDSHP(ds,n);
// 	// XuatDSHP(ds,n);
// }
// // nhap 1 hoc phan
// // void Nhap(HocPhan &hp)
// // {
// // 	printf("nhap ma so HP:");
// // 	scanf("%s", &hp.ma);
// // 	fflush(stdin);
// // 	printf("nhap ten HP:");
// // 	gets(hp.ten);
// // 	printf("nhap so tin chi HP:");
// // 	scanf("%d", &hp.sotc);
// // 	printf("nhap so DTB:");
// // 	scanf("%f", &hp.dtb);
// // }
// void Nhap(HocPhan &hp)
// {
// 	printf("nhap ms: ");
// 	scanf("%s", &hp.ma);
// 	fflush(stdin);
// 	printf("nhap ten: ");
// 	gets(hp.ten);
// 	printf("nhap stc: ");
// 	scanf("%d", &hp.sotc);
// 	printf("Nhap dtb: ");
// 	scanf("%f", &hp.dtb);
// }

// // xuat 1 hoc phan
// void Xuat(HocPhan hp)
// {
// 	printf("%s\t%s\t%d\t%.2f\n", hp.ma, hp.ten, hp.sotc, hp.dtb);
// }
// // nhap, xuat n hoc phan
// void NhapDSHP(HocPhan ds[], int &n)
// {
// 	printf("Nhap so hoc phan");
// 	scanf("%d", &n);
// 	for (int i = 0; i < n; i++)
// 	{
// 		Nhap(ds[i]);
// 		/*	fflush(stdin); //lam sach vung dem
// 			printf("ma hoc phan:");
// 			gets(ds[i].ma);
// 			printf("Ten hoc phan:");
// 			gets(ds[i].ten);
// 			printf("so tin chi:");
// 			scanf("%d",&ds[i].sotc);
// 			printf("Diem trung binh:");
// 			scanf("%f",&ds[i].dtb);*/
// 	}
// }
// void XuatDSHP(HocPhan ds[], int n)
// {
// 	for (int i = 0; i < n; i++)
// 		if (ds[i].dtb > 5)
// 			Xuat(ds[i]);
// 	// printf("%s\t%s\t%d\t%.2f\n",ds[i].ma,ds[i].ten, ds[i].sotc, ds[i].dtb );
// }

#include <stdio.h>

struct hocphan
{
	char ms[10];
	char ten[10];
	int stc;
	float dtb;
};

void nhap(hocphan &hp)
{
	printf("nhap ms: ");
	scanf("%s", &hp.ms);
	fflush(stdin);
	printf("nhap ten: ");
	gets(hp.ten);
	printf("nhap stc: ");
	scanf("%d", &hp.stc);
	printf("Nhap dtb: ");
	scanf("%f", &hp.dtb);
}

void xuat(hocphan hp)
{
	printf("%s\t%s\t%d\t%.2f\n", hp.ms, hp.ten, hp.stc, hp.dtb);
}

void nhapds(hocphan ds[], int &n)
{
	printf("nhap n: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap ms %d: ", i + 1);
		scanf("%s", &ds[i].ms);
		fflush(stdin);
		printf("Nhap ten %d: ", i + 1);
		gets(ds[i].ten);
		printf("Nhap stc %d: ", i + 1);
		scanf("%d", &ds[i].stc);
		printf("Nhap dtb %d: ", i + 1);
		scanf("%f", &ds[i].dtb);
	}
}

void xuatds(hocphan ds[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%s\t%s\t%d\t%.2f\n", ds[i].ms, ds[i].ten, ds[i].stc, ds[i].dtb);
}

int main()
{
	hocphan hp;
	hocphan ds[100];
	int n;
	nhap(hp);
	xuat(hp);
	nhapds(ds, n);
	xuatds(ds, n);

	return 0;
}