/*
   Write a program to create functions for Arithmetic operations with
   suitable names using function with no argument no return value.

*/


#include<stdio.h>
#include<conio.h>
void add();
void sub();
void mul();
void div();
void mod();
main()
{
   clrscr();
   add();
   sub();
   mul();
   div();
   mod();
   getch();
}

void add()
{
   int a,b,c;
   printf("\nEnter the number\n");
   scanf("%d%d",&a,&b);
   c=a+b;
   printf("\nAddition is=%d",c);
}

void sub()
{
   int a,b,c;
   printf("\nEnter the number\n");
   scanf("%d%d",&a,&b);
   c=a-b;
   printf("\nSubtraction is=%d",c);
}


void mul()
{
   int a,b,c;
   printf("\nEnter the number\n");
   scanf("%d%d",&a,&b);
   c=a*b;
   printf("\nMutiplication is=%d",c);
}

void div()
{
   float a,b,c;
   printf("\nEnter the number\n");
   scanf("%f%f",&a,&b);
   c=a/b;
   printf("\nDivision is=%f",c);
}

void mod()
{
   int a,b,c;
   printf("\nEnter the number\n");
   scanf("%d%d",&a,&b);
   c=a%b;
   printf("\nMod is=%d",c);
}


