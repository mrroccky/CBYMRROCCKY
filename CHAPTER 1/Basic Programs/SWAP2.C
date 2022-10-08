/*
    Write a program to swap two number without using third variable.

*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a,b;
    //clrscr();
    printf("Enter the numbers");
    scanf("%d%d",&a,&b);
    printf("Value of a and  b before swapping is=");
    printf("\na=%d\nb=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nValue of a and  b after swapping is=");
    printf("\na=%d\nb=%d",a,b);
    getch();
}
