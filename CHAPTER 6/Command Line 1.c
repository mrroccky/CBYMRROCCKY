/*Write a program to demonstrate command line argument in C language.*/
#include<stdio.h>
#include<conio.h>
main(int argc,char *argv[])
{
    printf("Value of Argument Count(argc) is=%d",argc);
    printf("\nValue of Argument Vector(argv) is=%s",argv[0]);
	getch();
}
/*
   Note:-
          1. Command line argument allow user to pass value to main function.
          2. main function has two parameter those are given below
		         1.argc(Argument count)
				 2. argv(Argument vector).
			     
				 1.argc(argument count):-
				  
				        1. It is used to count numbers of arguments we passed.
				        2. It is always 1 because argv must have program.
						   name path from .exe file ran in first block(argv[0]). 
				        3. We must keep another name of first argument of main function
						   instend of argc.
				2.argv(Argument Vector):-
				
				        1. It is used to hold numbers of arguments those are we passed.
				        2. In 0 position it contain name of executing complete file path
						   that is drive and folder name. 
				        3. We must keep  another name of second argument of main function
						   instend of argv.
				    
*/				 
