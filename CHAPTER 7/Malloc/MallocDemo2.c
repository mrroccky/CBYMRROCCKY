#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int *p;
	int i;
	p=malloc(2);
	printf("Enter the number");
	for(i=0;i<5;i++)
	{
		scanf("%d",(p+i));
	}
	for(i=0;i<5;i++)
	{
		printf("%d",*(p+i));
    }
	getch();
}
