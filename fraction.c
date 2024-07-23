#include<stdio.h>

int main()
{
	int num,count,fact=1;
	
	printf("\n Enter the number to find its factorial :-");
	scanf("%d",&num);
	
	for(count=1;count<=num;count++)
	{
		fact = fact * count;
	}
	printf("\nthe factorial of %d is %d \n",num,fact);
	return 0;
}
