#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void body()
{
 line(200,100,200,120);
 line(240,100,240,120);
 line(200,100,240,100);
 arc(220,120,180,360,20);
setfillstyle(1,BROWN);
floodfill(220,115,WHITE);
//mostach
arc(220,130,20,160,20);
arc(220,160,60,120,40);
setfillstyle(1,BLACK);
floodfill(220,119,WHITE);
arc(220,117,195,345,15);
setfillstyle(1,WHITE);
floodfill(220,122,WHITE);
//eyes
arc(210,105,180,360,4);
arc(230,105,180,360,4);
line(207,105,213,105);
line(227,105,233,105);
setfillstyle(1,WHITE);
floodfill(210,106,WHITE);
floodfill(230,106,WHITE);
putpixel(210,106,BLACK);
putpixel(230,106,BLACK);
setcolor(BLACK);
line(205,103,214,103);
line(235,103,226,103);
//mukat
setcolor(WHITE);
line(200,100,200,75);
line(240,100,240,75);
line(200,75,220,60);
line(240,75,220,60);
setfillstyle(1,YELLOW);
floodfill(220,65,WHITE);
ellipse(220,77,0,360,5,10);
setfillstyle(1,BLUE);
floodfill(220,77,WHITE);
//neck
line(205,132,205,150);
line(235,132,235,150);
arc(220,125,240,300,30);
setfillstyle(1,BROWN);
floodfill(220,150,WHITE);
//body
//shoulderlines
line(205,150,170,160);
line(235,150,270,160);
//chestline
line(175,185,190,250);
line(265,185,250,250);
setfillstyle(1,5);

//left arm
line(170,160,130,200);
line(175,185,145,215);
line(130,200,130,220);
line(145,215,145,220);
//sword
setlinestyle(0,0,3);
line(125,220,150,220);
line(137,220,137,200);
setlinestyle(0,0,1);
line(137,220,137,320);
line(137,320,127,310);
line(127,310,130,220);
line(137,320,143,315);
line(143,315,142,220);
//right arm
line(270,160,310,200);
line(265,185,305,215);
line(305,215,315,217);
circle(340,200,30);
circle(340,200,15);
setfillstyle(1,7);
floodfill(340,200,WHITE);
setfillstyle(1,8);
floodfill(324,200,WHITE);

//lower body
line(190,250,250,250);
line(190,270,250,270);
line(190,250,190,270);
line(250,250,250,270);
setfillstyle(1,3);
floodfill(195,255,WHITE);
line(190,270,140,470);
line(250,270,300,470);
line(140,470,300,470);
setfillstyle(1,6);
floodfill(195,275,WHITE);
  }

  void secondhead()
{
       //second head
 line(200-40,100+10,200-40,120+10);
line(240-40,100+10,240-40,120+10);
line(200-40,100+10,240-40,100+10);
arc(220-40,120+10,180,360,20);
setfillstyle(1,BROWN);
floodfill(220-40,115+10,WHITE);
//mostach
arc(220-40,130+10,20,160,20);
arc(220-40,160+10,60,120,40);
setfillstyle(1,BLACK);
floodfill(220-40,119+10,WHITE);
arc(220-40,117+10,195,345,15);
setfillstyle(1,WHITE);
floodfill(220-40,122+10,WHITE);
//eyes
arc(210-40,105+10,180,360,4);
arc(230-40,105+10,180,360,4);
line(207-40,105+10,213-40,105+10);
line(227-40,105+10,233-40,105+10);
setfillstyle(1,WHITE);
floodfill(210-40,106+10,WHITE);
floodfill(230-40,106+10,WHITE);
putpixel(210-40,106+10,BLACK);
putpixel(230-40,106+10,BLACK);
setcolor(BLACK);
line(205-40,103+10,214-40,103+10);
line(235-40,103+10,226-40,103+10);
//mukat
setcolor(WHITE);
line(200-40,100+10,200-40,75+10);
line(240-40,100+10,240-40,75+10);
line(200-40,75+10,220-40,60+10);
line(240-40,75+10,220-40,60+10);
setfillstyle(1,YELLOW);
floodfill(220-40,65+10,WHITE);
ellipse(220-40,77+10,0,360,5,10);
setfillstyle(1,BLUE);
floodfill(220-40,77+10,WHITE);

 }


 void thirdhead()
 {
      //third head
 line(200-80,100+20,200-80,120+20);
line(240-80,100+20,240-80,120+20);
line(200-80,100+20,240-80,100+20);
arc(220-80,120+20,180,360,20);
setfillstyle(1,BROWN);
floodfill(220-80,115+20,WHITE);
//mostach
arc(220-80,130+20,20,160,20);
arc(220-80,160+20,60,120,40);
setfillstyle(1,BLACK);
floodfill(220-80,119+20,WHITE);
arc(220-80,117+20,195,345,15);
setfillstyle(1,WHITE);
floodfill(220-80,122+20,WHITE);
//eyes
arc(210-80,105+20,180,360,4);
arc(230-80,105+20,180,360,4);
line(207-80,105+20,213-80,105+20);
line(227-80,105+20,233-80,105+20);
setfillstyle(1,WHITE);
floodfill(210-80,106+20,WHITE);
floodfill(230-80,106+20,WHITE);
putpixel(210-80,106+20,BLACK);
putpixel(230-80,106+20,BLACK);
setcolor(BLACK);
line(205-80,103+20,214-80,103+20);
line(235-80,103+20,226-80,103+20);
//mukat
setcolor(WHITE);
line(200-80,100+20,200-80,75+20);
line(240-80,100+20,240-80,75+20);
line(200-80,75+20,220-80,60+20);
line(240-80,75+20,220-80,60+20);
setfillstyle(1,YELLOW);
floodfill(220-80,65+20,WHITE);
ellipse(220-80,77+20,0,360,5,10);
setfillstyle(1,BLUE);
floodfill(220-80,77+20,WHITE);
  }


  void fourthhead()
  {
       //fourth head
 line(200-120,100+30,200-120,120+30);
line(240-120,100+30,240-120,120+30);
line(200-120,100+30,240-120,100+30);
arc(220-120,120+30,180,360,20);
setfillstyle(1,BROWN);
floodfill(220-120,115+30,WHITE);
//mostach
arc(220-120,130+30,20,160,20);
arc(220-120,160+30,60,120,40);
setfillstyle(1,BLACK);
floodfill(220-120,119+30,WHITE);
arc(220-120,117+30,195,345,15);
setfillstyle(1,WHITE);
floodfill(220-120,122+30,WHITE);
//eyes
arc(210-120,105+30,180,360,4);
arc(230-120,105+30,180,360,4);
line(207-120,105+30,213-120,105+30);
line(227-120,105+30,233-120,105+30);
setfillstyle(1,WHITE);
floodfill(210-120,106+30,WHITE);
floodfill(230-120,106+30,WHITE);
putpixel(210-120,106+30,BLACK);
putpixel(230-120,106+30,BLACK);
setcolor(BLACK);
line(205-120,103+30,214-120,103+30);
line(235-120,103+30,226-120,103+30);
//mukat
setcolor(WHITE);
line(200-120,100+30,200-120,75+30);
line(240-120,100+30,240-120,75+30);
line(200-120,75+30,220-120,60+30);
line(240-120,75+30,220-120,60+30);
setfillstyle(1,YELLOW);
floodfill(220-120,65+30,WHITE);
ellipse(220-120,77+30,0,360,5,10);
setfillstyle(1,BLUE);
floodfill(220-120,77+30,WHITE);
   }

   void fifthhead()
{
	//fifth head
 line(200-160,100+40,200-160,120+40);
line(240-160,100+40,240-160,120+40);
line(200-160,100+40,240-160,100+40);
arc(220-160,120+40,180,360,20);
setfillstyle(1,BROWN);
floodfill(220-160,115+40,WHITE);
//mostach
arc(220-160,130+40,20,160,20);
arc(220-160,160+40,60,120,40);
setfillstyle(1,BLACK);
floodfill(220-160,119+40,WHITE);
arc(220-160,117+40,195,345,15);
setfillstyle(1,WHITE);
floodfill(220-160,122+40,WHITE);
//eyes
arc(210-160,105+40,180,360,4);
arc(230-160,105+40,180,360,4);
line(207-160,105+40,213-160,105+40);
line(227-160,105+40,233-160,105+40);
setfillstyle(1,WHITE);
floodfill(210-160,106+40,WHITE);
floodfill(230-160,106+40,WHITE);
putpixel(210-160,106+40,BLACK);
putpixel(230-160,106+40,BLACK);
setcolor(BLACK);
line(205-160,103+40,214-160,103+40);
line(235-160,103+40,226-160,103+40);
//mukat
 setcolor(WHITE);
 line(200-160,100+40,200-160,75+40);
line(240-160,100+40,240-160,75+40);
line(200-160,75+40,220-160,60+40);
line(240-160,75+40,220-160,60+40);
setfillstyle(1,YELLOW);
floodfill(220-160,65+40,WHITE);
ellipse(220-160,77+40,0,360,5,10);
setfillstyle(1,BLUE);
floodfill(220-160,77+40,WHITE);
	}


   void sixthhead()
	{
		   //sixth head
setcolor(WHITE);
line(200+40,100+10,200+40,120+10);
line(240+40,100+10,240+40,120+10);
line(200+40,100+10,240+40,100+10);
arc(220+40,120+10,180,360,20);
setfillstyle(1,BROWN);
floodfill(220+40,115+10,WHITE);
//mostach
arc(220+40,130+10,20,160,20);
arc(220+40,160+10,60,120,40);
setfillstyle(1,BLACK);
floodfill(220+40,119+10,WHITE);
arc(220+40,117+10,195,345,15);
setfillstyle(1,WHITE);
floodfill(220+40,122+10,WHITE);
//eye
arc(210+40,105+10,180,360,4);
arc(230+40,105+10,180,360,4);
line(207+40,105+10,213+40,105+10);
line(227+40,105+10,233+40,105+10);
setfillstyle(1,WHITE);
floodfill(210+40,106+10,WHITE);
floodfill(230+40,106+10,WHITE);
putpixel(210+40,106+10,BLACK);
putpixel(230+40,106+10,BLACK);
setcolor(BLACK);
line(205+40,103+10,214+40,103+10);
line(235+40,103+10,226+40,103+10);
//mukat
setcolor(WHITE);
line(200+40,100+10,200+40,75+10);
line(240+40,100+10,240+40,75+10);
line(200+40,75+10,220+40,60+10);
line(240+40,75+10,220+40,60+10);
setfillstyle(1,YELLOW);
floodfill(220+40,65+10,WHITE);
ellipse(220+40,77+10,0,360,5,10);
setfillstyle(1,BLUE);
floodfill(220+40,77+10,WHITE);
	 }

   void seventhhead()
   {
	//seventh head
setcolor(WHITE);
line(200+80,100+20,200+80,120+20);
line(240+80,100+20,240+80,120+20);
line(200+80,100+20,240+80,100+20);
arc(220+80,120+20,180,360,20);
setfillstyle(1,BROWN);
floodfill(220+80,115+20,WHITE);
//mostach
arc(220+80,130+20,20,160,20);
arc(220+80,160+20,60,120,40);
setfillstyle(1,BLACK);
floodfill(220+80,119+20,WHITE);
arc(220+80,117+20,195,345,15);
setfillstyle(1,WHITE);
floodfill(220+80,122+20,WHITE);
//eye
arc(210+80,105+20,180,360,4);
arc(230+80,105+20,180,360,4);
line(207+80,105+20,213+80,105+20);
line(227+80,105+20,233+80,105+20);
setfillstyle(1,WHITE);
floodfill(210+80,106+20,WHITE);
floodfill(230+80,106+20,WHITE);
putpixel(210+80,106+20,BLACK);
putpixel(230+80,106+20,BLACK);
setcolor(BLACK);
line(205+80,103+20,214+80,103+20);
line(235+80,103+20,226+80,103+20);
//mukat
setcolor(WHITE);
line(200+80,100+20,200+80,75+20);
line(240+80,100+20,240+80,75+20);
line(200+80,75+20,220+80,60+20);
line(240+80,75+20,220+80,60+20);
setfillstyle(1,YELLOW);
floodfill(220+80,65+20,WHITE);
ellipse(220+80,77+20,0,360,5,10);
setfillstyle(1,BLUE);
floodfill(220+80,77+20,WHITE);
    }

    void eigthhead()
    {
	 //eigth head
setcolor(WHITE);
line(200+120,100+30,200+120,120+30);
line(240+120,100+30,240+120,120+30);
line(200+120,100+30,240+120,100+30);
arc(220+120,120+30,180,360,20);
setfillstyle(1,BROWN);
floodfill(220+120,115+30,WHITE);
//mostach
arc(220+120,130+30,20,160,20);
arc(220+120,160+30,60,120,40);
setfillstyle(1,BLACK);
floodfill(220+120,119+30,WHITE);
arc(220+120,117+30,195,345,15);
setfillstyle(1,WHITE);
floodfill(220+120,122+30,WHITE);
//eye
arc(210+120,105+30,180,360,4);
arc(230+120,105+30,180,360,4);
line(207+120,105+30,213+120,105+30);
line(227+120,105+30,233+120,105+30);
setfillstyle(1,WHITE);
floodfill(210+120,106+30,WHITE);
floodfill(230+120,106+30,WHITE);
putpixel(210+120,106+30,BLACK);
putpixel(230+120,106+30,BLACK);
setcolor(BLACK);
line(205+120,103+30,214+120,103+30);
line(235+120,103+30,226+120,103+30);
//mukat
setcolor(WHITE);
line(200+120,100+30,200+120,75+30);
line(240+120,100+30,240+120,75+30);
line(200+120,75+30,220+120,60+30);
line(240+120,75+30,220+120,60+30);
setfillstyle(1,YELLOW);
floodfill(220+120,65+30,WHITE);
ellipse(220+120,77+30,0,360,5,10);
setfillstyle(1,BLUE);
floodfill(220+120,77+30,WHITE);
     }

     void ninthhead()
     {
	  //ninth head
setcolor(WHITE);
line(200+160,100+40,200+160,120+40);
line(240+160,100+40,240+160,120+40);
line(200+160,100+40,240+160,100+40);
arc(220+160,120+40,180,360,20);
setfillstyle(1,BROWN);
floodfill(220+160,115+30,WHITE);
//mostach
arc(220+160,130+40,20,160,20);
arc(220+160,160+40,60,120,40);
setfillstyle(1,BLACK);
floodfill(220+160,119+40,WHITE);
arc(220+160,117+40,195,345,15);
setfillstyle(1,WHITE);
floodfill(220+160,122+40,WHITE);
//eye
arc(210+160,105+40,180,360,4);
arc(230+160,105+40,180,360,4);
line(207+160,105+40,213+160,105+40);
line(227+160,105+40,233+160,105+40);
setfillstyle(1,WHITE);
floodfill(210+160,106+40,WHITE);
floodfill(230+160,106+40,WHITE);
putpixel(210+160,106+40,BLACK);
putpixel(230+160,106+40,BLACK);
setcolor(BLACK);
line(205+160,103+40,214+160,103+40);
line(235+160,103+40,226+160,103+40);
//mukat
setcolor(WHITE);
line(200+160,100+40,200+160,75+40);
line(240+160,100+40,240+160,75+40);
line(200+160,75+40,220+160,60+40);
line(240+160,75+40,220+160,60+40);
setfillstyle(1,YELLOW);
floodfill(220+160,65+40,WHITE);
ellipse(220+160,77+40,0,360,5,10);
setfillstyle(1,BLUE);
floodfill(220+160,77+40,WHITE);
      }

      void tenthhead()
      {
	   //tenth head
 line(200-200,100+50,200-200,120+50);
line(240-200,100+50,240-200,120+50);
line(200-200,100+50,240-200,100+50);
arc(220-200,120+50,180,360,20);
setfillstyle(1,BROWN);
floodfill(220-200,115+50,WHITE);
//mostach
arc(220-200,130+50,20,160,20);
arc(220-200,160+50,60,120,40);
setfillstyle(1,BLACK);
floodfill(220-200,119+50,WHITE);
arc(220-200,117+50,195,345,15);
setfillstyle(1,WHITE);
floodfill(220-200,122+50,WHITE);
//eyes
arc(210-200,105+50,180,360,4);
arc(230-200,105+50,180,360,4);
line(207-200,105+50,213-200,105+50);
line(227-200,105+50,233-200,105+50);
setfillstyle(1,WHITE);
floodfill(210-200,106+50,WHITE);
floodfill(230-200,106+50,WHITE);
putpixel(210-200,106+50,BLACK);
putpixel(230-200,106+50,BLACK);
setcolor(BLACK);
line(205-200,103+50,214-200,103+50);
line(235-200,103+50,226-200,103+50);
//mukat
 setcolor(WHITE);
 line(200-200,100+50,200-200,75+50);
line(240-200,100+50,240-200,75+50);
line(200-200,75+50,220-200,60+50);
line(240-200,75+50,220-200,60+50);
setfillstyle(1,YELLOW);
floodfill(220-200,65+50,WHITE);
ellipse(220-200,77+50,0,360,5,10);
setfillstyle(1,BLUE);
floodfill(220-200,77+50,WHITE);
       }
void ram()
{
//arrow
setlinestyle(1,0,3);
arc(520,350,40,210,50);
setlinestyle(0,0,1);
//hand
arc(491,311,10,240,10);
//arm
line(485,321,501,310);
line(487,318,502,345);
line(500,311,520,335);
line(502,345,525,370);
line(520,335,538,355);
//shoulder line
line(538,355,555,355);
//neck
ellipse(555,347,280,90,3,7);
ellipse(575,347,90,280,3,7);
//face
line(555,340,550,337);
line(550,337,555,330);
line(555,330,558,332);
line(555,330,556,325);
line(556,325,553,322);
line(553,322,560,318);
line(560,318,563,313);
arc(580,319,290,160,17);
line(563,313,584,334);
line(584,334,575,340);
line(567,322,563,317);
line(567,322,561,322);
circle(563,320,1);


line(575,355,590,355);
//waist
line( 525,370,535,430);
line(595,382,580,430);
line(535,430,580,430);
line(535,430,535,445);
line(580,430,580,445);
line(535,445,580,445);
setfillstyle(1,9);
floodfill(536,444,WHITE);
line(535,445,525,490);
line(580,445,590,493);

//arrow
line(590,355,610,370);
line(610,370,580,365);
arc(610,380,260,90,10);
line(610,390,580,375);
//handlines
line(580,375,565,373);
line(580,365,570,360);
arc(567,367,80,240,7);
line(570,360,550,310);
line(565,373,475,370);

}

int main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C:/TC/BGI");
for(i=0;i<300;i=i+10)
{
cleardevice();
body();
secondhead();
thirdhead();
fourthhead();
fifthhead();
sixthhead();
seventhhead();
eigthhead();
ninthhead();
tenthhead();
ram();
line(563-i,363-i,470-i,300-i);
line(470-i,300-i,475-i,307-i);
line(470-i,300-i,479-i,302-i);
delay(100);

}
getch();
closegraph();
return 0;
}
