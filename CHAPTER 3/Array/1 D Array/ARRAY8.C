/*
   Write a program to enter array element and print its sum
   where user enter n.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a[50];
    int i,n;
    int sum=0;
    //clrscr();
    printf("Enter the size of array");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       printf("\nEnter the arrary elements\n");
       scanf("%d",&a[i]);
    }
    
    for(i=1;i<=n;i++)
    {
       sum=sum+a[i];
       printf("\nSum of array element is=%d",sum);
    }
    //clrscr();
    

    getch();
}
