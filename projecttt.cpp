 #include<graphics.h>
#include<conio.h>
#include<dos.h>

int main() {
    initwindow(900,600);
    int page = 0;
    for(int x=0;x<300;x++){
    setactivepage(page);       // draw on hidden page
    setvisualpage(1 - page);
    cleardevice();
	// Background Sky
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    rectangle(0, 0, 1100, 600);
    floodfill(10, 10,WHITE);
    //ground
    setcolor(GREEN);
    rectangle(0,450,900,600);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(10,505,GREEN);
    //rainbow
	setcolor(RED);
    arc(850, 380, 0, 180, 180);
    arc(850, 380, 0, 180, 155);
    line(670, 380, 695, 380);   // left close
    line(1005, 380, 1029, 380); // right close
    setfillstyle(SOLID_FILL,RED);
    floodfill(850,220,RED);
    setcolor(YELLOW);
    arc(850, 380, 0, 180, 155);
    arc(850, 380, 0, 180, 130);
    line(695, 380, 720, 380);
    line(980, 380, 1005, 380);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(850,245,YELLOW);
    setcolor(GREEN);
    arc(850, 380, 0, 180, 130);
    arc(850, 380, 0, 180, 105);
    line(720, 380, 745, 380);
    line(955, 380, 980, 380);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(850,255,GREEN);
    // house
    setcolor(BROWN);
    rectangle(600, 400, 800, 500);
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(650, 460, BROWN);

    // Roof
    setcolor(BROWN);
    rectangle(740,340,760,370);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(745,345,BROWN);
    setcolor(RED);
    rectangle(737,335,763,345);
    setfillstyle(SOLID_FILL,RED);
    floodfill(740,340,RED);
    setcolor(RED);
    line(590, 400, 700, 320);
    line(700, 320, 810, 400);
    line(590, 400, 810, 400);
    setfillstyle(SOLID_FILL, RED);
    floodfill(700, 350, RED);
    // Door
    setcolor(RED);
    rectangle(680,460,720,500);
    setfillstyle(SOLID_FILL,RED);
    floodfill(700,475,RED); 
    setcolor(BROWN);
    circle(710,480,5);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(710,482,BROWN);
    //ROBOTTT
    // HEAD
    setcolor(BLUE);
    rectangle(150+x,150,300+x,250);   
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(160+x,160,BLUE);
    //eyes
    setcolor(BLUE);
    circle(200+x,180,15);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(202+x,183,BLUE);
    setcolor(BLUE);
    circle(250+x,180,15);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(252+x,183,BLUE);
    //inner eyes
    setcolor(WHITE);
    circle(205+x,185,5);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(202+x,182,WHITE);
    setcolor(WHITE);
    circle(245+x,185,5);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(246+x,182,WHITE);
    //mouth
    setcolor(BLUE);
    rectangle(205+x,210,245+x,220);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(210+x,213,BLUE);
    //teeth
    setcolor(WHITE);
    line(210+x,210,213+x,223);
    line(213+x,223,216+x,210);
    line(216+x,210,210+x,210);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(212+x,215,WHITE);
    setcolor(WHITE);
    line(240+x,210,237+x,223);
    line(237+x,223,234+x,210);
    line(234+x,210,240+x,210);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(236+x,215,WHITE);
    //antenna line
    setcolor(BLUE);
    rectangle(225+x,120,225+x,150);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(225+x,125,BLUE);
    //antenna ball
    setcolor(BLUE);
    circle(225+x,110,13);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(227+x,115,BLUE);
    setcolor(BLUE);
    rectangle(300+x,185,310+x,215);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(303+x,187,BLUE);
    setcolor(BLUE);
    rectangle(150+x,185,140+x,215);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(145+x,187,BLUE);
    //neck
    setcolor(BLUE);
    rectangle(200+x,250,250+x,260);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(210+x,255,BLUE);
    setcolor(BLUE);
    rectangle(200+x,260,250+x,270);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(210+x,265,BLUE);
    setcolor(BLUE);
    rectangle(200+x,270,250+x,280);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(210+x,275,BLUE);
    //body
    setcolor(BLUE);
    rectangle(150+x,280,300+x,400);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(165+x,290,BLUE);
    //button
    setcolor(BLUE);
    circle(225+x,310,10);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(229+x,310,BLUE);
    setcolor(BLUE);
    circle(225+x,340,10);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(229+x,341,BLUE);
    setcolor(BLUE);
    circle(225+x,370,10);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(229+x,371,BLUE);
    //block near wheel
    setcolor(BLUE);
    line(185+x,400,265+x,400);
    line(185+x,400,200+x,420);
    line(265+x,400,250+x,420);
    line(200+x,420,250+x,420);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(200+x,410,BLUE);
    //
    setcolor(BLUE);
    rectangle(215+x,420,235+x,425);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(220+x,422,BLUE);
    //wheel
    setcolor(BLUE);
    circle(225+x,465,40);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(245+x,470,BLUE);
    setcolor(WHITE);
    circle(225+x,465,20);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(230+x,470,WHITE);
    //hands
    setcolor(BLUE);
	line(150+x,290,75+x,350);
    line(75+x,350,85+x,360);
    line(150+x,310,85+x,360);
    line(150+x,290,150+x,310);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(120+x,330,BLUE);
    setcolor(LIGHTBLUE);
    circle(76+x,355,15);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(80+x,360,LIGHTBLUE);
    
    setcolor(BLUE);
    line(300+x,290,300+x,310);
    line(300+x,290,375+x,350);
    line(375+x,350,365+x,360);
    line(300+x,310,365+x,360);
    line(300+x,310,300+x,290);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(335+x,330,BLUE);
    setcolor(LIGHTBLUE);
    circle(376+x,355,15);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(380+x,355,LIGHTBLUE);
    //baloons
    setcolor(BLACK);
    line(75+x,135,75+x,350);
    setcolor(MAGENTA);
    ellipse(75+x,120,0,360,30,40);
    setfillstyle(SOLID_FILL,MAGENTA);
    floodfill(80+x,129,MAGENTA);
    setcolor(BLACK);
    line(40+x,145,75+x,350);
    setcolor(YELLOW);
    ellipse(40+x,150,0,360,30,40);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(45+x,159,YELLOW);
    setcolor(BLACK);
    line(95+x,165,75+x,350);
    setcolor(RED);
    ellipse(95+x,165,0,360,30,40);
    setfillstyle(SOLID_FILL,RED);
    floodfill(100+x,170,RED);
    
    //scenery//sun
    setcolor(YELLOW);
    circle(780,80,40);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(800,89,YELLOW);
    setcolor(YELLOW);
    line(780,80,780,20);    // Top ray
    line(780,80,780,140);   // Bottom ray
    line(780,80,720,80);    // Left ray
    line(780,80,840,80);    // Right ray
    line(780,80,830,40);    // Top-right diagonal
    line(780,80,730,40);    // Top-left diagonal
    line(780,80,830,120);   // Bottom-right diagonal
    line(780,80,730,120);
    // Clouds (above robot)
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    ellipse(120+x, 55, 0, 360, 25, 15);
    floodfill(125+x, 60, LIGHTGRAY);
    ellipse(140+x, 50, 0, 360, 30, 20);
    floodfill(145+x,55, LIGHTGRAY);
    ellipse(165+x, 55, 0, 360, 25, 15);
    floodfill(170+x, 60, LIGHTGRAY);
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    ellipse(300+x, 75, 0, 360, 35, 20);
    floodfill(305+x, 80, LIGHTGRAY);
    ellipse(335+x, 70, 0, 360, 40, 25);
    floodfill(337+x, 75, LIGHTGRAY);
    ellipse(370+x, 75, 0, 360, 35, 20);
    floodfill(375+x, 80, LIGHTGRAY);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    ellipse(450+x, 90, 0, 360, 25, 15);
    floodfill(455+x, 95, LIGHTGRAY);
    ellipse(470+x, 85, 0, 360, 30, 18);
    floodfill(475+x, 89, LIGHTGRAY);
    ellipse(495+x, 90, 0, 360, 25, 15);
    floodfill(500+x, 95, LIGHTGRAY);
    
   //alien
   // Alien head
    setcolor(LIGHTGREEN);
    ellipse(480+x, 300, 0, 360, 50, 60);
    setfillstyle(SOLID_FILL, LIGHTGREEN);
    floodfill(485+x,310, LIGHTGREEN);
    // Eyes
    setcolor(BLACK);
    arc(455+x,300,170,310,20);
    line(435+x,295,468+x,314);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(440+x,300,BLACK);
    setcolor(BLACK);
    arc(505+x,300,230,20,20);
    line(523+x,293,491+x,314);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(515+x,300,BLACK);
    //smile
    setcolor(WHITE);
    arc(480+x,330,245,345,20);
    arc(480+x,330,245,345,19);
    //legs
    setcolor(LIGHTGREEN);
    rectangle(450+x,414,470+x,480);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    floodfill(460+x,430,LIGHTGREEN);
    setcolor(MAGENTA);
    circle(460+x,490,15);
    setfillstyle(SOLID_FILL,MAGENTA);
    floodfill(465+x,493,MAGENTA);
    setcolor(LIGHTGREEN);
    rectangle(490+x,414,510+x,480);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    floodfill(500+x,430,LIGHTGREEN);
    setcolor(MAGENTA);
    circle(500+x,490,15);
    setfillstyle(SOLID_FILL,MAGENTA);
    floodfill(505+x,493,MAGENTA);
    //hands
    setcolor(LIGHTGREEN);
    line(448+x,390,448+x,400);
    line(448+x,390,420+x,370);
    line(448+x,400,420+x,380);
    line(420+x,370,420+x,380);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    floodfill(430+x,380,LIGHTGREEN);
    setcolor(MAGENTA);
    circle(415+x,370,10);
    setfillstyle(SOLID_FILL,MAGENTA);
    floodfill(415+x,375,MAGENTA);
    //
    setcolor(LIGHTGREEN);
    line(511+x,390,511+x,400);
    line(511+x,390,534+x,370);
    line(511+x,400,534+x,380);
    line(534+x,370,534+x,380);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    floodfill(530+x,380,LIGHTGREEN);
    setcolor(MAGENTA);
    circle(534+x,372,10);
    setfillstyle(SOLID_FILL,MAGENTA);
    floodfill(534+x,375,MAGENTA);
    //antenna
    line(450+x,250,430+x,230);
    line(510+x,250,530+x,230);
    setcolor(MAGENTA);
    circle(435+x,235,10);
    setfillstyle(SOLID_FILL,MAGENTA);
    floodfill(437+x,240,MAGENTA);
    circle(525+x,235,10);
    setfillstyle(SOLID_FILL,MAGENTA);
    floodfill(530+x,240,MAGENTA);
    //body
    setcolor(MAGENTA);
    arc(480+x,400,340,200,40);
    line(443+x,414,517+x,413);
    setfillstyle(SOLID_FILL,MAGENTA);
    floodfill(480+x,409,MAGENTA);
    
    
    if (x % 50 == 0) {
            setcolor(BLACK);
            line(400, 0, 420, 100);
            line(420, 100, 410, 200);
            line(410, 200, 430, 300);
            delay(50);
        }
    page = 1 - page;    
    delay(10);
}
 // ?? DARK MODE TRANSITION
for (int night = 0; night < 300; night++) {
	setactivepage(page);       // draw on hidden page
    setvisualpage(1 - page);
    cleardevice();
    
    // Background Night Sky
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    rectangle(0, 0, 900, 450);
    floodfill(10, 10, BLACK);

    // Ground (slightly lighter tone)
    setcolor(LIGHTGRAY);
    rectangle(0, 450, 900, 600);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    floodfill(10, 505, LIGHTGRAY);

    // Moon (was Sun)
    setcolor(RED);
    circle(780, 80, 40);
    setfillstyle(SOLID_FILL, RED);
    floodfill(780, 85, RED);

    // Clouds covering the moon
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    ellipse(750, 80, 0, 360, 50, 25);
    floodfill(752, 82, LIGHTGRAY);
    ellipse(800, 70, 0, 360, 60, 30);
    floodfill(805, 75, LIGHTGRAY);
    ellipse(850, 85, 0, 360, 55, 25);
    floodfill(855, 89, LIGHTGRAY);

    // House (gray tones)
    setcolor(DARKGRAY);
    rectangle(600, 400, 800, 500);
    setfillstyle(SOLID_FILL, DARKGRAY);
    floodfill(650, 460, DARKGRAY);

    // Roof (light tone)
    setcolor(DARKGRAY);
    rectangle(740,340,760,370);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(745,345,DARKGRAY);
    setcolor(LIGHTGRAY);
    rectangle(737,335,763,345);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    floodfill(740,340,LIGHTGRAY);
    setcolor(LIGHTGRAY);
    line(590, 400, 700, 320);
    line(700, 320, 810, 400);
    line(590, 400, 810, 400);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    floodfill(700, 350, LIGHTGRAY);

    // Door
    setcolor(RED);
    rectangle(680, 460, 720, 500);
    setfillstyle(SOLID_FILL, RED);
    floodfill(700, 475, RED);
    setcolor(LIGHTGRAY);
    circle(710,480,5);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    floodfill(710,482,LIGHTGRAY);
    
    // Robot body (dark gray tone)
    setcolor(DARKGRAY);
    rectangle(150+night, 150, 300+night, 250);
    setfillstyle(SOLID_FILL, DARKGRAY);
    floodfill(160+night, 160, DARKGRAY);

    // Eyes (light glow)
    setcolor(RED);
    circle(200+night,180,15);
    setfillstyle(SOLID_FILL,RED);
    floodfill(202+night,183,RED);
    setcolor(RED);
    circle(250+night,180,15);
    setfillstyle(SOLID_FILL,RED);
    floodfill(252+night,183,RED);
    //inner eyes
    setcolor(BLACK);
    circle(205+night,185,5);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(202+night,182,BLACK);
    setcolor(BLACK);
    circle(245+night,185,5);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(246+night,182,BLACK);
    //mouth
    setcolor(RED);
    rectangle(205+night,210,245+night,220);
    setfillstyle(SOLID_FILL,RED);
    floodfill(210+night,213,RED);
    //teeth
    setcolor(WHITE);
    line(210+night,210,213+night,223);
    line(213+night,223,216+night,210);
    line(216+night,210,210+night,210);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(212+night,215,WHITE);
    setcolor(WHITE);
    line(240+night,210,237+night,223);
    line(237+night,223,234+night,210);
    line(234+night,210,240+night,210);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(236+night,215,WHITE);
    //antenna line
    setcolor(WHITE);
    rectangle(225+night,120,225+night,150);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(225+night,125,WHITE);
    //antenna ball
    setcolor(RED);
    circle(225+night,110,13);
    setfillstyle(SOLID_FILL,RED);
    floodfill(227+night,115,RED);
    setcolor(RED);
    rectangle(300+night,185,310+night,215);
    setfillstyle(SOLID_FILL,RED);
    floodfill(303+night,187,RED);
    setcolor(RED);
    rectangle(150+night,185,140+night,215);
    setfillstyle(SOLID_FILL,RED);
    floodfill(145+night,187,RED);
    //neck
    setcolor(DARKGRAY);
    rectangle(200+night,250,250+night,260);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(210+night,255,DARKGRAY);
    setcolor(LIGHTGRAY);
    rectangle(200+night,260,250+night,270);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    floodfill(210+night,265,LIGHTGRAY);
    setcolor(DARKGRAY);
    rectangle(200+night,270,250+night,280);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(210+night,275,DARKGRAY);
    //body
    setcolor(DARKGRAY);
    rectangle(150+night,280,300+night,400);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(165+night,290,DARKGRAY);
    //button
    setcolor(RED);
    circle(225+night,310,10);
    setfillstyle(SOLID_FILL,RED);
    floodfill(229+night,310,RED);
    setcolor(RED);
    circle(225+night,340,10);
    setfillstyle(SOLID_FILL,RED);
    floodfill(229+night,341,RED);
    setcolor(RED);
    circle(225+night,370,10);
    setfillstyle(SOLID_FILL,RED);
    floodfill(229+night,371,RED);
    //block near wheel
    setcolor(LIGHTGRAY);
    line(185+night,400,265+night,400);
    line(185+night,400,200+night,420);
    line(265+night,400,250+night,420);
    line(200+night,420,250+night,420);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    floodfill(200+night,410,LIGHTGRAY);
    //
    setcolor(DARKGRAY);
    rectangle(215+night,420,235+night,425);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(220+night,422,DARKGRAY);
    //wheel
    setcolor(DARKGRAY);
    circle(225+night,465,40);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(245+night,470,DARKGRAY);
    setcolor(WHITE);
    circle(225+night,465,20);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(230+night,470,WHITE);
    //hands
    setcolor(LIGHTGRAY);
	line(150+night,290,75+night,350);
    line(75+night,350,85+night,360);
    line(150+night,310,85+night,360);
    line(150+night,290,150+night,310);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    floodfill(120+night,330,LIGHTGRAY);
    setcolor(RED);
    circle(76+night,355,15);
    setfillstyle(SOLID_FILL,RED);
    floodfill(80+night,360,RED);
    
    setcolor(LIGHTGRAY);
    line(300+night,290,300+night,310);
    line(300+night,290,375+night,350);
    line(375+night,350,365+night,360);
    line(300+night,310,365+night,360);
    line(300+night,310,300+night,290);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    floodfill(335+night,330,LIGHTGRAY);
    setcolor(RED);
    circle(376+night,355,15);
    setfillstyle(SOLID_FILL,RED);
    floodfill(380+night,355,RED);
    //baloons
    setcolor(WHITE);
    line(75+night,135,75+night,350);
    setcolor(LIGHTGRAY);
    ellipse(75+night,120,0,360,30,40);
    setfillstyle(SOLID_FILL,RED);
    floodfill(80+night,129,LIGHTGRAY);
    setcolor(WHITE);
    line(40+night,145,75+night,350);
    setcolor(LIGHTGRAY);
    ellipse(40+night,150,0,360,30,40);
    setfillstyle(SOLID_FILL,RED);
    floodfill(45+night,159,LIGHTGRAY);
    setcolor(WHITE);
    line(95+night,165,75+night,350);
    setcolor(LIGHTGRAY);
    ellipse(95+night,165,0,360,30,40);
    setfillstyle(SOLID_FILL,RED);
    floodfill(100+night,170,LIGHTGRAY);
    // Alien (dark gray tone)
    setcolor(DARKGRAY);
    ellipse(480+night, 300, 0, 360, 50, 60);
    setfillstyle(SOLID_FILL, DARKGRAY);
    floodfill(485+night,310,DARKGRAY);
    // Eyes
    setcolor(RED);
    arc(455+night,300,170,310,20);
    line(435+night,295,468+night,314);
    setfillstyle(SOLID_FILL,RED);
    floodfill(440+night,300,RED);
    setcolor(RED);
    arc(505+night,300,230,20,20);
    line(523+night,293,491+night,314);
    setfillstyle(SOLID_FILL,RED);
    floodfill(515+night,300,RED);
    //smile
    setcolor(BLACK);
    arc(480+night,330,245,345,20);
    arc(480+night,330,245,345,19);
    //legs
    setcolor(DARKGRAY);
    rectangle(450+night,414,470+night,480);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(455+night,430,DARKGRAY);
    setcolor(RED);
    circle(460+night,490,15);
    setfillstyle(SOLID_FILL,RED);
    floodfill(465+night,493,RED);
    setcolor(DARKGRAY);
    rectangle(490+night,414,510+night,480);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(495+night,430,DARKGRAY);
    setcolor(RED);
    circle(500+night,490,15);
    setfillstyle(SOLID_FILL,RED);
    floodfill(505+night,493,RED);
    //hands
    setcolor(DARKGRAY);
    line(448+night,390,448+night,400);
    line(448+night,390,420+night,370);
    line(448+night,400,420+night,380);
    line(420+night,370,420+night,380);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(430+night,380,DARKGRAY);
    setcolor(RED);
    circle(415+night,370,10);
    setfillstyle(SOLID_FILL,RED);
    floodfill(415+night,375,RED);
    setcolor(DARKGRAY);
    line(511+night,390,511+night,400);
    line(511+night,390,534+night,370);
    line(511+night,400,534+night,380);
    line(534+night,370,534+night,380);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(530+night,380,DARKGRAY);
    setcolor(RED);
    circle(534+night,372,10);
    setfillstyle(SOLID_FILL,RED);
    floodfill(534+night,375,RED);
    //antenna
    line(450+night,250,430+night,230);
    line(510+night,250,530+night,230);
    setcolor(RED);
    circle(435+night,235,10);
    setfillstyle(SOLID_FILL,RED);
    floodfill(437+night,240,RED);
    circle(525+night,235,10);
    setfillstyle(SOLID_FILL,RED);
    floodfill(530+night,240,RED);
    // Alien body (light gray)
    setcolor(LIGHTGRAY);
    arc(480+night,400,340,200,40);
    line(443+night,414,517+night,413);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    floodfill(480+night,409,LIGHTGRAY);

    delay(10);
    page = 1 - page;
}

    getch();
    closegraph();
}

