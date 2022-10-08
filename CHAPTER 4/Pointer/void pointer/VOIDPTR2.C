#include<stdio.h>
#include<conio.h>
#include<string.h>
/*
    Write a program to store the address of integer,character, float
    data type and display value of each data type using void pointer.
*/
main()
{
    int a=10;
    float b=10.23;
    char c='a';
    void *p,*q,*r;
   // clrscr();
    p=&a;
    q=&b;
    r=&c;
    printf("Address of a variable for integer data type using void pointer is=%u",p);
    printf("\nValue at that address for a variable for integer data type is=%d",*(int*)p);

    printf("\n\n\nAddress of b variable for float data type using void pointer is=%u",q);
    printf("\nValue at that address for b variable for float data type is=%f",*(float*)q);

    printf("\n\n\nAddress of c variable for chaaracter data type using void pointer is=%u",r);
    printf("\nValue at that address for c variable for character data type is=%c",*(char*)r);

    //getch();
}
