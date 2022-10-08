/*
   Write a program to find circumference of circle where user
   enter radius.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    float radius,circumference;
    //clrscr();
    printf("Enter the radius\n");
    scanf("%f",&radius);
    circumference=2*3.14*radius;
    printf("Area of circle is=%f",circumference);
    getch();
}
