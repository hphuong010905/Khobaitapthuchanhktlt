#include"stdio.h"
#include"conio.h"
void Nhapmang(int a[50][50],int m, int n);
void Xuatmang(int a[50][50], int m, int n);
int Max, Min;
int timMax(int a[50][50], int m, int n);
int timMin(int a[50][50], int m, int n);
//int ktaNT(int a[50][50], int m, int n);
//int dem;
//int demNT(int a[50][50], int m, int n);
void timKiem(int a[50][50], int m, int n, int x);
int sapxep (int a[50][50], int m, int n);
int main()
{
int a[50][50], m,n,x;
printf("\n Nhap vao so dong cua mang:"); 
scanf("%d",&m);
printf("\n Nhap vao so cot cua mang:"); 
scanf("%d",&n);
Nhapmang(a,m,n);
Xuatmang(a,m,n);

Max = timMax(a,m,n);
Min = timMin(a,m,n);

printf("\n Gia tri lon nhat cua mang la:%d",Max);
printf("\n Gia tri nho nhat cua mang la:%d",Min);
printf("\n Nhap gia tri x can tim kiem: ");  scanf("%d", &x);
timKiem(a, m, n, x);
//ktraNT(a, m, n);
//dem=demNT(a, m, n);
//printf("So cac so nguyen to co trong mang la:%d\n", dem)
printf("\n Ma tran sau khi duoc sap xep:");
sapxep(a,m,n);
getch();
}

void Nhapmang(int a[50][50], int m, int n)
{
int i, j;
for (i=0; i<m;i++)
for (j=0; j<n;j++){
	printf("\n a[%d][%d]=",i,j);
	scanf("%d",&a[i][j]);}
}


void Xuatmang(int a[50][50], int m, int n)
{int i, j;
for(i=0;i<m;i++){
	printf("\n");
	for (j=0;j<n;j++){
		printf("%d\t",a[i][j]);
		}	        
	}
}

int timMax(int a[50][50], int m, int n)
{
int i, j, Max=a[0][0];
   for(i=0; i<m; i++)
     for(j=0;j<n;j++)
      if(Max<a[i][j])
      Max=a[i][j];
return Max;
}

int timMin(int a[50][50], int m, int n)
{
int i, j, Min=a[0][0];
   for(i=0; i<m; i++)
     for(j=0;j<n;j++)
      if(Min>a[i][j])
      Min=a[i][j];
return Min;
}
/*
int ktaNT(int a[50][50], int m, int n)
{
	if kt (int number){
		if(number<= 1){
			return 0;
		}
		
		for (int i=2; i<=sqrt(number); i++){
			if (number% i==0){
				return 0;
			}
		}
		return x>1;
	}
}
/*int demNT (int a[50][50], int m, int n){
	int dem=0;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if({if kt (int number){
		if(number<= 1){
			return 0;
		}
		
		for (int i=2; i<=sqrt(number); i++){
			if (number% i==0){
				return 0;
			}
		}
		return x>1;
	}){
				dem++;
			}
	}
}
return dem;
}
*/	
	
void timKiem(int a[50][50], int m, int n, int x) {
  int count = 0;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (a[i][j] == x) {
        printf("Vi tri (%d, %d)\n", i, j);
        count++;
      }
    }
  }
  if (count == 0) {
    printf("Khong tim thay gia tri x trong mang\n");
  }
}

/*int sapxep (int a[50][50], int m, int n){
	int j;
	for (int i=0; i<n; i++){
		for (int j=0; j<m-1; j++){
		if (a[i][j]>a[i][j+1]){
		int temp=a[i][j];
		a[i][j]=a[i][j+1];
		a[i][j=1]=temp;
	       }
		}
	}
}

int inmatran( (int a[50][50], int m, int n )





	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++)
		printf("%d\t", a[i][j]);
	}
	printf("\n");
return 0;}
*/


