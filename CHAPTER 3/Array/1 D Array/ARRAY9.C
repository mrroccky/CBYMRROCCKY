/*
   Write a program to enter array element count even and odd number.
   where user enter n.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a[50];
    int i,n;
    int even=0,odd=0;
    //clrscr();
    printf("Enter the size of array");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       printf("\nEnter the arrary elements\n");
       scanf("%d",&a[i]);
    }
    
    printf("\nEnter elemements are");
    for(i=1;i<=n;i++)
    {
       printf("\n%d",a[i]);
    }
    for(i=1;i<=n;i++)
    {
		if(a[i]%2==0)
		{
		   even++;
		}
		else
		{
		   odd++;
		}
    }
    //clrscr();
    printf("\nNumber of even number in array=%d",even);
    printf("\nNumber of odd number in array=%d",odd);
    getch();
}
