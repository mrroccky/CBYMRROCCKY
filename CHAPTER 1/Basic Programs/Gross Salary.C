/*
    Write a program to find gross salary use following data where user enter
    basic salary.
    HRA=2%
    TA=3%
    DA=4%

*/
#include<stdio.h>
#include<conio.h>
main()
{
   float hra,ta,da,bs,gs;
   clrscr();
   printf("Enter the basic salary");
   scanf("%f",&bs);
   hra=bs*0.2;
   ta=bs*0.3;
   da=bs*0.4;
   gs=bs+hra+ta+da;
   printf("Gross salary is=%f",gs);
   getch();
}