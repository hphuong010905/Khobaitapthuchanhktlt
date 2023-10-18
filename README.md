/*
I/ M?NG M?T CHI?U
1. Hàm main() cho phép nh?p s? ph?n t? c?a m?ng
2. Nh?p m?ng m?t chi?u g?m n ph?n t? là s? nguyên
3. Xu?t m?ng v?a nh?p
4. Tìm giá tr? l?n nh?t trong m?ng
5. Tính tích các ph?n t? trong trong m?ng.
6. Ð?m và tính t?ng các ph?n t? nguyên t? trong m?ng
7. Nh?p vào m?t giá tr? x, in v? trí các ph?n t? có giá tr? b?ng x (n?u có), ngu?c l?i
xu?t thông báo.
8. S?p x?p m?ng tang d?n.
9. Chèn thêm giá tr? x vào m?ng
10.Nh?p vào m?t giá tr? k, xóa các ph?n t? có giá tr? b?ng k có trong m?ng*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

//tim max
int timMax(int a[], int n)
{
	int max = a[0];
	for(int i=1; i<n; i++){
		if(max<a[i])
			max = a[i];
	}
	return max;
}

//tinhtich
int tinhtich(int a[], int n)
{
    int tich=1;
    for(int i=0; i<n; i++)
	tich=tich*a[i];
return tich;
}
//tim kiem phan tu trong mang
int timkiem(int a[],int n)
{ 
int tim;
printf("\nNhap gia tri can tim kiem:");
scanf("%d",&tim);
for(int i=0;i<n; i++)
{if(tim==a[i])
printf("\n Gia tri vua nhap nam o vi tri a[%d]",i);
}
}
//Sap xep mang tang dan
void swap(int &a, int &b)
{int tam=a;
a=b;
b=tam;}
void sapxeptang(int a[], int n){
	  for(int i=0; i<n-1; i++)
	  {
	  	int vitrinhonhat=i;
	  	for(int j=i+1; j<n;j++)
	  	{if(a[j]<a[vitrinhonhat])
	  	vitrinhonhat=j;
	  	}
	  	swap(a[i],a[vitrinhonhat]);
	  }
}
void printmang(int a[], int n)
{ for(int i=0; i<n; i++)
{printf("\t%d",a[i]);
}
}


int main(){
	
int a[100];
int n;
  do{
   printf("\n Nhap so phan tu cua mang: ");
   scanf("%d",&n);
    }
    while(n<1||n>100);
//Nhap mang    
   for(int i=0; i<n; i++)
   {
       printf("\na[%d]=",i);
       scanf("%d",&a[i]);
   }
   

//Xuat mang
printf("\n Mang vua nhap la:");
for(int i=0; i<n; i++) 
printf("\t %d",a[i]);
timMax(a,n);
printf("\nMax = %d", timMax(a, n));
tinhtich(a,n);
printf("\nTich = %d", tinhtich(a, n));
printf("\nMang tang dan:");

sapxeptang(a,n);
printmang(a,n);
timkiem(a,n);
}

