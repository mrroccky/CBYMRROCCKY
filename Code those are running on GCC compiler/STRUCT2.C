/*
   Wap to define struture of Student having data member name,
   roll_no,percentage enter the data members values and display them
*/
#include<stdio.h>
#include<conio.h>
struct Student
{
   char name[50];
   int roll_no; //long int roll_no;
   float per;
};
main()
{
   struct Student s1;
   Student s2;//Allow such declartion in C++ only.
   //clrscr();
   printf("Enter the Name, Roll number and Percentage");
   scanf("%s%d%f",&s1.name,&s1.roll_no,&s1.per);
   printf("Name=%s\nRoll No=%d \nPercentage=%f",s1.name,s1.roll_no,s1.per);
   getch();
}

