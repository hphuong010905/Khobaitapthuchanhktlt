/*X�y d?ng c�c h�m d? t�nh di?n t�ch h�nh ch? nh?t khi bi?t chi?u d�i, chi?u r?ng

T�n h�m: tinhdtHCN
Tham s? c?a h�m: c� 2 tham s? ki?u int
Ki?u tr? v?: int (h�m c� tr? v? 1 gi� tr? l� di?n t�ch h�nh ch? nh?t)*/

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
