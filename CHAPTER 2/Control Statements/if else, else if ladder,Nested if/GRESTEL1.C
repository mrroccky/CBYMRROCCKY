/*
    Write a program to find greatest numbers among 5 numbers.
*/
#include<stdio.h>
#include<conio.h>
main()
{
      int a,b,c,d,e;
      //clrscr();
      printf("Enter the five numbers");
      scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
      if(a>b&&a>c&&a>d&&a>e)
      {
	 printf(" a is greater");
      }
      else if(b>c&&b>d&&b>e)
      {
	 printf(" b is greatest");
      }
      else if(c>d&&c>e)
      {
	printf("c is greatest");
      }
      else if(d>e)
      {
	printf("d is greatest");
      }
      else
      {
	printf("e is greatest");
      }
      getch();
}
