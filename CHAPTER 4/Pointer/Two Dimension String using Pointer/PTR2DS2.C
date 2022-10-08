/*
    Write a to demonstrate inialization two dimesion string using pointer
*/
#include<stdio.h>
#include<conio.h>
main()
{
    char* a[]={"Chetan","Mukesh","Komal","Payal"};
    int i;
    //clrscr();
    for(i=0;i<=3;i++)
    {
       printf("\n%s",a[i]);
    }
    getch();
}
