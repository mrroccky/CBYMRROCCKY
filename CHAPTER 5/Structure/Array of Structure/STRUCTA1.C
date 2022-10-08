/*Wap to demonstrate Array of structure and inialized it.*/
#include<stdio.h>
#include<conio.h>
struct Student
{
   char name[50];
   int roll_no;
   float per;
};
main()
{
   struct Student s1[]={{"Chetan",1,90.00},{"Mukesh",2,95.23},{"Rushal",3,94}};
   int i;
   //clrscr();
   for(i=0;i<3;i++)
   {
      printf("\nName=%s\nRoll number=%d\nPercentage=%f",s1[i].name,s1[i].roll_no,s1[i].per);
      printf("\n\n-----------------------------");
   }

   getch();
}
