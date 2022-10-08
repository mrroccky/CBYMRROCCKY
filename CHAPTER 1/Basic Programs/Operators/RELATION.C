/*
    Write a program to demonstrate relational operator.

*/
#include<stdio.h>
#include<conio.h>
main()
{
     int a=10,b=20,c;
     Bool c;
     //clrscr();
     c=a<b;
     printf("\nLess than is=%d",c);
     c=a>b;
     printf("\nGreater than is=%d",c);
     c=a<=b;
     printf("\nLess than equals to is=%d",c);
     c=a>=b;
     printf("\nGreater than equals to is=%d",c);
     c=a==b;
     printf("\nEquals to is=%d",c);
      
     c=a!=b;
     printf("\nNot Equals to is=%d",c);
     getch();
}


