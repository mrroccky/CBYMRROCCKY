/*
    Write a program to check whether entered number is even or odd.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int no;
    printf("Enter the number");
    scanf("%d",&no);
    if(no%2==0)
    {
       printf("No.is even");
    }
    else
    {
       printf("No.is odd");
    }
    getch();
}
