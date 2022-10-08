




/*
   Write program to demonstrate structure.
	    OR
   Write a progra to define structure of student and having data members are name amd rollo and inialize them

*/
#include<stdio.h>
#include<conio.h>
struct Student
{
   char name[50];// data member
   int roll_no; //data member
};
main()
{
  struct Student s1={"chetan"};
  //clrscr();
  printf("Name of Student and roll no. is=%s %d",s1.name,s1.roll_no);
  getch();
}
