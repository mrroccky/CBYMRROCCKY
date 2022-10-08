/*
     Write a program to addition using goto statement.
*/
#include<stdio.h>
#include<conio.h>
main()
{
     int a,b,c;
     char ch;
     //clrscr();
     i:
     printf("\nEnter the number");
     scanf("%d%d",&a,&b);
     c=a+b;
     printf("\nAddition is=%d",c);

     printf("\nDo you want to continue press y or exit press any key\n");

     scanf("%s",&ch);

     if(ch=='y')
     {
	goto i;
     }
     else
     {
	printf("Exit from program");
     }

     getch();
}
