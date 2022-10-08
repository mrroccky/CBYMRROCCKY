/*
    Write a program to make menu driven for following choices
    using if elseif ladder.
    1.Addition.
    2.Subtraction.
    3.Multiplication.
    4.Division.
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
     int a,b,c,ch;
     //clrscr();
     printf("\n1->Addition");
     printf("\n2->Subtraction");
     printf("\n3->Multiplication");
     printf("\n4->Division");
     printf("\nEnter the choice");
     system("sd.bat");
     scanf("%d",&ch);
     
     if(ch==1)
     {
	   printf("\nEnter the numbers");
	   scanf("%d%d",&a,&b);
	   c=a+b;
	   printf("\nAddition is=%d",c);
     }
     else if(ch==2)
     {
	   printf("\nEnter the numbers");
	   scanf("%d%d",&a,&b);
	   c=a-b;
	   printf("\nSubtraction is=%d",c);
     }
     else if(ch==3)
     {
	    printf("\nEnter the numbers");
	    scanf("%d%d",&a,&b);
	    c=a*b;
	    printf("\nMultiplication is=%d",c);
     }
     else if(ch==4)
     {
	    printf("\nEnter the numbers");
	    scanf("%d%d",&a,&b);
	    c=a/b;
	    printf("\nDivision is=%d",c);
     }
     else
     {
	    printf("Entered choice is invalid");
     }
     getch();
}

