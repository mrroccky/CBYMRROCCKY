/*
    Write a program to find length of string using pointer.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    char a[50];
    char *p;
    int len=0;
    //clrscr();
    printf("Enter the string\n");
    scanf("%s",a);
    p=a;
    while(p!='\0')
    {
       len++;
       p++;
    }
    printf("Length of string is=%d",len);
    getch();
}
