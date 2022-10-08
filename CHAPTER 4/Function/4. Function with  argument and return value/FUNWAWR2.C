/*
   Write a program to find factorial of entered number
   using function with argument and return value.
*/
#include<stdio.h>
#include<conio.h>
int fact(int);
main()
{
   int n,f;
   //clrscr();
   printf("Enter the number");
   scanf("%d",&n);
   f=fact(n);
   printf("\nFactorial is=%d",f);
   getch();
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
       f=f*i;
    }
    return(f);
}
