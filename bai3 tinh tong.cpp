/*X�y d?ng c�c h�m d? t�nh t?ng hai s? nguy�n

T�n h�m: tinhtong
Tham s? c?a h�m: c� 2 tham s? ki?u int
Ki?u tr? v?: int (h�m c� tr? v? 1 gi� tr? l� t?ng c?a hai s? nguy�n)*/

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
