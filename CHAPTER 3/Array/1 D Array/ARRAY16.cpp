/*
    Write a program to perform sort in ascending order using Bubble sort.
*/ 
#include<stdio.h>
#include<conio.h>
main()
{
	  int a[50],n,i,j,temp;
	  //clrscr();
	  printf("Enter the no");
	  scanf("%d",&n);
	  printf("\nEnter the Array Elements\n");
	  for(i=0;i<n;i++)
	  {
	 	 scanf("%d",&a[i]);
	  }
	  for(i=0;i<n;i++)
	  {
	 	   for(j=0;j<n-1;j++)
	 	   {
	 	   	    if(a[j]>a[j+1])
	 	   	    {
	 	  	       temp=a[j];
	 	  	       a[j]=a[j+1];
	 	  	       a[j+1]=temp;
	 	  	    }
		   }
	  }
	  printf("\nSorted Order in ascending order");
	  for(i=0;i<n;i++)
	  {
	 	 printf("\n%d",a[i]);
	  }
	  
}
