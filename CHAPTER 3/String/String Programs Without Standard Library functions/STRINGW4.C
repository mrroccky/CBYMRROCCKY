/*
    Write a program to convert lower case string into upper case
    without using strupr function of string.h header file.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    char a[50];
    int i=0;
    //clrscr();
    printf("Enter the lower case string\n");
    scanf("%s",&a);

    while(a[i]!='\0')
    {
       a[i]=a[i]-32;
       i++;
    }
    printf("Upper case string is=%s",a);
    getch();
}
