/*
    Write a program to read "abc.txt" file and display it.
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
    /*FILE *p;
    char c=' ';
    clrscr();
    p=fopen("abc.txt","r");
    if(p==NULL)
    {
      printf("Unable to open file");
    }
    else
    {
	  while(c!=EOF)
	  {
	    c=getc(p);
	    printf("%c",c);
	  }
    }*/
    system("ren abc.txt g.txt");

    getch();
}
