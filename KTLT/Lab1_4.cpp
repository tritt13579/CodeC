#include <stdio.h>

//ham noi tuyen
inline int TinhTich(int a,int b){
	return a*b;
}
//ham co doi so mac dinh
float TinhDQT(float dkt, float dcc, float tyle=0.3f){
	return dcc*tyle + (1-tyle)*dkt;
}
//chong ham
int TinhTong(int a, int b, int c){
	return a+b+c;
}
float TinhTong(float a, float b, float c){
	return a+b+c;
}
//
int main(){
	int a,b;
	//nhap a, b
	printf("KQ ham noi tuyen: %d", TinhTich(a,b));
	float dkt,dcc;
	//nhap dkt, dcc
	printf("Diem QT dung ham co doi so mac dinh: %f",TinhDQT(dkt,dcc)); 
	//chong ham
	int c;//nhap c
	printf("Tong 3 so nguyen: %d", TinhTong(a,b,c));
	float x,y,z;//nhap x,y,z
	printf("Tong 3 so thuc: %f", TinhTong(x,y,z));
}
