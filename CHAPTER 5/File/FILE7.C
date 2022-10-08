/*
    Write a program to create "abc.txt" and enter data into the file
     and copy the content of abc.txt into file into xyz.txt file.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    FILE *fp,*fp1;
    char c;
    clrscr();
    fp=fopen("abc.txt","w");
    if(fp==NULL)
    {
      printf("Unable to open file");
    }
    else
    {
	while(c!='\n')
	{
	   scanf("%c",&c);
	   fputc(c,fp);
	}
    }
    fp1=fopen("xyz.txt","w");
    if(!fp1)
    {
       printf("Unable to open file");
    }
    else
    {
	c=getc(fp);
	while(c!=EOF)
	{
	   fputc(c,fp1);
	   c=getc(fp);
	}
    }
    fclose(fp1);
    getch();
}
