/*
   Write a program to check whether entered number is positive or not using conditional
   operator.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a,check;
    clrscr();
    printf("Enter the number");
    scanf("%d",&a);
    check=a>0;
    if(check==1)
    {
       printf("Number is Positive");
    }
    else
    {
       printf("Number is Negative");
    }
    getch();
}

