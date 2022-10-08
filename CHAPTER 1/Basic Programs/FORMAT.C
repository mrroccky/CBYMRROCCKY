/*
    Write a program to demonstrate formatting with printf.

*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a=10;
    float b=10.23e5;
    char c='a';
    //clrscr();
    /*printf("On Integer data type");
    printf("\n--------------------------------------------------------");
    printf("\na=%d",a);
    printf("\na=%5d",a);
    printf("\na=%03d",a);
    printf("\na=%*d",10,a);
    printf("\n\n\na=%.*d",10,a);*/

    printf("On Float data type");
    printf("\n--------------------------------------------------------");
    printf("\n\nb=%f",b);
    printf("\nb=%.0f",b);
    printf("\nb=%.2f",b);
    printf("\nb=%f",b);

    printf("\n\n\nOn Character data type");
    printf("\n--------------------------------------------------------");

    printf("\nc=%c",c);
    printf("\nc=%4c",c);
    getch();
}
