#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("\n enter two number ");
scanf("%d %d ",&a ,&b);
while(b>0)
{
int r =a%b;
a=b;
b=r;
}
printf("gcd =%d \n",a);
getch();
}