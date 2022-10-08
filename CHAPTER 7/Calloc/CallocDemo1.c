#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int *p;
	p=calloc(3,2);
	printf("Enter the number");
	scanf("%d",p);
	printf("%d",*p);
	getch();
}
