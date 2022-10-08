/*
    Write a program to pointer with array.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a[]={1,2,3,4,5},i=0;
    int *p;
    clrscr();
    p=&a[0];//or p=a;
    while(i<5)
    {
	printf("\n%d",*p);
	p++;
	i++;
    }
    getch();
}
