/*
   Wap to define Array of structure for Student having data memeber
   Name,roll_no and read data for 5 structure variable.
.*/

#include<stdio.h>
#include<conio.h>
struct Student
{
   char name[500];
   int roll_no;
};
main()
{
     struct Student s1[50];
     int i;
     //clrscr();
     for(i=0;i<2;i++)
     {
       printf("Enter the  Name and Roll number\n");
       scanf("%s%d",&s1[i].name,&s1[i].roll_no);
     }
     for(i=0;i<2;i++)
     {
	    printf("\nName=%s\nRoll number=%d",s1[i].name,s1[i].roll_no);
     }
     getch();

}
