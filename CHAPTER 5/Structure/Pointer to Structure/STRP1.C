/*
   Wap to define Array of structure for Student having data memeber
   Name,roll_no and percentage and use pointer to structure.
.*/

#include<stdio.h>
#include<conio.h>
struct Student
{
   char name[500];
   int roll_no;
   float per;
};
main()
{
     struct Student s1,*s2;
     //clrscr();
     s2=&s1;
     printf("Enter the Name ,Roll number and percentage\n");
     scanf("%s%d%f",s2->name,&s2->roll_no,&s2->per);
     printf("Name=%s\nRoll number=%d\nPercentage=%f",s2->name,s2->roll_no,s2->per);
     getch();

}
