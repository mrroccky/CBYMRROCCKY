#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int *p;
	p=malloc(2);
	printf("Enter the number");
	scanf("%d",p);
	printf("%d",*p);
	free(p);
	getch();
}
