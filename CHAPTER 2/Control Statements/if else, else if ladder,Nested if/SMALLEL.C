/*
    Write a program to find smallest numbers among three number.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    clrscr();
    printf("Enter the three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b&&a<c)
    {
       printf(" a is smallest");
    }
    else if(b<c)
    {
       printf("b is smllest");
    }
    else
    {
	printf(" c is smallest");
    }
    getch();
}