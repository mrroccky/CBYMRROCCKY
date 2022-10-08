/*
    Write a program to enter string and display it.

*/
#include<stdio.h>
#include<conio.h>
main()
{
    char a[50];
    //clrscr();
    printf("Enter the String");
   // scanf("%s",&a);// allow in windows os. it gives error in Ubundu,Fedora etc. OS.

    scanf("%s",a);// Work in Windows,Linux OS.

    printf("Enter string is=%s",a);
    getch();
}
