/*
    Write a program to demonstrate signed modifier.
*/
#include<stdio.h>
#include<conio.h>
main()
{
	signed a=-20;
	//clrscr();
	printf("Value of a is=%d",a);
	getch();
}
/*
   Note:-
         1.signed is sign modifier for buildin data type.Signed numbers contain both 
		   positive and negative value.By default all variables are signed.
		 2.In program we wrote as following.
		    signed a=10
		   by default signed sign modifier take as signed int.
		   Hence 
		       signed a=10 is equals to signed int a=10;
		 3.signed sign modifier is not applied to float,double and void data type.
		 4.We can change position of signed. Which are given below
		    1.signed int a=10;
		    2.int signed a=10;
		    both statements 1 and 2 are legal.
		 5.long and short size modifier is used with signed sign modifier .
		 6.Following statements is not legal in C and C++.
		    1.signed float a=10;
		    2.signed double a=10;
		    3.signed void *p;
		 7.signed and unsigned modifiers does not change size of data type but they affect range(Value hold limit)
		   of data type.
		8.Formula for calculating range of signed sign modifier for integer data type on TurboC 
		  and TuboC++ compiler same formula will apply on other compiler but number of bits will change.
		   -2^16-1   to   2^16-1-1
		    
		    where 16 is number of bits required for integer data type.
		    Note:- Number of bit change a/c to compiler
             
          -32768     to    32767.
          
          -32768 to 32767 is range of integer data type for 2 bytes(16 bit).
        9.signed sign modifier range must start with negative value and end with positive value.        

*/ 
