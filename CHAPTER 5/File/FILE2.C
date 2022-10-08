/*
    Write a program to create "abc.txt" file.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    FILE *p;
    ///clrscr();
    p=fopen("abc.txt","w");
    if(!p)
    {
      printf("Unable to created file");
    }
    else
    {
       printf("File is created or priviously exit.");
    }
    getch();
}
