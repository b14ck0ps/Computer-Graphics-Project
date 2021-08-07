#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);


//yellow building
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (251,185,23);
glVertex2i(0, 145);
glVertex2i(20, 145);
glVertex2i(20, 260);
glVertex2i(0, 260);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (65,51,0);
glVertex2i(0, 260);
glVertex2i(20, 260);
glVertex2i(20, 266);
glVertex2i(0, 266);
glEnd();


glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (245,225,164);
glVertex2i(20, 145);
glVertex2i(64, 145);
glVertex2i(64, 260);
glVertex2i(20, 260);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (65,51,0);
glVertex2i(20, 260);
glVertex2i(64, 260);
glVertex2i(64, 266);
glVertex2i(20, 266);
glEnd();

//window 1
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,255,252);
glVertex2i(25, 237);
glVertex2i(33, 237);
glVertex2i(33, 250);
glVertex2i(25, 250);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (252,194,40);
glVertex2i(25, 250);
glVertex2i(33, 250);
glVertex2i(33, 253);
glVertex2i(25, 253);
glEnd();

//window 2
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,255,252);
glVertex2i(37, 237);
glVertex2i(45, 237);
glVertex2i(45, 250);
glVertex2i(37, 250);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (252,194,40);
glVertex2i(37, 250);
glVertex2i(45, 250);
glVertex2i(45, 253);
glVertex2i(37, 253);
glEnd();

//window 3
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,255,252);
glVertex2i(50, 237);
glVertex2i(58, 237);
glVertex2i(58, 250);
glVertex2i(50, 250);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (252,194,40);
glVertex2i(50, 250);
glVertex2i(58, 250);
glVertex2i(58, 253);
glVertex2i(50, 253);
glEnd();

//window 4
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,255,252);
glVertex2i(25, 215);
glVertex2i(33, 215);
glVertex2i(33, 228);
glVertex2i(25, 228);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (252,194,40);
glVertex2i(25, 228);
glVertex2i(33, 228);
glVertex2i(33, 231);
glVertex2i(25, 231);
glEnd();

//window 5

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,255,252);
glVertex2i(37, 215);
glVertex2i(45, 215);
glVertex2i(45, 228);
glVertex2i(37, 228);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (252,194,40);
glVertex2i(37, 228);
glVertex2i(45, 228);
glVertex2i(45, 231);
glVertex2i(37, 231);
glEnd();

//window 6
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,255,252);
glVertex2i(50, 215);
glVertex2i(58, 215);
glVertex2i(58, 228);
glVertex2i(50, 228);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (252,194,40);
glVertex2i(50, 228);
glVertex2i(58, 228);
glVertex2i(58, 231);
glVertex2i(50, 231);
glEnd();

//window 7
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,255,252);
glVertex2i(25, 195);
glVertex2i(33, 195);
glVertex2i(33, 208);
glVertex2i(25, 208);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (252,194,40);
glVertex2i(25, 207);
glVertex2i(33, 207);
glVertex2i(33, 210);
glVertex2i(25, 210);
glEnd();

//window 8

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,255,252);
glVertex2i(37, 195);
glVertex2i(45, 195);
glVertex2i(45, 208);
glVertex2i(37, 208);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (252,194,40);
glVertex2i(37, 207);
glVertex2i(45, 207);
glVertex2i(45, 210);
glVertex2i(37, 210);
glEnd();

//window 9

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,255,252);
glVertex2i(50, 195);
glVertex2i(58, 195);
glVertex2i(58, 208);
glVertex2i(50, 208);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (252,194,40);
glVertex2i(50, 207);
glVertex2i(58, 207);
glVertex2i(58, 210);
glVertex2i(50, 210);
glEnd();

//window 10
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,255,252);
glVertex2i(25, 175);
glVertex2i(33, 175);
glVertex2i(33, 188);
glVertex2i(25, 188);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (252,194,40);
glVertex2i(25, 188);
glVertex2i(33, 188);
glVertex2i(33, 191);
glVertex2i(25, 191);
glEnd();

//green building

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (201,78,44);
glVertex2i(90, 150);
glVertex2i(100, 150);
glVertex2i(100, 275);
glVertex2i(90, 275);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (201,78,44);
glVertex2i(85, 270);
glVertex2i(95, 270);
glVertex2i(95, 280);
glVertex2i(85, 280);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (36,71,66);
glVertex2i(100, 150);
glVertex2i(160, 150);
glVertex2i(160, 275);
glVertex2i(100, 275);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (36,71,66);
glVertex2i(90, 275);
glVertex2i(165, 275);
glVertex2i(165, 280);
glVertex2i(90, 280);
glEnd();

//window 1
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (135,173,149);
glVertex2i(104, 245);
glVertex2i(118, 245);
glVertex2i(118, 265);
glVertex2i(104, 265);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(104,255);
glVertex2i(118,255);
glVertex2i(111,245);
glVertex2i(111,265);
glEnd();

//window 2
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (135,173,149);
glVertex2i(124, 245);
glVertex2i(138, 245);
glVertex2i(138, 265);
glVertex2i(124, 265);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(124,255);
glVertex2i(138,255);
glVertex2i(131,245);
glVertex2i(131,265);
glEnd();

//window 3
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (135,173,149);
glVertex2i(142, 245);
glVertex2i(156, 245);
glVertex2i(156, 265);
glVertex2i(142, 265);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(142,255);
glVertex2i(156,255);
glVertex2i(149,245);
glVertex2i(149,265);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (107,131,125);
glVertex2i(100, 237);
glVertex2i(160, 237);
glVertex2i(160, 240);
glVertex2i(100, 240);
glEnd();


//window 4
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (135,173,149);
glVertex2i(104, 215);
glVertex2i(118, 215);
glVertex2i(118, 235);
glVertex2i(104, 235);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(104,225);
glVertex2i(118,225);
glVertex2i(111,215);
glVertex2i(111,235);
glEnd();

//window 5
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (135,173,149);
glVertex2i(124, 215);
glVertex2i(138, 215);
glVertex2i(138, 235);
glVertex2i(124, 235);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (124,135,118);
glVertex2i(124,225);
glVertex2i(138,225);
glVertex2i(131,215);
glVertex2i(131,235);
glEnd();

//window 6
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (135,173,149);
glVertex2i(142, 215);
glVertex2i(156, 215);
glVertex2i(156, 235);
glVertex2i(142, 235);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(142,225);
glVertex2i(156,225);
glVertex2i(149,215);
glVertex2i(149,235);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (107,131,125);
glVertex2i(100, 207);
glVertex2i(160, 207);
glVertex2i(160, 210);
glVertex2i(100, 210);
glEnd();

//window 7
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (135,173,149);
glVertex2i(104, 185);
glVertex2i(118, 185);
glVertex2i(118, 205);
glVertex2i(104, 205);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(104,195);
glVertex2i(118,195);
glVertex2i(111,185);
glVertex2i(111,205);
glEnd();

//window 8
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (135,173,149);
glVertex2i(124, 185);
glVertex2i(138, 185);
glVertex2i(138, 205);
glVertex2i(124, 205);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(124,195);
glVertex2i(138,195);
glVertex2i(131,185);
glVertex2i(131,205);
glEnd();

//window 9
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (135,173,149);
glVertex2i(142, 185);
glVertex2i(156, 185);
glVertex2i(156, 205);
glVertex2i(142, 205);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (107,131,125);
glVertex2i(100, 177);
glVertex2i(160, 177);
glVertex2i(160, 180);
glVertex2i(100, 180);
glEnd();

//red building
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (146,44,27);
glVertex2i(228, 145);
glVertex2i(237, 145);
glVertex2i(237, 310);
glVertex2i(228, 310);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (146,44,27);
glVertex2i(227, 305);
glVertex2i(232, 305);
glVertex2i(232, 315);
glVertex2i(227, 315);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (209,70,42);
glVertex2i(237, 145);
glVertex2i(300, 145);
glVertex2i(300, 310);
glVertex2i(237, 310);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (209,70,42);
glVertex2i(232, 310);
glVertex2i(305, 310);
glVertex2i(305, 315);
glVertex2i(232, 315);
glEnd();

//window 1

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (131,180,160);
glVertex2i(250, 270);
glVertex2i(262, 270);
glVertex2i(262, 295);
glVertex2i(250, 295);
glEnd();


glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(250,285);
glVertex2i(262,285);
glVertex2i(256,270);
glVertex2i(256,295);
glEnd();
//window 2

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (131,180,160);
glVertex2i(267, 270);
glVertex2i(279, 270);
glVertex2i(279, 295);
glVertex2i(267, 295);
glEnd();


glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(267,285);
glVertex2i(279,285);
glVertex2i(273,270);
glVertex2i(273,295);
glEnd();

//window 3

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (131,180,160);
glVertex2i(284, 270);
glVertex2i(296, 270);
glVertex2i(296, 295);
glVertex2i(284, 295);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(284,285);
glVertex2i(296,285);
glVertex2i(290,270);
glVertex2i(290,295);
glEnd();


//window 4

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (131,180,160);
glVertex2i(250, 235);
glVertex2i(262, 235);
glVertex2i(262, 260);
glVertex2i(250, 260);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(250,250);
glVertex2i(262,250);
glVertex2i(256,235);
glVertex2i(256,260);
glEnd();

//window 5

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (131,180,160);
glVertex2i(267, 235);
glVertex2i(279, 235);
glVertex2i(279, 260);
glVertex2i(267, 260);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(267,250);
glVertex2i(279,250);
glVertex2i(273,235);
glVertex2i(273,260);
glEnd();

//window 6

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (131,180,160);
glVertex2i(284, 235);
glVertex2i(296, 235);
glVertex2i(296, 260);
glVertex2i(284, 260);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(284,250);
glVertex2i(296,250);
glVertex2i(290,235);
glVertex2i(290,260);
glEnd();

//window 7

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (131,180,160);
glVertex2i(250, 195);
glVertex2i(262, 195);
glVertex2i(262, 220);
glVertex2i(250, 220);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(250,210);
glVertex2i(262,210);
glVertex2i(256,195);
glVertex2i(256,220);
glEnd();

//window 8

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (131,180,160);
glVertex2i(267, 195);
glVertex2i(279, 195);
glVertex2i(279, 220);
glVertex2i(267, 220);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(267,210);
glVertex2i(279,210);
glVertex2i(273,195);
glVertex2i(273,220);
glEnd();

//window 9

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (131,180,160);
glVertex2i(284, 195);
glVertex2i(296, 195);
glVertex2i(296, 220);
glVertex2i(284, 220);
glEnd();


glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(284,210);
glVertex2i(296,210);
glVertex2i(290,195);
glVertex2i(290,220);
glEnd();


//yellow building
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (235,197,73);
glVertex2i(130, 145);
glVertex2i(180, 145);
glVertex2i(180, 210);
glVertex2i(130, 210);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (222,147,51);
glVertex2i(127, 210);
glVertex2i(180, 210);
glVertex2i(180, 218);
glVertex2i(127, 218);
glEnd();


glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (249,243,222);
glVertex2i(180, 145);
glVertex2i(230, 145);
glVertex2i(230, 210);
glVertex2i(180, 210);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (243,165,75);
glVertex2i(180, 210);
glVertex2i(232, 210);
glVertex2i(232, 218);
glVertex2i(180, 218);
glEnd();


//window 1
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,246,221);
glVertex2i(132, 195);
glVertex2i(137, 195);
glVertex2i(137, 203);
glVertex2i(132, 203);
glEnd();

//window 2
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,246,221);
glVertex2i(139, 195);
glVertex2i(144, 195);
glVertex2i(144, 203);
glVertex2i(139, 203);
glEnd();


//window 3
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,246,221);
glVertex2i(146, 195);
glVertex2i(151, 195);
glVertex2i(151, 203);
glVertex2i(146, 203);
glEnd();

//window 4
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,246,221);
glVertex2i(153, 195);
glVertex2i(158, 195);
glVertex2i(158, 203);
glVertex2i(153, 203);
glEnd();


//window 5
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,246,221);
glVertex2i(160, 195);
glVertex2i(165, 195);
glVertex2i(165, 203);
glVertex2i(160, 203);
glEnd();

//window 6
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,246,221);
glVertex2i(167, 195);
glVertex2i(172, 195);
glVertex2i(172, 203);
glVertex2i(167, 203);
glEnd();


//window 7
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,246,221);
glVertex2i(132, 180);
glVertex2i(137, 180);
glVertex2i(137, 188);
glVertex2i(132, 188);
glEnd();

//window 8
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,246,221);
glVertex2i(139, 180);
glVertex2i(144, 180);
glVertex2i(144, 188);
glVertex2i(139, 188);
glEnd();


//window 9
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,246,221);
glVertex2i(146, 180);
glVertex2i(151, 180);
glVertex2i(151, 188);
glVertex2i(146, 188);
glEnd();

//window 10
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,246,221);
glVertex2i(153, 180);
glVertex2i(158, 180);
glVertex2i(158, 188);
glVertex2i(153, 188);
glEnd();


//window 11
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,246,221);
glVertex2i(160, 180);
glVertex2i(165, 180);
glVertex2i(165, 188);
glVertex2i(160, 188);
glEnd();

//window 12
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,246,221);
glVertex2i(167, 180);
glVertex2i(172, 180);
glVertex2i(172, 188);
glVertex2i(167, 188);
glEnd();


//window 13
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,246,221);
glVertex2i(132, 165);
glVertex2i(137, 165);
glVertex2i(137, 173);
glVertex2i(132, 173);
glEnd();

//window 14
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,246,221);
glVertex2i(139, 165);
glVertex2i(144, 165);
glVertex2i(144, 173);
glVertex2i(139, 173);
glEnd();


//window 15
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,246,221);
glVertex2i(146, 165);
glVertex2i(151, 165);
glVertex2i(151, 173);
glVertex2i(146, 173);
glEnd();

//window 16
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,246,221);
glVertex2i(153, 165);
glVertex2i(158, 165);
glVertex2i(158, 173);
glVertex2i(153, 173);
glEnd();


//window 17
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,246,221);
glVertex2i(160, 165);
glVertex2i(165, 165);
glVertex2i(165, 173);
glVertex2i(160, 173);
glEnd();

//window 18
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,246,221);
glVertex2i(167, 165);
glVertex2i(172, 165);
glVertex2i(172, 173);
glVertex2i(167, 173);
glEnd();


//window 19
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,246,221);
glVertex2i(132, 150);
glVertex2i(137, 150);
glVertex2i(137, 158);
glVertex2i(132, 158);
glEnd();

//window 20
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,246,221);
glVertex2i(139, 150);
glVertex2i(144, 150);
glVertex2i(144, 158);
glVertex2i(139, 158);
glEnd();


//window 21
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,246,221);
glVertex2i(146, 150);
glVertex2i(151, 150);
glVertex2i(151, 158);
glVertex2i(146, 158);
glEnd();

//window 22
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,246,221);
glVertex2i(153, 150);
glVertex2i(158, 150);
glVertex2i(158, 158);
glVertex2i(153, 158);
glEnd();


//window 23
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,246,221);
glVertex2i(160, 150);
glVertex2i(165, 150);
glVertex2i(165, 158);
glVertex2i(160, 158);
glEnd();

//window 24
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,246,221);
glVertex2i(167, 150);
glVertex2i(172, 150);
glVertex2i(172, 158);
glVertex2i(167, 158);
glEnd();


//pink building
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (185,32,116);
glVertex2i(35, 140);
glVertex2i(125, 140);
glVertex2i(125, 185);
glVertex2i(35, 185);
glEnd();


glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (49,13,84);
glVertex2i(30, 140);
glVertex2i(40, 140);
glVertex2i(40, 205);
glVertex2i(30, 205);
glEnd();


glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (49,13,84);
glVertex2i(65, 185);
glVertex2i(80, 185);
glVertex2i(80, 205);
glVertex2i(65, 205);
glEnd();


glBegin(GL_TRIANGLES);
glPointSize(10.0);
glColor3ub (185,32,116);
glVertex2i(40, 185);
glVertex2i(75, 185);
glVertex2i(40, 205);
glEnd();


glBegin(GL_TRIANGLES);
glPointSize(10.0);
glColor3ub (185,32,116);
glVertex2i(78, 185);
glVertex2i(120, 185);
glVertex2i(78, 205);
glEnd();

//window 1
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,254,255);
glVertex2i(50, 152);
glVertex2i(65, 152);
glVertex2i(65, 170);
glVertex2i(50, 170);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (85,19,85);
glVertex2i(50, 170);
glVertex2i(65, 170);
glVertex2i(65, 174);
glVertex2i(50, 174);
glEnd();

//window 2
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,254,255);
glVertex2i(75, 172);
glVertex2i(80, 172);
glVertex2i(80, 178);
glVertex2i(75, 178);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (85,19,85);
glVertex2i(75, 178);
glVertex2i(80, 178);
glVertex2i(80, 180);
glVertex2i(75, 180);
glEnd();

//window 3
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,254,255);
glVertex2i(83, 172);
glVertex2i(88, 172);
glVertex2i(88, 178);
glVertex2i(83, 178);
glEnd();


glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (85,19,85);
glVertex2i(83, 178);
glVertex2i(88, 178);
glVertex2i(88, 180);
glVertex2i(83, 180);
glEnd();

//window 4
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,254,255);
glVertex2i(83, 162);
glVertex2i(88, 162);
glVertex2i(88, 168);
glVertex2i(83, 168);
glEnd();


glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (85,19,85);
glVertex2i(83, 168);
glVertex2i(88, 168);
glVertex2i(88, 170);
glVertex2i(83, 170);
glEnd();

//window 5

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,254,255);
glVertex2i(91, 162);
glVertex2i(96, 162);
glVertex2i(96, 168);
glVertex2i(91, 168);
glEnd();


glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (85,19,85);
glVertex2i(91, 168);
glVertex2i(96, 168);
glVertex2i(96, 170);
glVertex2i(91, 170);
glEnd();


glFlush ();
}

void myInit (void)
{
glClearColor(255,255,255,0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1200.0, 0.0, 600.0);
}



int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1200, 600);
glutInitWindowPosition (100, 150);
glutCreateWindow ("OpenGL_Project_Group_2");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
