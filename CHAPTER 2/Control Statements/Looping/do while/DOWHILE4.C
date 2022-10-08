/*
     Write a program to addition using do while loop.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    char ch;
    //clrscr();
    do
    {
	printf("\nEnter the number");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("\nAddition is=%d",c);
	printf("\nDo you want to continue press y and for press any key\n");
	scanf("%s",&ch);
    }while(ch=='y');
    getch();
}
