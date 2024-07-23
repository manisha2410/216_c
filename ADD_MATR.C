// write a program in 'c' language for the addition of two matrices.

#include<stdio.h>

int main()
{
 int a[20][20],b[20][20],c[20][20];

// int r1,c1,r2,c2;
int n,i,j;
int s;
a={(1,2),(2,3),(4,2)};
b={{2,1},{3,2},{2,4}};
n=sizeof(a)/sizeof(a[0]);

for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
{
  c[i][j]=a[i][j]+b[i][j];
}
}

printf("\n addition of array");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
 printf("%d\t \n",c[i][j]);
 }
 }
 return 0;
 }