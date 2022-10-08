/*
   Write a program to find sum of number from 1 to n.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int i,n,sum=0;
    //clrscr();
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum=sum+i;
       printf("\nSum is=%d",sum);
    }
    //printf("Sum is=%d",sum);
    getch();
}
