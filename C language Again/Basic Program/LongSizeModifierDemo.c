/*
    Write a program to demonstrate long size modifier.
*/
#include<stdio.h>
#include<conio.h>
main()
{
 long int a=7709313620;
	long long int b=77093136200452234566;
	//clrscr();
	printf("Value of a is=%lld",b);
	getch();
}
/*
   Note:-
         1.long is size modifier that means it changes size of buildin data type.
		 2.In program we wrote as following.
		    long a=10
		   by default long size modifier take as long int.
		   Hence 
		       long a=10 is equals to long int a=10;
		 3.long size modifier is not applied to character, float,and void data type.
		 4.We can change position of short. Which are given below
		    1.long int a=10;
		    2.int long a=10;
		    both statements 1 and 2 are legal.
		 5.long and short size modifier is not used at same time.
		 6.Following statements is not legal in C and C++.
		    1.long short a=10;
		    2.short long a=10;
		    3.long float a=10;
		    5.long char a='a';
		    6.long void *p;
		 7.long int requires 8 bytes but long int 4 bytes requires on TurboC and TurboC++.
		   actual on above 16 bits compiler integer data type require 2 byte.TurboC and TurboC++ 16 bits 
		   compiler.		   
*/
