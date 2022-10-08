/*
   Write a program to disply table of enter n.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int i,n;
    //clrscr();
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
       printf("\n%d",n*i);
    }
    getch();
}
