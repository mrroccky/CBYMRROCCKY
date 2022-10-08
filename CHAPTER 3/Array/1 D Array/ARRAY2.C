/*
   Write a program to demonstrate inialization of array(subscript).
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a[]={1,2,3,4,5},i;
    //clrscr();
    for(i=0;i<5;i++)
    {
      printf("\na[%d]=%d",i,a[i]);
    }
    getch();
}
