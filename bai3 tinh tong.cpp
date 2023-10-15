/*Xây d?ng các hàm d? tính t?ng hai s? nguyên

Tên hàm: tinhtong
Tham s? c?a hàm: có 2 tham s? ki?u int
Ki?u tr? v?: int (hàm có tr? v? 1 giá tr? là t?ng c?a hai s? nguyên)*/

#include<stdio.h>
#include<conio.h>
int a, b ,tong;
int tinhtong(int a ,int b);
int main()
{
	printf("nhap so nguyen a= ");
	scanf("%d",&a);
	printf("nhap so nguyen b= ");
	scanf("%d",&b);
	tong=tinhtong(a,b);
	printf("tong %d+%d=%d",a,b,tong);
	return 0;
	}
	
	int tinhtong(int a , int b)
	{
		tong=a+b;
		return tong ;
		}
