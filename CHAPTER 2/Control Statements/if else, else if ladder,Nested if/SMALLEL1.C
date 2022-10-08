/*
    Write a program to find smallest numbers among 5 numbers.
*/
#include<stdio.h>
#include<conio.h>
main()
{
      int a,b,c,d,e;
      clrscr();
      printf("Enter the five numbers");
      scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
      if(a<b&&a<c&&a<d&&a<e)
      {
	 printf(" a is smallest");
      }
      else if(b<c&&b<d&&b<e)
      {
	 printf(" b is smallest");
      }
      else if(c<d&&c<e)
      {
	printf("c is smallest");
      }
      else if(d<e)
      {
	 printf("d is smallest");
      }
      else
      {
	 printf("e is smallest");
      }
      getch();
}
