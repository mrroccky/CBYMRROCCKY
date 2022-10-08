/*
    Write a program to demonstrate \n blackslash character.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    //clrscr();
    printf("This is C language statement without using \\n back slash character.");
    printf("This \n is C language statement \nwith using \\n back slash character.");
    getch();
}
/*
   Note:-
        1.\n is called as new line.
        2.It is used to take new line.
        3.If we take use \n then whole line become useless and unable to set cursor(statement) on that line 
          after using this. We can set on that line by using gotoxy function.
*/
