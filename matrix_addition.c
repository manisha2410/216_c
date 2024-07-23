#include<stdio.h>
#include<stdlib.h>
int main()
{
	int row1,cols1,n,i,j,a[20][20],b[20][20],row2,cols2,c[20][20],row,cols;
	
	printf("\n Enter the number of rows and colums in array A\n");
	scanf("%d %d",&row1,&cols1);
	
	printf("\n Enter the number of rows and colums in array  B\n");
	scanf("%d %d",&row2,&cols2);
	
	if(row1!=row2 || cols1 !=cols2)
	{
		printf("\n matrix are not multiplicable");
		exit(0);
	}
	else
	{
		row = row1;
		cols =cols1;
	}
	
	printf("\n Enter the element of array A \n");
	
	for(i=0;i<row1;i++)
	{
		for(j=0;j<cols1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n Enter the elements of array B \n");
	for(i=0;i<row2;i++)
	{
		for(j=0;j<cols2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n matrix A");
	for(i=0;i<row1;i++)
	{
		printf("\n");
		for(j=0;j<cols1;j++)
		{
	printf(" %d \t",a[i][j]);
        }
    }
    
    printf("\n matrix B");
    for(i=0;i<row2;i++)
    {
    	printf("\n");
    	for(j=0;j<cols2;j++)
    	{
    		printf("%d \t",b[i][j]);
		}
	}
	
	printf("\n\n addition of two matrix is \n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<cols;j++)
		{
			c[i][j]=a[i][j] + b[i][j];
		}
	}
	
	for(i=0;i<row;i++)
	{
		printf("\n");
		for(j=0;j<cols;j++)
		{
			printf("%d \t",c[i][j]);
		}
	}
	return 0;
}
