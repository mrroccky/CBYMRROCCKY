/*
   Write a program to display odd numbers from 1 to n.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int i,n;
    //clrscr();
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       if(i%2==1)
       {
	  printf("\n%d",i);
       }
    }
    getch();
}
