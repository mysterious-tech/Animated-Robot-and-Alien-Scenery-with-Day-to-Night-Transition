#include<graphics.h>
#include<conio.h>
int main(){
	initwindow(800,600);
	setbkcolor(WHITE);
	cleardevice();
	//ground
	setcolor(GREEN);
	rectangle(0,450,800,600);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(10,500,GREEN);
	//sun
	setcolor(YELLOW);
    circle(200, 60, 30);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(205,62,YELLOW);
	//house
	setcolor(BROWN);
	rectangle(500,300,700,450);
	setfillstyle(SOLID_FILL,BROWN);
	floodfill(550,350,BROWN);
	//door
	setcolor(RED);
	rectangle(540,390,570,450);
	setfillstyle(SOLID_FILL,RED);
	floodfill(550,430,RED);
	setcolor(BROWN);
	circle(565,420,5);
	setfillstyle(SOLID_FILL,BROWN);
	floodfill(567,421,BROWN);
	//window	
	setcolor(RED);
	rectangle(615,330,675,370);
	setfillstyle(SOLID_FILL,RED);
	floodfill(650,350,RED);
	setcolor(LIGHTGRAY);
	rectangle(620,335,670,365);
	setfillstyle(SOLID_FILL,LIGHTGRAY);
	floodfill(650,350,LIGHTGRAY);
	setcolor(RED);
	rectangle(643,330,647,370);
	setfillstyle(SOLID_FILL,RED);
	floodfill(644,350,RED);
	setcolor(RED);
	rectangle(620,347,670,353);
	setfillstyle(SOLID_FILL,RED);
	floodfill(630,350,RED);
	floodfill(660,350,RED);
	//roof
	setcolor(RED);
	line(550,225,495,300);
	line(495,300,705,300);
	line(705,300,650,225);
	line(650,225,550,225);
	setfillstyle(SOLID_FILL,RED);
	floodfill(630,275,RED);
   // Cloud (smaller, near house)
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    ellipse(150, 65, 0, 360, 35, 25);
    floodfill(155, 67, LIGHTGRAY);
    ellipse(180, 60, 0, 360, 40, 30);
    floodfill(185, 62, LIGHTGRAY);
    ellipse(220, 65, 0, 360, 35, 25);
    floodfill(225, 67, LIGHTGRAY);
    // === RAINBOW between clouds ===

// RED band (outermost)
setcolor(RED);
arc(600, 200, 0, 180, 110);
arc(600, 200, 0, 180, 100);
line(490, 200, 500, 200);   // left close
line(700, 200, 710, 200);   // right close
setfillstyle(SOLID_FILL, RED);
floodfill(603,95,RED);

// YELLOW band (middle)
setcolor(YELLOW);
arc(600, 200, 0, 180, 100);
arc(600, 200, 0, 180, 90);
line(500, 200, 510, 200);
line(690, 200, 700, 200);
setfillstyle(SOLID_FILL, YELLOW);
floodfill(600, 105, YELLOW);

   // GREEN band (innermost)
   setcolor(GREEN);
   arc(600, 200, 0, 180, 90);
   arc(600, 200, 0, 180, 80);
   line(510, 200, 520, 200);
   line(680, 200, 690, 200);
   setfillstyle(SOLID_FILL, GREEN);
   floodfill(600, 115, GREEN);

    //cloud
    setcolor(LIGHTGRAY);
ellipse(450, 200, 0, 360, 35, 25);
setfillstyle(SOLID_FILL, LIGHTGRAY);
floodfill(455, 203, LIGHTGRAY);
ellipse(480, 190, 0, 360, 40, 30);
setfillstyle(SOLID_FILL, LIGHTGRAY);
floodfill(485, 193, LIGHTGRAY);
ellipse(520, 200, 0, 360, 35, 25);
setfillstyle(SOLID_FILL, LIGHTGRAY);
floodfill(523, 203, LIGHTGRAY);

//
setcolor(LIGHTGRAY);
ellipse(680, 190, 0, 360, 35, 25);
setfillstyle(SOLID_FILL,LIGHTGRAY);
floodfill(683, 190, LIGHTGRAY);
ellipse(710, 185, 0, 360, 40, 30);
setfillstyle(SOLID_FILL, LIGHTGRAY);
floodfill(715, 186, LIGHTGRAY);
ellipse(740, 190, 0, 360, 35, 25);
setfillstyle(SOLID_FILL, LIGHTGRAY);
floodfill(748, 195, LIGHTGRAY);

	//robot
	// HEAD
    setcolor(BLUE);
    rectangle(150,150,300,250);   
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(160,160,BLUE);
    //eyes
    setcolor(BLUE);
    circle(200,180,15);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(202,183,BLUE);
    setcolor(BLUE);
    circle(250,180,15);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(252,183,BLUE);
    //inner eyes
    setcolor(WHITE);
    circle(205,185,5);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(202,182,WHITE);
    setcolor(WHITE);
    circle(245,185,5);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(246,182,WHITE);
    //mouth
    setcolor(BLUE);
    rectangle(205,210,245,220);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(210,213,BLUE);
    //teeth
    setcolor(WHITE);
    line(210,210,213,223);
    line(213,223,216,210);
    line(216,210,210,210);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(212,215,WHITE);
    setcolor(WHITE);
    line(240,210,237,223);
    line(237,223,234,210);
    line(234,210,240,210);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(236,215,WHITE);
    //antenna line
    setcolor(BLUE);
    rectangle(225,120,225,150);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(225,125,BLUE);
    //antenna ball
    setcolor(BLUE);
    circle(225,110,13);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(227,115,BLUE);
    setcolor(BLUE);
    rectangle(300,185,310,215);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(303,187,BLUE);
    setcolor(BLUE);
    rectangle(150,185,140,215);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(145,187,BLUE);
    //neck
    setcolor(BLUE);
    rectangle(200,250,250,260);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(210,255,BLUE);
    setcolor(BLUE);
    rectangle(200,260,250,270);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(210,265,BLUE);
    setcolor(BLUE);
    rectangle(200,270,250,280);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(210,275,BLUE);
    //body
    setcolor(BLUE);
    rectangle(150,280,300,400);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(165,290,BLUE);
    //button
    setcolor(BLUE);
    circle(225,310,10);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(229,310,BLUE);
    setcolor(BLUE);
    circle(225,340,10);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(229,341,BLUE);
    setcolor(BLUE);
    circle(225,370,10);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(229,371,BLUE);
    //block near wheel
    setcolor(BLUE);
    line(185,400,265,400);
    line(185,400,200,420);
    line(265,400,250,420);
    line(200,420,250,420);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(200,410,BLUE);
    //
    setcolor(BLUE);
    rectangle(215,420,235,425);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(220,422,BLUE);
    //shadow
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    ellipse(225,500, 0, 360, 60, 20);
    floodfill(230,505, LIGHTGRAY);
    //wheel
    setcolor(BLUE);
    circle(225,465,40);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(245,470,BLUE);
    setcolor(WHITE);
    circle(225,465,20);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(230,470,WHITE);
    //hands
    setcolor(BLUE);
	line(150,290,75,350);
    line(75,350,85,360);
    line(150,310,85,360);
    line(150,290,150,310);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(120,330,BLUE);
    setcolor(LIGHTBLUE);
    circle(76,355,15);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(80,360,LIGHTBLUE);
    setcolor(BLUE);
    line(300,290,300,310);
    line(300,290,375,350);
    line(375,350,365,360);
    line(300,310,365,360);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(340,330,BLUE);
    setcolor(LIGHTBLUE);
    circle(376,355,15);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(380,355,LIGHTBLUE);
    
    //baloons
    setcolor(BLACK);
    line(75,135,75,350);
    setcolor(MAGENTA);
    ellipse(75,120,0,360,30,40);
    setfillstyle(SOLID_FILL,MAGENTA);
    floodfill(80,129,MAGENTA);
    setcolor(BLACK);
    line(40,145,75,350);
    setcolor(YELLOW);
    ellipse(40,150,0,360,30,40);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(45,159,YELLOW);
    setcolor(BLACK);
    line(95,165,75,350);
    setcolor(RED);
    ellipse(95,165,0,360,30,40);
    setfillstyle(SOLID_FILL,RED);
    floodfill(100,170,RED);
    
	getch();
	closegraph();
}
