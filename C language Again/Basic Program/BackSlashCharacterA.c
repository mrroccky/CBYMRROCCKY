/*
    Write a program to demonstrate \a back slash character.
*/
#include<stdio.h>
#include<conio.h>
main()
{
   //clrscr();
   printf("\a");
   getch();
}
/*
   Note:-
        1.\a is used to play beep.
        2.If we run program on laptop or desktop having sound driver
          but on some system with TurboC++ compiler we do not listen
          beep.
        3.In this situation run above program on different compiler.
        4.Remember that we listen different beep on TurboC++ compiler
		  and on another compilers. 
 */      
