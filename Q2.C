// Q2(i). Implement Horner’s rule for evaluating polynomial P(x)= 6𝑥6+5𝑥5 + 4𝑥4-3𝑥3 + 2𝑥2 + 8𝑥 − 7 at x = 3. Calculate how many times (i) 
// multiplications and addition operations will take (ii) how many times the loop 
// will iterate

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
 int arry[30];
 int i,num,power;
 float x,polysum;

 printf("\n Enter the order of the polynomial \n");
 scanf("%d",&num);
 printf("\n enter the value of x \n");
 scanf("%f",&x);


 printf("enter %d coefficent \n" ,num+1);
 for(i = 1 ; i <= num ; i++)
 {
    scanf("%d",&arry[i]);
 }

 polysum =arry[0];
 for(i=1 ; i <= num ;i++)
 {
    polysum = polysum*x+arry[i];
 }

 power=num;

 printf("given polynomial is : \n");
 for(i=0;i<=num;i++)
 {
    if(power<0)
    {
	break;
    }
    if(arry[i]>0)
      printf("+");
    else if (arry[i]<0)
      printf("-");
    else
       printf(" ");
    printf("%dx^%d ",abs(arry[i]),power--);

 }
printf("\n sum of polynomial = %6.2f \n ",polysum);

 }

