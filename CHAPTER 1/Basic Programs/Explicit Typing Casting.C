/*
   Write a program to demonstrate explicit type casting
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int m1,m2,m3,m4,m5,total;
    float per;
    //clrscr();
    printf("Enter the marks of 5 subjects");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    per=total/500.0*100;
    printf("\nTotal=%d",total);
    printf("\nper=%f",per);
    getch();
}
