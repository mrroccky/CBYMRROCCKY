/*
    Write a program to perform following operation on entered number
    1.Addition.
    2.Subtraction.
    3.Mutiplication.
    4.Division.
    5.Mod.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    //clrscr();
    printf("Entered the numberes");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\nAddition is=%d",c);
    c=a-b;
    printf("\nSubtraction is=%d",c);
    c=a*b;
    printf("\nMultiplication is=%d",c);
    c=a/b;
    printf("\nDivision is=%d",c);
    c=a%b;
    printf("\nMod is=%d",c);
    getch();
}
