/*Write a program to give grade according following creteria.
1] Per>=75 And Per<=100 
        A+ Grade.
2] Per>=60 And Per<75.
        A Grade.
3] Per>=45 And Per<60.
        B Grade
4] Per>=35 And Per<45.
         C Grade
*/
#include<stdio.h>
#include<conio.h>
main()
{

      int mark1,mark2,mark3,mark4,mark5,total;
      float per;
      //clrscr();
      printf("Enter the marks of 5 subjects");
      scanf("%d%d%d%d%d",&mark1,&mark2,&mark3,&mark4,&mark5);
      
      total=mark1+mark2+mark3+mark4+mark5;
      per=(float)total/500*100;
      printf("\nTotal=%d",total);
      printf("\nPercentage=%f",per);
      if(mark1>=35&&mark2>=35&&mark3>=35&&mark4>=35&&mark5>=35)
      {
	   if(per>=75&&per<=100)
	   {
		 printf("\nA+ grade");
	   }
	   if(per>=60&&per<=74)
	   {
		  printf("\nA grade");
	   }
	   if(per>=45&&per<=59)
	   {
		  printf("\nB grade");
	   }
	   if(per>=35&&per<=44)
	   {
		  printf("\nC grade");

	   }
      }
      else
      {
	     printf("\nFail");
      }
      getch();
}
