/*
   Write a program to caluclate the following series.
   1+1/2........1/n. where user enter the n.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int i,n;
    float s=0,t;
    //clrscr();
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       t=1.0/i;
       s=s+t;
    }
    printf("Sum of series is=%f",s);
    getch();
}
