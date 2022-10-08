/*
   Write a program to perform addition using function with argument
   and return value.
*/
#include<stdio.h>
#include<conio.h>
int add(int,int);
main()
{
   int a,b;
   //clrscr();
   printf("Enter the numbers");
   scanf("%d%d",&a,&b);
   printf("Addition is=%d",add(a,b));
   getch();
}
int add(int a,int b)
{
   int c;
  // c=a+b;
  printf("Addition is=%d",c);
   return(c);
}
