#include<stdio.h>

int main()
{
	int a[3][3],b[3][3],c[3][3];
	int i,j;
	
	a[0][0]=5,a[1][0]=2,a[2][0]=7;
    a[0][1]=4,a[1][1]=1,a[2][1]=8;
    a[0][2]=3,a[1][2]=6,a[2][2]=9;
    
   b[0][0]=15,b[1][0]=12,b[2][0]=17;
    b[0][1]=14,b[1][1]=11,b[2][1]=18;
    b[0][2]=13,b[1][2]=16,b[2][2]=19;
    printf("\n matrix A");
    for(i=0;i<3;i++)
    {
    	printf("\n");
    	for(j=0;j<3;j++)
    	{
    		printf("%d \t",a[i][j]);
		}
	}
	
	printf("\n matrix B");
    for(i=0;i<3;i++)
    {
    	printf("\n");
    	for(j=0;j<3;j++)
    	{
    		printf("%d \t",b[i][j]);
		}
	}
	
	printf("\n matrix a and b multipication");
	
	return 0;
    
}
