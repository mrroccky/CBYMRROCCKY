4/*
    Write a program to create "abc.txt" file.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    FILE *p;
    clrscr();
    p=fopen("abc.txt","w");
    if(p==NULL)
    {
      printf("Unable to created file");
    }
    else
    {
       printf("File is created or previously exit");
    }
    getch();
}
