/*
   Write a program to find factorial of entered number.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int i,n,f;
    //clrscr();
    printf("Enter the number");
    scanf("%d",&n);
    printf("%d",f);
    for(i=1;i<=n;i++)
    {
       f=f*i;
    }
    printf("Factorial is=%d",f);
    getch();
}
