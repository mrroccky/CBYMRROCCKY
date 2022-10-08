/*
     Write a program to display 1 to 10 using do while loop.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int i=1;
    //clrscr();
    do
    {
	printf("\n%d",i);
	i++;
    }while(i<=10);
    getch();
}
