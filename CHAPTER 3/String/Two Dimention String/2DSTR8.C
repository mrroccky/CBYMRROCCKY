/*
   Write a program to searching a string where string is entered by user.
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
     static char a[50][20],b[40];
     int i,j,n,pos,v,flag=0;
     clrscr();
     printf("Enter the number that how many strings do you want to enter");
     scanf("%d",&n);
     clrscr();
     printf("Enter the strings\n");
     for(i=1;i<=n;i++)
     {
	scanf("%s",&a[i]);
     }
     printf("Enter the string that you want to searching\n");
     scanf("%s",&b);
     for (i=1;i<=n;i++)
     {

     }
     clrscr();
     for(i=1;i<=n;i++)
     {
	 v=strcmp(a[i],b);
	 if(v==0)
	 {
	    flag=1;
	    pos=i;
	    break;
	 }
     }
   if(flag==1)
   {
      printf("\nEntered string is found");
      printf("\nat position=%d",pos);
   }
   else
   {
      printf("Entered string is not found");
   }
   getch();
}
