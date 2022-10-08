



/*
    Write a program to perform arithmetic operation using pointer.
		      OR
    Write a program to perform pointer arithmetics.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a=10,b=20,c;
    int *p,*q;
    //clrscr();
    p=&a;
    q=&b;
    c=*p+*q;
    printf("\nAddition is=%d",c);
    c=*p-*q;
    printf("\nSubtraction is=%d",c);
    c=*p**q;
    printf("\nMultiplication is=%d",c);
    c=*p/ *q;
    printf("\nDivision is=%d",c);
    c=*p%*q;
    printf("\nMod is=%d",c);
    getch();
}
/*
   Note:-
	  1.We can not add,subtract,mutiply,divide,mod the
	    pointer.
	  2.We can apply relational operator on pointer.
	  3.We can not apply bitwise operator on pointer.
*/
