/*
   Wap to define struture of Library  having data Book id,
   book name,author name, and price enter the data members values and display them
*/
#include<stdio.h>
#include<conio.h>
struct Library
{
   char bk_name[500];
   int bk_id; //long int roll_no;
   float bk_price;
};
main()
{
   struct Library l1;
   clrscr();
   printf("Enter the Book name Book ID and Price");
   scanf("%s%d%f",&l1.bk_name,&l1.bk_id,&l1.bk_price);
   printf("Book Name=%s\nBook ID=%d \nPrice=%.2f",l1.bk_name,l1.bk_id,l1.bk_price);

   getch();
}

