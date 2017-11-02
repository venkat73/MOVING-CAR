#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void floodfill(int x,int y,int oldcolor,int newcolor)
{   if(getpixel(x,y)==oldcolor)
      {
	 putpixel(x,y,newcolor);
	 floodfill(x+1,y,oldcolor,newcolor);
	 floodfill(x,y+1,oldcolor,newcolor);
	 floodfill(x-1,y,oldcolor,newcolor);
	 floodfill(x,y-1,oldcolor,newcolor);
	}
}
void main()
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\bgi");


for (int i=0;i<500;i++)
{
/***CAR BODY ******/
 setcolor(YELLOW);
 setfillstyle(SOLID_FILL, RED);
 
line(50+i,370,90+i,370);
arc(110+i,370,0,180,20);


line(130+i,370,220+i,370);
arc(240+i,370,0,180,20);


line(260+i,370,300+i,370);
line(300+i,370,300+i,350);


line(300+i,350,240+i,330);
line(240+i,330,200+i,300);


line(200+i,300,110+i,300);
line(110+i,300,80+i,330);


line(80+i,330,50+i,340);
line(50+i,340,50+i,370);



/***CAR Windows***/
line(165+i,305,165+i,330);
line(165+i,330,230+i,330);
line(230+i,330,195+i,305);
line(195+i,305,165+i,305);

line(160+i,305,160+i,330);
line(160+i,330,95+i,330);
line(95+i,330,120+i,305);
line(120+i,305,160+i,305);

 floodfill(160+i,350, YELLOW);

/**Wheels**/

 setcolor(BLUE);
 setfillstyle(SOLID_FILL, DARKGRAY);
circle(110+i,370,17);
floodfill(110+i,370,BLUE);
circle(240+i,370,17);
floodfill(240+i,370,BLUE);

delay(10);
cleardevice();
setcolor(WHITE);
line(0,390,639,390);  //ROAD
}
getch();

}