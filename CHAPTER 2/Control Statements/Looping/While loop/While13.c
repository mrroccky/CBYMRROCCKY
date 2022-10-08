#include<stdio.h>
#include<conio.h>
main()
{
    long int nBINARY,nHEX,nOCTAL;
    long int d,sum=0;
    long int binary=0,i=1,n;
    long int hex=0,oct=0;
    clrscr();
    printf("Enter  the number\n");
    scanf("%ld",&n);
    nBINARY=nHEX=nOCTAL=n;
    while(nBINARY>0)
    {
       binary=binary+(nBINARY%2)*i;
       i=i*10;
       nBINARY=nBINARY/2;
    }
    i=1;
    while(nHEX>0)
    {
       hex=hex+(nHEX%16)*i;
       i=i*10;
       nHEX=nHEX/16;
    }
    i=1;
    while(nOCTAL>0)
    {
       oct=oct+(nOCTAL%8)*i;
       i=i*10;
       nOCTAL=nOCTAL/8;
    }


    printf("\nBinary of  decimal %ld is=%ld",n,binary);
    printf("\nOctal of decimal of %ld is=%ld",n,oct);
    printf("\nHexdecimal of decimal %ld is=%lX",n,hex);
   getch();
}