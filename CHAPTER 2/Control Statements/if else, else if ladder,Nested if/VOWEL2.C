/*
    Write a program to check whether entered character is vowel or consonant.
*/
#include<stdio.h>
#include<conio.h>
main()
{
     char a;
    // clrscr();
     printf("Enter the character\n");
     scanf("%c",&a);
     if(a==97||a==101||a==105||a==111||a==117||a==65||a==69||a==73||a==79||a==85)
     {
	printf("Enter character is vowel");
     }
     else
     {
	printf("Enter character is cosonant");
     }
     getch();
}
