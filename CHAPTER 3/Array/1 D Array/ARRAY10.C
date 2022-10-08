/*
   Write a program to perform linear search.
*/
#include<stdio.h>
#include<conio.h>
#include<windows.h>
main()
{
    int a[50];
    int i,n;
    int ele,f=0,pos;
    //clrscr();
    printf("Enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       printf("\nEnter the arrary elements\n");
       scanf("%d",&a[i]);
    }
    printf("\nEnter the searching element");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
       if(a[i]==ele)
       {
	    pos=i;
	    f=1;
	    break;
       }

    }
    //clrscr();
    if(f==1)
    {
       printf("Entered element for searching is found");
       printf("\nat position=%d",pos+1);
       Beep(3140,20000);
    }
    else
    {
       printf("Entered element for searching is not found");
       Beep(3160,20000);
    }
    getch();
}
