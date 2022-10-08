#include<stdio.h>
#include<conio.h>
#include<graphics.h>
main()
{
   int a[]={1,2,3,4,5},i,n,x=17,x1=15;
   int gd=DETECT,gm;
   clrscr();
   initgraph(&gd,&gm,"c:\\turboc3\\bgi");
   rectangle(100,100,370,130);
   line(150,100,150,130);
   line(200,100,200,130);
   line(250,100,250,130);
   line(300,100,300,130);
   for(i=0;i<5;i++)
   {
       gotoxy(x,8);
       printf("%d",a[i]);
       x=x+6;
   }
   for(i=0;i<5;i++)
   {
     gotoxy(x1,10);
     printf("a[%d]",i);
     x1=x1+6;
   }
   setcolor(10);
   outtextxy(getmaxx()/2,300,"Developed By:-");
   setcolor(4);
   outtextxy(getmaxx()/2+50,320,"Chetan R. Wawarkar");
   getch();
}
