/*
   Write a program to sort string in ascending order.
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    static char a[50][20],b[40];
    int i,j,n,v;
    clrscr();
    printf("Enter the number that how many strings do you want to enter");
    scanf("%d",&n);
    printf("Enter the strings\n");
    for(i=1;i<=n;i++)
    {
       scanf("%s",&a[i]);
    }
    for (i=1;i<=n;i++)
    {
	for(j=1;j<=n-1;j++)
	{
	     v=strcmp(a[j],a[j+1]);
	     if(v>0)
	     {
		strcpy(b,a[j]);
		strcpy(a[j],a[j+1]);
		strcpy(a[j+1],b);
	     }
	}
    }
    clrscr();
    printf("\Sorted Ascending order strings are=\n");
    for(i=1;i<=n;i++)
    {
       printf("\n%s",a[i]);
    }

    getch();
}
