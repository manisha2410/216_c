// write a program which is correct but not good quality.
#include<stdio.h>
int main()
{
int a[5],i;
printf("\n enter the element of array");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("\n the element enter by you is this");
for(i=0;i<5;i++)
{
printf("%d\t",a[i]);
}
return 0;
}