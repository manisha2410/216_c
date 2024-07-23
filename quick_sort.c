#include<stdio.h>


void quickSort(int a[40],int first,int last)
{
	int i,j,pivot,temp;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(a[i]<=a[pivot] && i<last)
			{
				i++;
			}
			while(a[j]>a[pivot])
			{
				j--;
			}
			if(i<j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[pivot];
		a[pivot]=a[j];
		a[j]=temp;
		quickSort(a,0,j-1);
		quickSort(a,j+1,last);
	}
}

int main()
{
	int a[40],n,i;
	printf("\n Enter the size of array");
	scanf("%d",&n);
	
	printf("\n enter the element of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	quickSort(a,0,n-1);
	printf("\n sorted elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
	return 0;
}
