#include<stdio.h>
#include<conio.h>
main()
{
   int i,j,row=5,col=1;
   clrscr();
   for(i=1;i<=5;i++)
   {
      for(j=1;j<=i;j++)
      {
	 gotoxy(row,col);
	 printf("%d",j);
	 row--;
      }
      row=5;
      col++;
   }
   getch();
}