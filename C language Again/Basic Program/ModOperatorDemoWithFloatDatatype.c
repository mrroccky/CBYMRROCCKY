/*
     Write a program to demonstrate mod operator with float data type.
*/
#include<stdio.h>
#include<conio.h>
main()
{
     float a,b,c;
     //clrscr();
     printf("Enter the numbers\n");
     scanf("%d%d",&a,&b);
     c=a%b;
     printf("Reminder is=%d",c);
     getch();
}
/*
    Note:-
          1.Mod operator is arithmetic operator.
          2.It is used to find reminder of given division.
          3.If the dividend is less than divisor then reminder is given dividend
             Let's understand this.
             int a=10;
             int b=12;
             int c;
             c=a%b;
             Here
                  1.Dividend is smaller than divisor.
                  2.Hence answer of c is 10 not 0.
         4.Mod operator never work with double and float data type operands(Variables) or any
		   of operand is float or double but in Java language it works.
*/
  
  
  
  
  
  
  
  
  
  
  
  
  
         
