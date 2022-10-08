/*
     Write a program to perform division of two numbers where user enter two numbers.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a,b;
	int c;
    //clrscr();
    printf("Enter the numbers\n");
    scanf("%d%d",&a,&b);
    c=a%b;
    printf("Division is=%d",c);
    getch();
}
