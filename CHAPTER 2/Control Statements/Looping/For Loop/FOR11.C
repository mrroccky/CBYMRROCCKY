/*
   Write a program to count even and odd numbers from 0 to n numbers.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int i,n,even=0,odd=0;
    //clrscr();
    printf("Enter the number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
       if(i%2==0)
       {
	  even++;
       }
       else
       {
	  odd++;
       }
    }
    printf("Number of even nos are=%d",even);
    printf("\nNumber of odd nos are=%d",odd);

    getch();
}
