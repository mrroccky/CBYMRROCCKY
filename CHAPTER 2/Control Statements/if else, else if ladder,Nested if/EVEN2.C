/*
    Write a program to check whether entered number is even or odd.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int no;
    int check;
    clrscr();
    printf("Enter the number");
    scanf("%d",&no);
    check=no%10;
    if(check==0||check==2||check==4||check==6||check==8)
    {
       printf("No.is even");
    }
    else
    {
       printf("No.is odd");
    }
    getch();
}
