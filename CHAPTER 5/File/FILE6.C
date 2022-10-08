/*
    Write a program to read "abc.txt" file and copy the content of abc.txt
    file into xyz.txt file.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    FILE *fp,*fp1;
    char c=' ';
    //clrscr();
    fp=fopen("abc.txt","r");
    fp1=fopen("xyz.txt","w");
    if(fp==NULL)
    {
      printf("Unable to open file");
    }
    else
    {
	  c=fgetc(fp);
	  while(c!=EOF)
	  {
	    putc(c,fp1);
	    c=getc(fp);

	  }
    }

    getch();
}
