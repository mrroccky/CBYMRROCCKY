/*
     Write a program to display 1 to n using while loop.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int i,n;
    //clrscr();
    printf("Enter the no.");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
       printf("\n%d",i);
       i++;
    }
    getch();
}
