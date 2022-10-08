/*
    Write a program to calculate 
	simple interest where user principle amount,rate of interest and number of year.
*/
#include<stdio.h>
#include<conio.h>
main()
{
	float p,r,simpleInterest;
	int n;
	//clrscr();
	printf("principle amount,rate of interest and number of year\n");
	scanf("%f%f%d",&p,&r,&n);
	simpleInterest=p*r*n/100;
	printf("Simple Ineterest is=%f",simpleInterest);
}
