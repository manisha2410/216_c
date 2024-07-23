#include<stdio.h>
int main()
{
	int arr[20],i,j,n,min,temp;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
//	int arr[n];
	printf("\n Enter the element of array:  \n");
	for(i=0; i<n;i++)
	{
		scanf("%d",&arr[i]);
	}	
	for(i=0;i<n-1;i++)
	{
//		finding of minimum element in unsorted array
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j] < arr[min])
			{
				min=j;
			}
		}
//		swaping the found minimum number with the first number
		temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
		
	}
	printf("\n Sorted Array :-\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
