/*
   Write a program to display even numbers from 0 to n.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int i,n;
    //clrscr();
    printf("Enter the number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
       if(i%2==0)
       {
	  printf("\n%d",i);
       }
    }
    getch();
}
