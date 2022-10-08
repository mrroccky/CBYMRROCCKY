

/*Write a program to make menu driven for following choices.
1] Addition
2] Subtraction.
3] Multiplication.
4] Division.
*/
#include<stdio.h>
#include<conio.h>
main()
{
	 int a,b,c,ch;
	 //clrscr();
	 printf("\n1->Addition");
	 printf("\n2->Subtraction");
	 printf("\n3->Multiplication");
	 printf("\n4->Division");
	 printf("\nEnter the choice");
	 scanf("%d",&ch);
	 //clrscr();
	 switch(ch)
	 {
		 case 1:
			   printf("\nEnter the number");
			   scanf("%d%d",&a,&b);
			   c=a+b;
			   printf("\nAddition is=%d",c);
			   break;
		 case 2:
			    printf("Enter the number");
			    scanf("%d%d",&a,&b);
			    c=a-b;
			    printf("\nSubtraction is=%d",c);
			    break;
		 case 3:
			   printf("\nEnter the number");
			   scanf("%d%d",&a,&b);
			   c=a*b;
			   printf("\nMultiplication is=%d",c);
			   break;
		case 4:

			   printf("\nEnter the number");
			   scanf("%d%d",&a,&b);
			   c=a/b;
			   printf("\nDivison is=%d",c);
			   break;
	    default:
			   printf("\nEntered choice is invalid");
	    }
        getch();

}
/*Note:-
	 1]We must not define choice variable float and double data type.
	 2]We can not define case in float(pointing) constant directly.
	 3]But we can define case in float(pointing)constant by using type casting into integer,short and byte only.
*/
