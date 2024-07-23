#include<stdio.h>

void mergeSort();
void merge();

int main()
{
	int a[40],n,i;
	printf("enter size of array:");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	mergeSort(a,0,n-1);
    printf("\n sorted element are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}

void mergeSort(int a[],int first,int last)
{
	int mid;
	if(first<last)
	{
		mid=(first+last)/2;
		mergeSort(a,first,mid);
		mergeSort(a,mid+1,last);
		merge(a,first,mid,last);
	}
}

void merge(int a[],int first,int mid ,int last)
{
	int b[50];
	int i,j,k;
	i=first;
	j=mid+1;
	k=first;
	while(i<=mid&&j<=last)
	{
		if(a[i]<=a[j])
		{
			b[k++]=a[i++];
		}
		else
		{
			b[k++]=a[j++];
		}
	}
		if(i>mid)
		{
			while(j<=last)
			{
				b[k++]=a[j++];
			}
		}
		else
		{
			while(i<=mid)
			{
				b[k++]=a[i++];
			}
		}
		for(i=first;i<=last;i++)
		{
			a[i]=b[i];
		}
}
