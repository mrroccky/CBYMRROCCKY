/*
    Write a program to demonstrate how to pass array to function.
			 OR
    Write a program to display array element using function with argument
    but no return value.
*/
#include<stdio.h>
#include<conio.h>
void array1(int[]);
void array2(int[]);
void array3(int*);
main()
{
   int a[]={1,2,3,4,5};
   //clrscr();
   array1(a);
   printf("\n%d",a[3]);
   array2(a);
   array3(a);
   getch();
}
void array1(int b[])
{
    int i;
    printf("Array element is displaying from funtion array1");
    for(i=0;i<5;i++)
    {
       printf("\n%d",b[i]);
    }
    b[3]=2000;
}
void array2(int a[50])
{
    int i;
    printf("\n------------------------------------------------------");
    printf("\n\n\nArray element is displaying from funtion array2");
    for(i=0;i<5;i++)
    {
       printf("\n%d",a[i]);
    }
}
void array3(int *a)
{
    int i;
    printf("\n------------------------------------------------------");
    printf("\n\n\nArray element is displaying from funtion array3");
    for(i=0;i<5;i++)
    {
       printf("\n%d",a[i]);
    }
}


