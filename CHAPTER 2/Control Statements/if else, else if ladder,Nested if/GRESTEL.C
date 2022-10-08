/*
    Write a program to find grestest numbers among three number.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    //clrscr();
    printf("Enter the three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
       printf(" a is gretest");
    }
    else if(b>c)
    {
       printf("b is grestest");
    }
    else
    {
	printf(" c is greater");
    }
    //getch();
}
