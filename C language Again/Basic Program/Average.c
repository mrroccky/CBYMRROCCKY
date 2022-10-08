/*
   Write a program to find average of three numbers where number enter by user.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    float avg;
    //clrscr();
    printf("Enter the three numbers");
    scanf("%d%d%d",&a,&b,&c);
    avg=(float)(a+b+c)/3;
    printf("Average of three entered numbers are=%f",avg);
    getch();
}
