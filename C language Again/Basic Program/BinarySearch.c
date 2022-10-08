#include<stdio.h>
#include<conio.h>
main()
{
	 int a[50],i,first=0,last,n,mid,element,flag=0;
	 //clrscr();
	 printf("Enter the n");
	 scanf("%d",&n);
	 printf("Enter the Array elements");
	 for(i=0;i<n;i++)
	 {
		scanf("%d",&a[i]);
	 }
	 printf("Please enter the searching element");
	 scanf("%d",&element);
	 last=n-1;
	 mid=first+last/2;
	 while(first<=last)
	 {
	 	   mid=first+last/2;
	 	   if(a[mid]==element)
	 	   {
	 	   	   flag=1;
	 	   	   break;
		   }
		   else if(element>a[mid])
		   {
		   	   first=mid+1;
		   }
		   else
		   {
		   	   last=mid-1;
		   }
	 }
	 if(flag==1)
	 {
	 	printf("\nEnter element is found");
	 }
	 else
	 {
	 	printf("\nEnter element is not found");
	 }
}
