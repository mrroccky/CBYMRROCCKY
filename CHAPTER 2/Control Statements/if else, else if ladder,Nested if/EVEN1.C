/*
    Write a program to check whether entered number is even or odd.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int no;
    //clrscr();
    printf("Enter the number");
    scanf("%d",&no);
    if(no%10==0||no%10==2||no%10==4||no%10==6||no%10==8)
    {
       printf("No.is even");
    }
    else
    {
       printf("No.is odd");
    }
    getch();
}
