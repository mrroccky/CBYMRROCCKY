/*
   Write a program to disply number from 1 to n.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int i,n;
   // clrscr();
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++);
    {
       printf("\n%d",i);
    }
    getch();
}
