#include<stdio.h>
int max(int a, int b)
{
return (a>b)?a:b;//return a else b
}

int knapsack(int w[],int v[],int c,int n)
{

if(c==0 ||n==0)
return 0;

if(w[n-1]>c)
return knapsack(w,v,c,n-1);
else
return max(v[n-1]+knapsack(w,v,c-w[n-1],n-1),knapsack(w,v,c,n-1));


}
int main()
{
int w[]={15, 5, 20, 8, 7, 20, 6 };
int v[]={3, 4, 6, 8, 2, 2, 3 };
int c=18;
int n =sizeof(w)/sizeof(v[0]);
int result=knapsack(w,v,c,n);

printf("Maximum value in knapsack  =%d\n",result);

return 0;
}

