/*1. Hàm main() cho phép nh?p s? ph?n t? c?a m?ng*/

#include<stdio.h>
int main()
{
	int a[10], n;
	printf("\n nhap n:");
	scanf("%d",&n);
	for (int i=0;i<n;i++)
    {
	printf("\n Nhap a[%d]:",i);
	scanf("%d", &a[i]);
    }
	
}
