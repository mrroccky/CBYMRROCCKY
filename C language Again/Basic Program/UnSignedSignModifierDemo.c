/*
    Write a program to demonstrate signed modifier.
*/
#include<stdio.h>
#include<conio.h>
main()
{
	unsigned int a=-10;
	//clrscr();
	printf("Value of a is=%u",a);
	getch();
}
/*
   Note:-
         1.unsigned is sign modifier for buildin data type.Unsigned numbers contain only
		   positive value.
		 2.In program we wrote as following.
		    unsigned a=10
		   by default unsigned sign modifier take as unsigned int.
		   Hence 
		       unsigned a=10 is equals to unsigned int a=10;
		 3.unsigned sign modifier is not applied to float,double and void data type.
		 4.We can change position of unsigned. Which are given below
		    1.unsigned int a=10;
		    2.int unsigned a=10;
		    both statements 1 and 2 are legal.
		 5.long and short size modifier is used with unsigned sign modifier .
		 6.Following statements is not legal in C and C++.
		    1.unsigned float a=10;
		    2.unsigned double a=10;
		    3.unsigned void *p;
		 7.signed and unsigned modifiers does not change size of data type but they affect range(Value hold limit)
		   of data type.
		8.Formula for calculating range of unsigned sign modifier for integer data type on TurboC 
		  and TuboC++ compiler same formula will apply on other compiler but number of bits will change.
		   0  to   2^16-1
		    
		   where 16 is number of bits required for integer data type.
		    Note:- Number of bit change a/c to compiler
             
           0 to 65535.
          
          0 to 65535 is range of integer data type for 2 bytes(16 bit).
        9.unsigned sign modifier range must start with 0 and end with positive value.        

*/ 
