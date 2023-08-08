
#include<iostream>
#include<math.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gd=DETECT, gm;
    int choice;
 initgraph(&gm,&gm," ");
    initwindow(900,700);
    printf("\n 1.House\n 2.Flag\n 3.Ship\n 4.village\n 5.Emoji");

    printf("\nEnter your choice 1/2/3/4/5:");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:

        setcolor(RED);
        rectangle(100,100,300,200);
        setfillstyle(1,BLUE);
        floodfill(101,195,RED);


        line(70,50,100,100);
        line(250,50,300,100);
        line(70,50,250,50);
        line(70,50,30,100);
        line(75,60,40,100);
        line(30,100,40,100);
        line(40,100,40,200);
        line(40,200,300,200);
        line(35,200,40,200);
        line(35,200,30,210);
        line(100,200,100,210);
        line(300,200,310,200);
        line(310,200,315,210);
        line(30,210,315,210);
        setcolor(RED);
        rectangle(170,130,230,200);
        setfillstyle(1,WHITE);
        floodfill(171,195,RED);
        setcolor(RED);
        rectangle(55,140,85,160);
        setfillstyle(1,WHITE);
        floodfill(56,155,RED);

        break;

    case 2:

        setcolor(WHITE);
        rectangle(80,40,100,300);
        setfillstyle(4,WHITE);
        floodfill(81,41,WHITE);

        setcolor(GREEN);
        rectangle(100,40,300,140);
        setfillstyle(1,GREEN);
        floodfill(101,101,GREEN);

        setcolor(RED);
        circle(200,90,40);
        setfillstyle(1,RED);
        floodfill(200,90,RED);
        break;
    case 3:
        setcolor(BLUE);
   rectangle(50,300,600,350);
   setfillstyle(1,BLUE);
   floodfill(52,345,BLUE);

  setcolor(RED);
   line(100,210,170,300);
   line(480,300,550,210);
   line(100,210,550,210);
setfillstyle(2,RED);



setcolor(RED);
   rectangle(170,150,480,210);
   setfillstyle(1,RED);
   floodfill(171,200,RED);
setcolor(WHITE);
   rectangle(220,100,430,150);
   setfillstyle(1,WHITE);
   floodfill(221,130,WHITE);
setcolor(RED);
   rectangle(250,70,400,100);
   setfillstyle(1,RED);
    floodfill(251,90,RED);

setcolor(GREEN);
   rectangle(270,30,285,70);
   setfillstyle(1,GREEN);
   floodfill(271,50,GREEN);
setcolor(GREEN);
   rectangle(250,17,285,30);
    setfillstyle(1,GREEN);
   floodfill(271,20,GREEN);
   setcolor(WHITE);
   line(220,10,248,20);
   line(220,30,248,25);
   line(210,22,242,22);
   setfillstyle(1,WHITE);

        break;
    case 4:

    //river
    setcolor(BLUE);
    rectangle(0,510,800,650);
    setfillstyle(1,BLUE);
    floodfill(50,520,BLUE);

    setcolor(BLACK);//boat1
    line(360,600,420,600);
    line(360,600,340,580);
    line(420,600,440,580);
    line(340,580,440,580);
    setfillstyle(1,BLACK);
    floodfill(350,585,BLACK);

    setcolor(RED);
    rectangle(360,560,420,580);
    setfillstyle(1,RED);
    floodfill(370,570,RED);


    setcolor(BLACK);//boat2
    line(500,580,560,580);
    line(480,560,500,580);
    line(560,580,580,560);
    line(480,560,580,560);
    setfillstyle(1,BLACK);
    floodfill(520,570,BLACK);


    setcolor(RED);
    rectangle(500,560,560,540);
    setfillstyle(1,RED);
    floodfill(520,550,RED);


    setcolor(YELLOW);//part 3
    rectangle(0,150,800,360);
    setfillstyle(1,LIGHTCYAN);
    floodfill(120,320,YELLOW);


    setcolor(RED);//mount
    line(540,240,450,358);
    line(540,240,600,358);
    line(450,358,600,358);
    setfillstyle(1,RED);
    floodfill(540,340,RED);

    setcolor(YELLOW);//sun
    circle(720,210,30);
    setfillstyle(1,YELLOW);
    floodfill(730,220,YELLOW);

    line(720,170,720,155);
    line(720,250,720,270);
    line(690,210,670,210);
    line(750,210,770,210);

    setcolor(BROWN);//Birds
    ellipse(150,210,0,90,20,40);
    ellipse(190,210,90,180,20,40);

    ellipse(240,270,0,90,20,40);
    ellipse(280,270,90,180,20,40);

    ellipse(190,270,0,90,20,40);
    ellipse(230,270,90,180,20,40);

    ellipse(120,240,0,90,20,40);
    ellipse(160,240,90,180,20,40);

    ellipse(600,270,0,90,20,40);
    ellipse(640,270,90,180,20,40);

    ellipse(600,230,0,90,10,20);
    ellipse(620,230,90,180,10,20);

    ellipse(550,250,0,90,10,20);
    ellipse(570,250,90,180,10,20);

    ellipse(90,230,0,90,10,20);
    ellipse(110,230,90,180,10,20);

    setcolor(WHITE);//cloud
    ellipse(360,210,0,360,25,25);
    setfillstyle(1,WHITE);
    floodfill(350,220,WHITE);
    ellipse(335,230,0,360,30,20);
    setfillstyle(1,WHITE);
    floodfill(340,240,WHITE);


    setcolor(WHITE);//cloud
    ellipse(400,210,0,360,25,25);
    setfillstyle(1,WHITE);
    floodfill(410,220,WHITE);
    ellipse(375,230,0,360,30,20);
    setfillstyle(1,WHITE);
    floodfill(380,240,WHITE);


    setcolor(RED);
    line(660,270,570,358);
    line(720,300,660,270);
    line(720,358,720,300);
    line(720,358,570,358);
    setfillstyle(1,RED);
    floodfill(670,340,RED);

    setcolor(RED);
    line(720,330,780,280);
    line(780,280,798,280);
    line(798,280,798,358);
    line(798,358,720,358);
    line(720,330,720,358);
    setfillstyle(1,RED);
    floodfill(750,340,RED);


    setcolor(LIGHTGREEN);// part 1
    rectangle(0,360,800,510);
    setfillstyle(1,LIGHTGREEN);
    floodfill(520,500,LIGHTGREEN);

    setcolor(RED);//Tree
    rectangle(90,400,100,450);
    setfillstyle(1,RED);
    floodfill(92,420,RED);


    setcolor(GREEN);//1
    line(80,400,110,400);
    line(80,400,95,380);
    line(110,400,95,380);
    setfillstyle(1,GREEN);
    floodfill(95,390,GREEN);

    setcolor(GREEN);
    line(95,360,80,380);
    line(80,380,110,380);
    line(110,380,95,360);
    setfillstyle(1,GREEN);
    floodfill(100,370,GREEN);

    setcolor(GREEN);//tree2
    line(150,380,180,380);
    line(150,380,165,350);
    line(165,350,180,380);
    setfillstyle(1,GREEN);
    floodfill(165,355,GREEN);


    setcolor(RED);
    rectangle(160,380,170,450);
    setfillstyle(1,RED);
    floodfill(165,395,RED);


    setcolor(GREEN);//Tree3
    line(600,350,580,370);
    line(600,350,620,370);
    line(580,370,620,370);
    setfillstyle(1,GREEN);
    floodfill(605,360,GREEN);

    setcolor(RED);
    rectangle(595,370,605,430);
    setfillstyle(4,RED);
    floodfill(602,390,RED);
    setcolor(RED);
rectangle(660,400,670,470);
setfillstyle(1,RED);
floodfill(661,450,RED);
setcolor(GREEN);
line(630,430,660,400);
line(670,400,700,430);
line(630,380,665,400);
line(667,400,700,380);
line(665,370,665,400);
line(625,410,660,400);
line(670,400,710,410);
line(645,370,665,400);
line(667,400,680,370);
setfillstyle(1,GREEN);

    setcolor(BLACK);
    line(300,370,270,410);
    line(300,370,330,410);
    line(270,410,330,410);
    setfillstyle(2,BLACK);
    floodfill(300,400,BLACK);

    setcolor(LIGHTRED);
    rectangle(280,410,320,450);
    setfillstyle(1,LIGHTRED);
    floodfill(300,420,LIGHTRED);


    setcolor(WHITE);
    rectangle(290,430,310,450);
    setfillstyle(1,WHITE);
    floodfill(300,440,WHITE);

    setcolor(BLACK);
    line(480,380,420,420);
    line(480,380,540,420);
    line(420,420,540,420);
    setfillstyle(2,BLACK);
    floodfill(490,390,BLACK);

    setcolor(LIGHTMAGENTA);
    rectangle(430,420,530,490);
    setfillstyle(1,LIGHTMAGENTA);
    floodfill(450,430,LIGHTMAGENTA);


    setcolor(WHITE);
    rectangle(470,445,495,490);
    setfillstyle(1,WHITE);
    floodfill(480,450,WHITE);


    setcolor(5);
    outtextxy(300,670,"VILLAGE");
        break;
    case 5:
         setcolor(BLUE);
    circle(400,350,150);
    setfillstyle(1,YELLOW);
    floodfill(410,360,BLUE);

    setcolor(RED);
    circle(350,300,30);
    setfillstyle(1,WHITE);
    floodfill(365,312,RED);


    setcolor(RED);
    circle(450,300,30);
    setfillstyle(1,WHITE);
    floodfill(460,310,RED);

     setcolor(RED);
    circle(450,300,15);
    setfillstyle(1,BLACK);
    floodfill(455,305,RED);

    setcolor(RED);
    circle(350,300,15);
    setfillstyle(1,BLACK);
    floodfill(355,305,RED);

setcolor(RED);
    rectangle(390,340,410,370);
    setfillstyle(1,BLACK);
    floodfill(395,350,RED);


    setcolor(RED);
    arc(400,350,190,350,80);
    setfillstyle(1,BLACK);
    floodfill(402,347,RED);

        break;


    }


    getch();
    closegraph();
    return 0;
}
