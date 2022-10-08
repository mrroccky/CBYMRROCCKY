/*
   Write a program to demonstrate character data type.
*/
#include<stdio.h>
#include<conio.h>
main()
{
	char a='a';
	//clrscr();
	printf("\nCharacter in a variable using small C is=%c",a);
	printf("\nCharacter in a variable using is capital=%C",a);
	printf("\nASCII value of character stored in a is=%d",a);
	getch();
}
/*
   Note:-
         1.In above program 2nd printf does display proper output on
           TurboC++ compiler.
         2.In character data variable actual character is not stored only
           ASCII(American Standard Code of Information Interchange) value of
           that character is stored.
         3.ASCII value for A to Z is from 65 to 90 .
         4.ASCII value for a to z is from 97 to 122.
         5.ASCII value for enter is 10.
         6.ASCII value for space is 32.
*/
