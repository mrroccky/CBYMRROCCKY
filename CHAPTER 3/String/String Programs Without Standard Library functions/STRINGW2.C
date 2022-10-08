/*
    Write a program to reverse of enter string without using strrev function of
    string.h header file.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    char a[50];
    int len=0,i=0,count;
    //clrscr();
    printf("Enter the string\n");
    scanf("%s",&a);

    while(a[i]!='\0')
    {
       len++;
       i++;
    }
    count=len-1;
    while(count>=0)
    {
       printf("%c",a[count]);
       count--;
    }
    getch();
}
