/*
    Write a program to demonstrate Bitwise operators.

*/
#include<stdio.h>
#include<conio.h>
main()
{
     int a=10,b=20;
     int c;
     clrscr();
     c=a&b;
     printf("\nBitwise AND is=%d",c);
     c=a|b;
     printf("\nBitwise OR is=%d",c);
     c=a^b;
     printf("\nBitwise EX-OR is=%d",c);
     c=a<<b;
     printf("\nBitwise Left shift is=%d",c);
     c=a>>b;
     printf("\nBitwise Right shift is=%d",c);
     c=~a;
     printf("\nBitwise 1 complement is=%d",c);
     getch();
}




