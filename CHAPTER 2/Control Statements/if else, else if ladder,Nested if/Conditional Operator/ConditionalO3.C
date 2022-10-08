/*
   Write a program to check whether entered number is even or odd using conditional
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
    check=a%2==0;
    if(check==1)
    {
       printf("Number is Even");
    }
    else
    {
       printf("Number is Odd");
    }
    getch();
}

