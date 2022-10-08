/*
    Write a program to find area of circle where user enter the radius.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    float r,area;
    clrscr();
    printf("Enter the radius");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("Area of circle is=%f",area);
    getch();
}
