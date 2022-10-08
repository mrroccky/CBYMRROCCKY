/* Write a program to enter the data into student.txt file using C language.*/
#include <stdio.h>
#include<conio.h>
main(void)
{
   FILE *stream;
   int i=1;
   char *line="---------------------------------";
   char *name="Name";
   char name1[40];
   char *roll_no="Roll No";
   int roll,n;
   ///clrscr();
   stream = fopen("abc.txt", "a");
   printf("enter the no that you want to enter the data in file\n");
   scanf("%d",&n);
   while(i<=n)
   {

      scanf("%s%d",&name1,&roll);
      fprintf(stream,"%s\t\t\t%d\n",name1,roll);
      i++;
   }

   fclose(stream);
   getch();
}

