/*
    Write a program to reverse of string using pointer.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    char a[50];
    char *p,cnt;
    int len=0,i=0;
    //clrscr();
    printf("Enter the string\n");
    scanf("%s",&a);
    p=a;
    while(*(p+i)!='\0')
    {
       len++;
       i++;
    }
    i=len-1;
    while(i>=0)
    {
       printf("%c",*(p+i));
       i--;
    }
    getch();
}
