/*
    Write a program to check wheather entered age is valid for becoming
    president of India.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int age;
    //clrscr();
    printf("Enter the age");
    scanf("%d",&age);
    if(age>=18)
    {
       printf("Age is valid for voting");
    }
    else
    {
       printf("Age is not valid voting");
    }
    getch();
}
