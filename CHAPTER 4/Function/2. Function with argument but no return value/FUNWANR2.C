/*
   Write a program to find factorial of entered number
   using function with argument but no return value.
*/
#include<stdio.h>
#include<conio.h>
void fact(int);
main()
{
   int n;
   //clrscr();
   printf("Enter the number");
   scanf("%d",&n);
   fact(n);
   getch();
}
void fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
       f=f*i;
    }
    printf("Factorial is=%d",f);
}
