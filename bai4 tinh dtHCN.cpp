/*Xây d?ng các hàm d? tính di?n tích hình ch? nh?t khi bi?t chi?u dài, chi?u r?ng

Tên hàm: tinhdtHCN
Tham s? c?a hàm: có 2 tham s? ki?u int
Ki?u tr? v?: int (hàm có tr? v? 1 giá tr? là di?n tích hình ch? nh?t)*/

#include<stdio.h>
#include<conio.h>
int a, b ,dientich;
int tinhdtHCN(int a ,int b);
int main()
{
	printf("nhap so nguyen a= ");
	scanf("%d",&a);
	printf("nhap so nguyen b= ");
	scanf("%d",&b);
	dientich=tinhdtHCN(a,b);
	printf("dien tich hinh chu nhat da cho la %d*%d=%d",a,b,dientich);
	return 0;
	}
	
	int tinhdtHCN(int a , int b)
	{
	   dientich=a*b;
		return dientich ;
		}
