#include"stdio.h"
#include"conio.h"
void Nhapmang(int a[50][50],int m, int n);
void Xuatmang(int a[50][50], int m, int n);
int timMax(int a[50][50], int m, int n);
int timMin(int a[50][50], int m, int n);
int Max, Min;
//int demNT(int a[50][50], int m, int n);
void timKiem(int a[50][50], int m, int n, int x);
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

/*int demNT(int a[50][50], int m, int n)
{
	int dem=0;
	int kiemNT [m][n];
	for(int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			;
			}
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


