/*
   Write a program to demonstrate user define function.
		      OR
   Write a program to display "Hello" message using function.
		      OR
   Write a program to display message using function with no argument
   and no return value.
*/


#include<stdio.h>
#include<conio.h>
/*void msg();//1.This is called prototyping.
	   //2.protyping means declaring
	   //  function with return type and no. of arguments.
	   //3.It tells compiler it is user define function.
	   //4.Protyping is not require if function body defined before main
	   //  function it applied in C and C++.*/
	   
void msg()//called function.
{
   printf("Hello");
}	   
main()
{
    //clrscr();
    msg();//calling function.
    getch();
}


