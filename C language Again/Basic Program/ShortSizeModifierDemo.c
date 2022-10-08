/*
    Write a program to demonstrate short size modifier.
*/
#include<stdio.h>
#include<conio.h>
main()
{
	short a=10;
	//clrscr();
	printf("Value of a is=%d",a);
	getch();
}
/*
   Note:-
         1.short is size modifier that means it changes size of buildin data type.
		 2.In program we wrote as following.
		    short a=10
		   by default short size modifier take as short int.
		   Hence 
		       short a=10 is equals to short int a=10;
		 3.short size modifier is not applied to character, float,double and void data type.
		 4.We can change position of short. Which are given below
		    1.short int a=10;
		    2.int short a=10;
		    both statements 1 and 2 are legal.
		 5.long and short size modifier is not used at same time.
		 6.Following statements is not legal in C and C++.
		    1.long short a=10;
		    2.short long a=10;
		    3.short float a=10;
		    4.short double a=10;
		    5.short char a='a';
		    6.short void *p;
		 7.short int requires 2 bytes but short int and int have same bytes requires on TurboC and TurboC++.
		   actual on above 16 bits compiler integer data type require 2 byte.TurboC and TurboC++ 16 bits 
		   compiler.		   
*/
