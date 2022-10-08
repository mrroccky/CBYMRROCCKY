/*
    Write a program to demonstrate \b back slash character.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    //clrscr();
    printf("This is C language\b");
    printf("\nThis iw\bs C language");
    getch();
}
/*
   Note:-
         1.For getting effect for understanding of \b then it place after the ending of statement .
         2.\b is backspace. As we know we use backspace is used to delect the character.
         3.If we put in between two words or alphabets it works like mention in point 2 and see second 
		   printf in program.
         4.If we place \b at the ending of statement then cursor on output screen 
		   is blinking last character+1 position. By using \b we display cursor 
		   on last character of statement.
*/
