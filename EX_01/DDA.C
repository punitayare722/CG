#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
int main()
{
float x,y,x1,y1,x2,y2,dx,dy,step;
int i,gd=DETECT,gm=0;
initgraph(&gd,&gm,"C:/TurboC3/BGI");
printf("\nEnter x1 coordinate");
scanf("%d",&x1);
printf("\nEnter y1 coordinate");
scanf("%d",&y1);
printf("\nEnter x2 coordinate");
scanf("%d",&x2);
printf("\nEnter y2 coordinate");
scanf("%d",&y2);
dx=abs(x2-x1);
dy=abs(y2-y1);
if(dx>dy)
{
step=dx;
}
else
{
step=dy;
}
dx=dx/step;
dy=dy/step;
x=x1;
y=y1;
i=1;
while(i<=step)
{
putpixel(x,y,14);
x=x+dx;
y=y+dy;
i=i+1;
delay(100);
}
getch();
closegraph();
return 0;
}
