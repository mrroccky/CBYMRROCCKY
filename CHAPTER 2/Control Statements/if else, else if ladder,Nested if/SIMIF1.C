/*
    Write a program to demonstrate simple if.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int age;
    int check;
    clrscr();
    printf("Enter the numbers");
    scanf("%d",&age);
    check=age>=18;
    if(check)
    {
       printf("Age is valid for voting");
    }
    getch();
}
