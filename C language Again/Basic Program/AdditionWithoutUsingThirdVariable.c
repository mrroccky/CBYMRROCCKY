/*
    Write a program to perform addition of two numbers where user enter two number.
    Without using third variable to store result.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    clrscr();
    printf("Entered the number");
    scanf("%d%d",&a,&b);
    printf("Addition is=%d",a+b);
    getch();
}
