/*
     Write a program to display 1 to n using do while loop.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int i=1,n;
    //clrscr();
    printf("Enter the numbers");
    scanf("%d",&n);
    do
    {
	printf("\n%d",i);
	i++;
    }while(i<=n);
    getch();
}
