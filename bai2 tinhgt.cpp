/*Xây d?ng các hàm d? tính giai th?a c?a m?t s? nguyên duong

Tên hàm: tinhgiaithua
Tham s? c?a hàm: có 1 tham s? ki?u int
Ki?u tr? v?: long (hàm có tr? v? 1 giá tr? là giai th?a tính du?c)*/


# include<stdio.h>
#include<conio.h>
long  tinhgiaithua(int a);

int main()
{
    int a, ketqua;	
    printf ("so can tinh gia thua: ");
    scanf ("%d",&a);
    ketqua=tinhgiaithua(a);
    printf ("giai thua %d! = %d",a,ketqua);
}
long tinhgiaithua(int a)
{ 
   int gt=1;
   for (int i = 1; i <= a; i++)      
    gt=gt*i;
   return gt;
}

