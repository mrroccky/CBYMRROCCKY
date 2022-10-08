/*Write a program to print Palindrom numbers from 0 to n in Octal.*/
#include<stdio.h>
#include<conio.h>
main()
{
   long int n,n1,sum=0,i=0,d;
   //clrscr();
   printf("Enter the number");
   scanf("%ld",&n);
   //clrscr();
   while(i<=n)
   {
	n1=i;
	while(n1>0)
	{
	   d=n1%10;
	   sum=sum*10+d;
	   n1=n1/10;
	}
	if(sum==i)
	{
	    printf(" %d",i);
	}
	sum=0;
	i++;
   }
   getch();
}
