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
	 first=mid;
	 last=mid;
	 while(first>=0&&last<n)
	 {
	 	   if(a[mid]==element)
	 	   {
	 	   	   flag=1;
	 	   	   break;
		   }
		   else if(element>a[mid])
		   {
		   	   mid=last++;
		   }
		   else
		   {
		   	   mid=first--;
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
