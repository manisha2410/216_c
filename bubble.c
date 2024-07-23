#include<stdio.h>

int main()
{
	int a[20],n,i,temp,j,k;
	
	printf("\n Enter the size of array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	printf("\n array Elements");
	scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
    	for(j=0;j<n-1;j++)
    	{
    if(a[j]>a[j+1])
    {
    	temp = a[j];
    	a[j]=a[j+1];
    	a[j+1]=temp;
	}
}
}
    for(i=0;i<n;i++)
    {
    	printf("%d\t",a[i]);
	}
	return 0;
}
