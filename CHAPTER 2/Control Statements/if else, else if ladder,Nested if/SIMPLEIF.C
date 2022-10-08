/*
    Write a program to demonstrate simple if.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int age;
    clrscr();
    printf("Enter the age");
    scanf("%d",&age);
    if(age>=18)
    {
       printf("Age is valid for voting");
    }
    getch();
}
