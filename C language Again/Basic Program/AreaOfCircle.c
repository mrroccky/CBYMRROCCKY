/*
    Write a program to find area of circle where user enter the radius.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    float radius,areaOfCircle;
    //clrscr();
    printf("Enter the radius\n");
    scanf("%f",&radius);
    areaOfCircle=3.14*radius*radius;
    printf("Area of circle is=%f",areaOfCircle);
    getch();
}
