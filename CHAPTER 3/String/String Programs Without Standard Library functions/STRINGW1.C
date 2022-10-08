/*
    Write a program to find length of string without using strlen function of
    string.h header file.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    char a[50];
    int len=0,i=0;
  //  clrscr();
    printf("Enter the string\n");
    scanf("%s",&a);

    while(a[i]!='\0')
    {
       len++;
       i++;
    }
    printf("Length of string is=%d",len);
    getch();
}
