/*X�y d?ng c�c h�m d? t�nh giai th?a c?a m?t s? nguy�n duong

T�n h�m: tinhgiaithua
Tham s? c?a h�m: c� 1 tham s? ki?u int
Ki?u tr? v?: long (h�m c� tr? v? 1 gi� tr? l� giai th?a t�nh du?c)*/


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

