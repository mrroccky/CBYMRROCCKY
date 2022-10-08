/*
    Write a program to demonstrate sizeof operator.

*/
#include<stdio.h>
#include<conio.h>
main()
{
    //clrscr();
    printf("\nSize of int data type is=%d",sizeof(int));
    printf("\n\nSize long int data type is=%d",sizeof(long int));
    printf("\n\nSize short int data type is=%d",sizeof(short int));
    printf("\n\nSize of float data type is=%d",sizeof(float));
    printf("\n\nSize of double data type is=%d",sizeof(double));
    printf("\n\nSize of long double data type is=%d",sizeof(long double));
    printf("\n\nSize of character data type is=%d",sizeof(char));
	printf("\n\nSize of void data type is=%d",sizeof(void));
    getch();
}
/*
   Note:-
          1.Output vary with Compiler that you are running program.
          2.Last printf does not works in TurboC++ compiler.
          3.size of operator is used to memory required by
            premitive as well as non premitive data type. 
*/
