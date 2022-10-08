/*
    Write a program to find area of triangle where user enter the base and height.
*/
#include<stdio.h>
#include<conio.h>
main()
{
     float AreaOfTriangle,base,height;
     //clrscr();
     printf("Enter the base and height\n");
     scanf("%f%f",&base,&height);
     AreaOfTriangle=0.5*base*height;
     printf("Area of triangle is=%f",AreaOfTriangle);
     getch();
 }
    
