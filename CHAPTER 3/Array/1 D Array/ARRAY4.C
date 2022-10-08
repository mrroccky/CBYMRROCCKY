/*
   Write a program to demonstrate inialization of octal array(subscript).
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a[]={011,012,013,014,015},i;
    //clrscr();
    for(i=0;i<5;i++)
    {
      printf("\na[%d]=%d",i,a[i]);
    }
    getch();
}
