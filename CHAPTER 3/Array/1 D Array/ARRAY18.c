/*
     Write a program to perform sort in desending order using Bubble sort.
*/ 
#include<stdio.h>
#include<conio.h>
main()
{
	  int a[50],n,i,j,min,pos,temp;
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
	  	  min=a[i];
	 	  for(j=1;j<n;j++)
	 	  {
	 	 	 if(a[j]<min)
	 	 	 {
	 	 	    min=a[j];
				pos=j;	
			 }
			 
		  }
		  if(a[i]>min)
		  {
		  	temp=a[i];
		    a[i]=min;
		    a[pos]=temp;	
		  }
		  
		
	  }
	  printf("\nSorted Order in desending order");
	  for(i=0;i<n;i++)
	  {
	 	 printf("\n%d",a[i]);
	  }
	  
}
