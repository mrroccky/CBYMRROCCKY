/*
      Write a program to demonstrate union.
*/
#include<stdio.h>
#include<conio.h>
union Student
{
   int roll_no;
   char name[1];
};
main()
{
   union Student s1;
   clrscr();
   printf("Enter the name and roll number\n");
   scanf("%s%d",&s1.name,&s1.roll_no);
   printf("Name=%s",s1.name);
   printf("\nRoll number=%d",s1.name[0]);
   getch();
}