//implement left to right and right to left binary exponentiation methods for 
//the following problems:
//(i) 4
//512

#include<stdio.h>

int main()
{
	int n,x,i;
	int sum=0;
	printf("\n Enter number n :");
	scanf("%d",&n);

	printf("\n enter n rest number",n);
	scanf("%d",&x);

	for(i=1;i<=x;i++)
	{

		sum =sum*n;
	}

	printf("a %d", sum);
	return 0;
}
