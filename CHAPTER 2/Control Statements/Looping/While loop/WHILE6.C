/* Write a program to print digit into of enter number. */
#include<stdio.h>
#include<conio.h>
main()
{
    int n,s=0,d,s1;
    clrscr();
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n>0)
    {
       d=n%10;
       s=s*10+d;
       n=n/10;
    }
    clrscr();
    while(s>0)
    {
	d=s%10;
	s1=s*10+d;
	s=s/10;
	switch(d)
	{
	    case 0:
		   printf(" Zero");
		   break;
	    case 1:
		    printf(" One");
		    break;
	    case 2:
		    printf(" Two");
		    break;
	    case 3:
		    printf(" Three");
		    break;
	    case 4:
		    printf(" Four");
		    break;
	    case 5:
		    printf(" Five");
		    break;
	    case 6:
		    printf(" Six");
		    break;
	    case 7:
		    printf(" Seven");
		    break;
	    case 8:
		    printf(" Eight");
		    break;
	    case 9:
		    printf(" Nine");
		    break;
	}
    }
    getch();

}






