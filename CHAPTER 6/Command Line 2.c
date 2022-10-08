/*Write a program to addtion using command line argument.*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(int argc,char *argv[])
{
	int a,b,c;
    a=atoi(argv[1]);
	b=atoi(argv[2]);
	c=a+b;
    printf("\nAddition is=%d",c);
	getch();
}
