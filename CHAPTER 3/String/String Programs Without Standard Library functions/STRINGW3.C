/*
    Write a program to convert upper case string into lower case
    without using strlwr function of string.h header file.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    char a[50];
    int i=0;
    //clrscr();
    printf("Enter the Upper case string\n");
    scanf("%s",&a);

    while(a[i]!='\0')
    {
       a[i]=a[i]+32;
       printf("\n%d",a[i]);
       i++;
    }
    printf("Lower case string is=%s",a);
    getch();
}
