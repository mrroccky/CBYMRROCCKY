/*
   Write a program to find circumference of circle where user
   enter radius.
*/
#includestdio.h>
#include<conio.h>
main()
{
    float r,area;
    clrscr();
    printf("Enter the radius");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("Area of circle is=%f",area);
    dgetch();
}