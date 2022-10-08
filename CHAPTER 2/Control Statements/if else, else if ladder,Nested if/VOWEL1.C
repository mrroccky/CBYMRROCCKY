/*
    Write a program to check whether entered character is vowel or consonant.
*/
#include<stdio.h>
#include<conio.h>
main()
{
     char a;
     //clrscr();
     printf("Enter the character\n");
     scanf("%c",&a);
     if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
     {
	printf("Enter character is vowel");
     }
     else
     {
	printf("Enter character is cosonant");
     }
     getch();
}
