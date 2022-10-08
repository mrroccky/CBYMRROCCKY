/*
    Write a program to create "abc.txt" file and write a data into its.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    FILE *p;
    char c;
    //clrscr();
    p=fopen("abc.bat","w");
    if(p==NULL)
    {
      printf("Unable to open file");
    }
    else
    {
	  while(c!='\n')
	  {
	    scanf("%c",&c);
	    fprintf(p,"%c",c);
	  }
    }

    getch();
}
