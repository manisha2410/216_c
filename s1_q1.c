//Implement Euclid’s algorithm to find GCD (15265, 15)and calculate the 
//number of times mod and assignment operations will be required.
#include <stdio.h>
//#include <conio.h>
void main()
{
    // clrscr();
    int m,n ;
    printf("enter two  integer number : ");
    scanf("%d %d",&m ,&n);
    while (n >0)
    {
        int r = m % n;
        m = n;
        n=r;
    }
    printf ("GCD = %d \n",m);
    getch();
    
}
