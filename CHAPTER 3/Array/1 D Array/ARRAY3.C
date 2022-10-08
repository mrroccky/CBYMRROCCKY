/*
   Write a program to demonstrate inialization of Hexadecimal array(subscript).
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a[]={0xA,0xB,0xC,0xd,0xe,0XF},i;
    //clrscr();
    for(i=0;i<6;i++)
    {
      printf("\na[%d]=%#X",i,a[i]);
    }
    getch();
}
