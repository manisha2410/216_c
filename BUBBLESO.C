#include<stdio.h>
void bubblesort(int arr[],int n)
{
 int i,j;
 for(i=0;i<n-1;i++)
 {
 for(j=0;j<n-1;j++)
{
if(arr[j]>arr[j+1])
{
int temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
 }
 }
}

int main()
{
int arr[]={34,56,12,23,98,24};
int n=sizeof(arr)/sizeof(arr[0]);
bubblesort(arr.n);

printf("sort array");
for(int i=0;i<n;i++)
{
printf("\n %d",arr[i]);
}
return 0;
}
