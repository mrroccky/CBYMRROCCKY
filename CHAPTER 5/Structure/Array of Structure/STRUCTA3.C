/*
   Wap to define Array of structure for Student having data memeber
   Name,roll_no and read data for n structure variable.
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
     int i,n;
     clrscr();
     printf("Enter the numbers");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
       printf("Enter the  Name and Roll number\n");
       scanf("%s%d",&s1[i].name,&s1[i].roll_no);
     }
     for(i=1;i<=n;i++)
     {
	printf("\nName=%s\nRoll number=%d",s1[i].name,s1[i].roll_no);
     }
     getch();

}
