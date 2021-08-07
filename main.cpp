#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (172,188,65);
glVertex2i(0, 120);
glVertex2i(1200, 120);
glVertex2i(1200, 185);
glVertex2i(0, 185);
glEnd();


//1st building

glBegin(GL_POLYGON);
glPointSize(10.0);
glColor3ub (106,135,109);
glVertex2i(310, 250);
glVertex2i(395, 250);
glVertex2i(387, 262);
glVertex2i(318, 262);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (0,0,0);
glVertex2i(305, 245);
glVertex2i(400, 245);
glVertex2i(397, 250);
glVertex2i(306, 250);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (239,124,33);
glVertex2i(310, 145);
glVertex2i(395, 145);
glVertex2i(395, 245);
glVertex2i(310, 245);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (214,195,144);
glVertex2i(310, 212);
glVertex2i(395, 212);
glVertex2i(395, 217);
glVertex2i(310, 217);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,253,253);
glVertex2i(322, 217);
glVertex2i(336, 217);
glVertex2i(336, 238);
glVertex2i(322, 238);
glEnd();

glLineWidth(1);
glBegin(GL_LINES);
glColor3ub (0,0,0);
glVertex2i(322,232);
glVertex2i(336,232);
glVertex2i(322,222);
glVertex2i(336,222);
glVertex2i(330,238);
glVertex2i(330,218);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,253,253);
glVertex2i(345, 217);
glVertex2i(357, 217);
glVertex2i(357, 238);
glVertex2i(345, 238);
glEnd();

glBegin(GL_LINES);
glColor3ub (0,0,0);
glVertex2i(345,232);
glVertex2i(358,232);
glVertex2i(345,222);
glVertex2i(358,222);
glVertex2i(352,238);
glVertex2i(352,218);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,253,253);
glVertex2i(368, 217);
glVertex2i(381, 217);
glVertex2i(381, 238);
glVertex2i(368, 238);
glEnd();

glBegin(GL_LINES);
glColor3ub (0,0,0);
glVertex2i(368,232);
glVertex2i(382,232);
glVertex2i(368,222);
glVertex2i(382,222);
glVertex2i(375,238);
glVertex2i(375,218);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,253,253);
glVertex2i(335, 185);
glVertex2i(345, 185);
glVertex2i(345, 205);
glVertex2i(335, 205);
glEnd();

glBegin(GL_LINES);
glColor3ub (0,0,0);
glVertex2i(335,200);
glVertex2i(345,200);
glVertex2i(335,191);
glVertex2i(345,191);
glVertex2i(340,205);
glVertex2i(340,185);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,253,253);
glVertex2i(355, 185);
glVertex2i(370, 185);
glVertex2i(370, 205);
glVertex2i(355, 205);
glEnd();

glBegin(GL_LINES);
glColor3ub (0,0,0);
glVertex2i(355,200);
glVertex2i(370,200);
glVertex2i(355,191);
glVertex2i(370,191);
glVertex2i(363,205);
glVertex2i(363,185);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (113,140,120);
glVertex2i(328, 152);
glVertex2i(376, 152);
glVertex2i(376, 170);
glVertex2i(328, 170);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (245,234,188);
glVertex2i(328, 144);
glVertex2i(376, 144);
glVertex2i(376, 146);
glVertex2i(328, 146);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (245,234,188);
glVertex2i(328, 146);
glVertex2i(376, 146);
glVertex2i(376, 152);
glVertex2i(328, 152);
glEnd();

glLineWidth(3);
glBegin(GL_LINES);
glColor3ub (0,0,0);
glVertex2i(376,152);
glVertex2i(376,170);
glVertex2i(376,170);
glVertex2i(328,170);
glVertex2i(328,170);
glVertex2i(328,152);
glEnd();

glBegin(GL_LINES);
glColor3ub (0,0,0);
glVertex2i(376,144);
glVertex2i(376,152);
glVertex2i(328,152);
glVertex2i(328,144);
glVertex2i(350,170);
glVertex2i(350,144);
glEnd();


//2nd building

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (145,55,50);
glVertex2i(407, 144);
glVertex2i(427, 144);
glVertex2i(427, 330);
glVertex2i(407, 330);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (247,165,63);
glVertex2i(427, 144);
glVertex2i(484, 144);
glVertex2i(484, 330);
glVertex2i(427, 330);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (16,17,8);
glVertex2i(406, 330);
glVertex2i(427, 330);
glVertex2i(427, 336);
glVertex2i(406, 336);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (241,205,54);
glVertex2i(427, 330);
glVertex2i(485, 330);
glVertex2i(485, 336);
glVertex2i(427, 336);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,253,241);
glVertex2i(436, 305);
glVertex2i(446, 305);
glVertex2i(446, 315);
glVertex2i(436, 315);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (0,0,0);
glVertex2i(436, 316);
glVertex2i(446, 316);
glVertex2i(446, 318);
glVertex2i(436, 318);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,253,241);
glVertex2i(450, 305);
glVertex2i(460, 305);
glVertex2i(460, 315);
glVertex2i(450, 315);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (0,0,0);
glVertex2i(450, 316);
glVertex2i(460, 316);
glVertex2i(460, 318);
glVertex2i(450, 318);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,253,241);
glVertex2i(465, 305);
glVertex2i(475, 305);
glVertex2i(475, 315);
glVertex2i(465, 315);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (0,0,0);
glVertex2i(465, 316);
glVertex2i(475, 316);
glVertex2i(475, 318);
glVertex2i(465, 318);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (0,0,0);
glVertex2i(435, 299);
glVertex2i(475, 299);
glVertex2i(475, 302);
glVertex2i(435, 302);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,253,241);
glVertex2i(435, 265);
glVertex2i(445, 265);
glVertex2i(445, 275);
glVertex2i(435, 275);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (0,0,0);
glVertex2i(435, 275);
glVertex2i(445, 275);
glVertex2i(445, 277);
glVertex2i(435, 277);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,253,241);
glVertex2i(465, 265);
glVertex2i(475, 265);
glVertex2i(475, 275);
glVertex2i(465, 275);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (0,0,0);
glVertex2i(465, 275);
glVertex2i(475, 275);
glVertex2i(475, 277);
glVertex2i(465, 277);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,253,241);
glVertex2i(450, 265);
glVertex2i(460, 265);
glVertex2i(460, 275);
glVertex2i(450, 275);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (0,0,0);
glVertex2i(450, 275);
glVertex2i(460, 275);
glVertex2i(460, 277);
glVertex2i(450, 277);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (0,0,0);
glVertex2i(435, 262);
glVertex2i(475, 262);
glVertex2i(475, 259);
glVertex2i(435, 259);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,253,241);
glVertex2i(435, 220);
glVertex2i(445, 220);
glVertex2i(445, 230);
glVertex2i(435, 230);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (0,0,0);
glVertex2i(435, 231);
glVertex2i(445, 231);
glVertex2i(445, 233);
glVertex2i(435, 233);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,253,241);
glVertex2i(450, 220);
glVertex2i(460, 220);
glVertex2i(460, 230);
glVertex2i(450, 230);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (0,0,0);
glVertex2i(450, 231);
glVertex2i(460, 231);
glVertex2i(460, 233);
glVertex2i(450, 233);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,253,241);
glVertex2i(465, 220);
glVertex2i(475, 220);
glVertex2i(475, 230);
glVertex2i(465, 230);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (0,0,0);
glVertex2i(465, 231);
glVertex2i(475, 231);
glVertex2i(475, 233);
glVertex2i(465, 233);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (0,0,0);
glVertex2i(450, 214);
glVertex2i(475, 214);
glVertex2i(475, 217);
glVertex2i(450, 217);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,253,241);
glVertex2i(465, 175);
glVertex2i(475, 175);
glVertex2i(475, 185);
glVertex2i(465, 185);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (0,0,0);
glVertex2i(465, 186);
glVertex2i(475, 186);
glVertex2i(475, 188);
glVertex2i(465, 188);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (0,0,0);
glVertex2i(455, 170);
glVertex2i(475, 170);
glVertex2i(475, 173);
glVertex2i(455, 173);
glEnd();

//3rd building

glBegin(GL_TRIANGLES);
glPointSize(10.0);
glColor3ub (79,143,128);
glVertex2i(492, 280);
glVertex2i(540, 280);
glVertex2i(535, 312);
glEnd();

glBegin(GL_TRIANGLES);
glPointSize(10.0);
glColor3ub (137,180,170);
glVertex2i(540, 280);
glVertex2i(580, 280);
glVertex2i(535, 312);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (43,141,128);
glVertex2i(495, 145);
glVertex2i(540, 145);
glVertex2i(540, 280);
glVertex2i(495, 280);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (184,217,212);
glVertex2i(540, 145);
glVertex2i(580, 145);
glVertex2i(580, 280);
glVertex2i(540, 280);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (196,231,210);
glVertex2i(500, 170);
glVertex2i(535, 170);
glVertex2i(535, 275);
glVertex2i(500, 275);
glEnd();

glLineWidth(2);
glBegin(GL_LINES);//1
glColor3ub(46,142,130);
glVertex2i(495,270);
glVertex2i(535,270);
glEnd();

glBegin(GL_LINES);
glColor3ub(46,142,130);
glVertex2i(495,260);
glVertex2i(535,260);
glEnd();//2

glBegin(GL_LINES);
glColor3ub(46,142,130);
glVertex2i(495,250);
glVertex2i(535,250);
glEnd();//3

glBegin(GL_LINES);
glColor3ub(46,142,130);
glVertex2i(495,240);
glVertex2i(535,240);
glEnd();//4

glBegin(GL_LINES);
glColor3ub(46,142,130);
glVertex2i(495,230);
glVertex2i(535,230);
glEnd();//5

glBegin(GL_LINES);
glColor3ub(46,142,130);
glVertex2i(495,220);
glVertex2i(535,220);
glEnd();//6

glBegin(GL_LINES);
glColor3ub(46,142,130);
glVertex2i(495,210);
glVertex2i(535,210);
glEnd();//7

glBegin(GL_LINES);
glColor3ub(46,142,130);
glVertex2i(495,200);
glVertex2i(535,200);
glEnd();//8

glBegin(GL_LINES);
glColor3ub(46,142,130);
glVertex2i(495,190);
glVertex2i(535,190);
glEnd();//9

glBegin(GL_LINES);
glColor3ub(46,142,130);
glVertex2i(495,180);
glVertex2i(535,180);
glEnd();//10

glBegin(GL_LINES);
glColor3ub(46,142,130);
glVertex2i(495,170);
glVertex2i(535,170);
glEnd();//11

glBegin(GL_LINES);
glColor3ub(46,142,130);
glVertex2i(495,160);
glVertex2i(535,160);
glEnd();//12

glBegin(GL_LINES);
glColor3ub(46,142,130);
glVertex2i(500,275);
glVertex2i(500,170);
glEnd();//1

glBegin(GL_LINES);
glColor3ub(46,142,130);
glVertex2i(505,275);
glVertex2i(505,170);
glEnd();//2

glBegin(GL_LINES);
glColor3ub(46,142,130);
glVertex2i(510,275);
glVertex2i(510,170);
glEnd();//3

glBegin(GL_LINES);
glColor3ub(46,142,130);
glVertex2i(515,275);
glVertex2i(515,170);
glEnd();//4

glBegin(GL_LINES);
glColor3ub(46,142,130);
glVertex2i(520,275);
glVertex2i(520,170);
glEnd();//5

glBegin(GL_LINES);
glColor3ub(46,142,130);
glVertex2i(525,275);
glVertex2i(525,170);
glEnd();//6

glBegin(GL_LINES);
glColor3ub(46,142,130);
glVertex2i(530,275);
glVertex2i(530,170);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (233,248,219);
glVertex2i(545, 150);
glVertex2i(575, 150);
glVertex2i(575, 275);
glVertex2i(545, 275);
glEnd();

glLineWidth(2);
glBegin(GL_LINES);//1
glColor3ub(184,217,212);
glVertex2i(545,270);
glVertex2i(575,270);
glEnd();

glBegin(GL_LINES);//1
glColor3ub(184,217,212);
glVertex2i(545,265);
glVertex2i(575,265);
glEnd();

glBegin(GL_LINES);//1
glColor3ub(184,217,212);
glVertex2i(545,260);
glVertex2i(575,260);
glEnd();

glBegin(GL_LINES);//1
glColor3ub(184,217,212);
glVertex2i(545,255);
glVertex2i(575,255);
glEnd();

glBegin(GL_LINES);//1
glColor3ub(184,217,212);
glVertex2i(545,250);
glVertex2i(575,250);
glEnd();

glBegin(GL_LINES);//1
glColor3ub(184,217,212);
glVertex2i(545,245);
glVertex2i(575,245);
glEnd();

glBegin(GL_LINES);//1
glColor3ub(184,217,212);
glVertex2i(545,240);
glVertex2i(575,240);
glEnd();

glBegin(GL_LINES);//1
glColor3ub(184,217,212);
glVertex2i(545,235);
glVertex2i(575,235);
glEnd();

glBegin(GL_LINES);//1
glColor3ub(184,217,212);
glVertex2i(545,230);
glVertex2i(575,230);
glEnd();

glBegin(GL_LINES);//1
glColor3ub(184,217,212);
glVertex2i(545,225);
glVertex2i(575,225);
glEnd();

glBegin(GL_LINES);//1
glColor3ub(184,217,212);
glVertex2i(545,220);
glVertex2i(575,220);
glEnd();

glBegin(GL_LINES);//1
glColor3ub(184,217,212);
glVertex2i(545,215);
glVertex2i(575,215);
glEnd();

glBegin(GL_LINES);//1
glColor3ub(184,217,212);
glVertex2i(545,210);
glVertex2i(575,210);
glEnd();

glBegin(GL_LINES);//1
glColor3ub(184,217,212);
glVertex2i(545,205);
glVertex2i(575,205);
glEnd();

glBegin(GL_LINES);//1
glColor3ub(184,217,212);
glVertex2i(545,200);
glVertex2i(575,200);
glEnd();

glBegin(GL_LINES);//1
glColor3ub(184,217,212);
glVertex2i(545,195);
glVertex2i(575,195);
glEnd();

glBegin(GL_LINES);//1
glColor3ub(184,217,212);
glVertex2i(545,190);
glVertex2i(575,190);
glEnd();

glBegin(GL_LINES);//1
glColor3ub(184,217,212);
glVertex2i(545,185);
glVertex2i(575,185);
glEnd();

glBegin(GL_LINES);//1
glColor3ub(184,217,212);
glVertex2i(545,180);
glVertex2i(575,180);
glEnd();

glBegin(GL_LINES);//1
glColor3ub(184,217,212);
glVertex2i(545,175);
glVertex2i(575,175);
glEnd();

glBegin(GL_LINES);//1
glColor3ub(184,217,212);
glVertex2i(545,170);
glVertex2i(575,170);
glEnd();

glBegin(GL_LINES);//1
glColor3ub(184,217,212);
glVertex2i(545,165);
glVertex2i(575,165);
glEnd();

glBegin(GL_LINES);//1
glColor3ub(184,217,212);
glVertex2i(545,160);
glVertex2i(575,160);
glEnd();

glBegin(GL_LINES);//1
glColor3ub(184,217,212);
glVertex2i(545,155);
glVertex2i(575,155);
glEnd();
//5th building

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,255,51);
glVertex2i(645, 165);
glVertex2i(705, 165);
glVertex2i(705, 330);
glVertex2i(645, 330);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (244,188,22);
glVertex2i(705, 270);
glVertex2i(725, 270);
glVertex2i(725, 330);
glVertex2i(705, 330);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (0,0,0);
glVertex2i(705, 330);
glVertex2i(726, 330);
glVertex2i(726, 335);
glVertex2i(705, 335);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (77,78,23);
glVertex2i(642, 330);
glVertex2i(705, 330);
glVertex2i(705, 335);
glVertex2i(642, 335);
glEnd();

//1st
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,254,254);
glVertex2i(650, 300);
glVertex2i(660, 300);
glVertex2i(660, 315);
glVertex2i(650, 315);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (239,181,38);
glVertex2i(650, 315);
glVertex2i(660, 315);
glVertex2i(660, 318);
glVertex2i(650, 318);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,254,254);
glVertex2i(650, 270);
glVertex2i(660, 270);
glVertex2i(660, 285);
glVertex2i(650, 285);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (239,181,38);
glVertex2i(650, 285);
glVertex2i(660, 285);
glVertex2i(660, 288);
glVertex2i(650, 288);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,254,254);
glVertex2i(650, 240);
glVertex2i(660, 240);
glVertex2i(660, 255);
glVertex2i(650, 255);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (239,181,38);
glVertex2i(650, 255);
glVertex2i(660, 255);
glVertex2i(660, 258);
glVertex2i(650, 258);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,254,254);
glVertex2i(650, 210);
glVertex2i(660, 210);
glVertex2i(660, 225);
glVertex2i(650, 225);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (239,181,38);
glVertex2i(650, 225);
glVertex2i(660, 225);
glVertex2i(660, 228);
glVertex2i(650, 228);
glEnd();

//2nd
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,254,254);
glVertex2i(670, 300);
glVertex2i(680, 300);
glVertex2i(680, 315);
glVertex2i(670, 315);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (239,181,38);
glVertex2i(670, 315);
glVertex2i(680, 315);
glVertex2i(680, 318);
glVertex2i(670, 318);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,254,254);
glVertex2i(670, 270);
glVertex2i(680, 270);
glVertex2i(680, 285);
glVertex2i(670, 285);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (239,181,38);
glVertex2i(670, 285);
glVertex2i(680, 285);
glVertex2i(680, 288);
glVertex2i(670, 288);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,254,254);
glVertex2i(670, 240);
glVertex2i(680, 240);
glVertex2i(680, 255);
glVertex2i(670, 255);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (239,181,38);
glVertex2i(670, 255);
glVertex2i(680, 255);
glVertex2i(680, 258);
glVertex2i(670, 258);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,254,254);
glVertex2i(670, 210);
glVertex2i(680, 210);
glVertex2i(680, 225);
glVertex2i(670, 225);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (239,181,38);
glVertex2i(670, 225);
glVertex2i(680, 225);
glVertex2i(680, 228);
glVertex2i(670, 228);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,254,254);
glVertex2i(670, 180);
glVertex2i(680, 180);
glVertex2i(680, 195);
glVertex2i(670, 195);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (239,181,38);
glVertex2i(670, 195);
glVertex2i(680, 195);
glVertex2i(680, 198);
glVertex2i(670, 198);
glEnd();

//3rd

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,254,254);
glVertex2i(685, 300);
glVertex2i(695, 300);
glVertex2i(695, 315);
glVertex2i(685, 315);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (239,181,38);
glVertex2i(685, 315);
glVertex2i(695, 315);
glVertex2i(695, 318);
glVertex2i(685, 318);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,254,254);
glVertex2i(685, 270);
glVertex2i(695, 270);
glVertex2i(695, 285);
glVertex2i(685, 285);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (239,181,38);
glVertex2i(685, 285);
glVertex2i(695, 285);
glVertex2i(695, 288);
glVertex2i(685, 288);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,254,254);
glVertex2i(685, 240);
glVertex2i(695, 240);
glVertex2i(695, 255);
glVertex2i(685, 255);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (239,181,38);
glVertex2i(685, 255);
glVertex2i(695, 255);
glVertex2i(695, 258);
glVertex2i(685, 258);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,254,254);
glVertex2i(685, 210);
glVertex2i(695, 210);
glVertex2i(695, 225);
glVertex2i(685, 225);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (239,181,38);
glVertex2i(685, 225);
glVertex2i(695, 225);
glVertex2i(695, 228);
glVertex2i(685, 228);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (253,254,254);
glVertex2i(685, 180);
glVertex2i(695, 180);
glVertex2i(695, 195);
glVertex2i(685, 195);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (239,181,38);
glVertex2i(685, 195);
glVertex2i(695, 195);
glVertex2i(695, 198);
glVertex2i(685, 198);
glEnd();

//4th building

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (254,207,7);
glVertex2i(590, 145);
glVertex2i(635, 145);
glVertex2i(635, 200);
glVertex2i(590, 200);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (245,225,164);
glVertex2i(635, 145);
glVertex2i(685, 145);
glVertex2i(685, 200);
glVertex2i(635, 200);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (254,207,7);
glVertex2i(590, 145);
glVertex2i(635, 145);
glVertex2i(635, 200);
glVertex2i(590, 200);
glEnd();



glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (245,225,164);
glVertex2i(635, 145);
glVertex2i(685, 145);
glVertex2i(685, 200);
glVertex2i(635, 200);
glEnd();




//window 1
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,251,254);
glVertex2i(595, 190);
glVertex2i(600, 190);
glVertex2i(600, 185);
glVertex2i(595, 185);
glEnd();



//window 2
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,251,254);
glVertex2i(602, 190);
glVertex2i(607, 190);
glVertex2i(607, 185);
glVertex2i(602, 185);
glEnd();



//window 3
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,251,254);
glVertex2i(609, 190);
glVertex2i(614, 190);
glVertex2i(614, 185);
glVertex2i(609, 185);
glEnd();



//window 4
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,251,254);
glVertex2i(616, 190);
glVertex2i(621, 190);
glVertex2i(621, 185);
glVertex2i(616, 185);
glEnd();



//window 5
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,251,254);
glVertex2i(623, 190);
glVertex2i(628, 190);
glVertex2i(628, 185);
glVertex2i(623, 185);
glEnd();




//window 6
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,251,254);
glVertex2i(595, 175);
glVertex2i(600, 175);
glVertex2i(600, 180);
glVertex2i(595, 180);
glEnd();



//window 7
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,251,254);
glVertex2i(602, 175);
glVertex2i(607, 175);
glVertex2i(607, 180);
glVertex2i(602, 180);
glEnd();



//window 8
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,251,254);
glVertex2i(609, 175);
glVertex2i(614, 175);
glVertex2i(614, 180);
glVertex2i(609, 180);
glEnd();



//window 9
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,251,254);
glVertex2i(616, 175);
glVertex2i(621, 175);
glVertex2i(621, 180);
glVertex2i(616, 180);
glEnd();



//window 10
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,251,254);
glVertex2i(623, 175);
glVertex2i(628, 175);
glVertex2i(628, 180);
glVertex2i(623, 180);
glEnd();




//window 11
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,251,254);
glVertex2i(595, 165);
glVertex2i(600, 165);
glVertex2i(600, 170);
glVertex2i(595, 170);
glEnd();



//window 12
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,251,254);
glVertex2i(602, 165);
glVertex2i(607, 165);
glVertex2i(607, 170);
glVertex2i(602, 170);
glEnd();



//window 13
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,251,254);
glVertex2i(609, 165);
glVertex2i(614, 165);
glVertex2i(614, 170);
glVertex2i(609, 170);
glEnd();



//window 14
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,251,254);
glVertex2i(616, 165);
glVertex2i(621, 165);
glVertex2i(621, 170);
glVertex2i(616, 170);
glEnd();



//window 15
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,251,254);
glVertex2i(623, 165);
glVertex2i(628, 165);
glVertex2i(628, 170);
glVertex2i(623, 170);
glEnd();





//window 16
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,251,254);
glVertex2i(595, 155);
glVertex2i(600, 155);
glVertex2i(600, 160);
glVertex2i(595, 160);
glEnd();



//window 17
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,251,254);
glVertex2i(602, 155);
glVertex2i(607, 155);
glVertex2i(607, 160);
glVertex2i(602, 160);
glEnd();



//window 18
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,251,254);
glVertex2i(609, 155);
glVertex2i(614, 155);
glVertex2i(614, 160);
glVertex2i(609, 160);
glEnd();



//window 19
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,251,254);
glVertex2i(616, 155);
glVertex2i(621, 155);
glVertex2i(621, 160);
glVertex2i(616, 160);
glEnd();



//window 20
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (255,251,254);
glVertex2i(623, 155);
glVertex2i(628, 155);
glVertex2i(628, 160);
glVertex2i(623, 160);
glEnd();

//6th building

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (245,94,55);
glVertex2i(705, 145);
glVertex2i(765, 145);
glVertex2i(765, 270);
glVertex2i(705, 270);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (58,81,76);
glVertex2i(695, 145);
glVertex2i(705, 145);
glVertex2i(705, 270);
glVertex2i(695, 270);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (157,203,178);
glVertex2i(720, 250);
glVertex2i(730, 250);
glVertex2i(730, 260);
glVertex2i(720, 260);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(720,255);
glVertex2i(730,255);
glVertex2i(725,260);
glVertex2i(725,250);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (157,203,178);
glVertex2i(733, 250);
glVertex2i(743, 250);
glVertex2i(743, 260);
glVertex2i(733, 260);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(733,255);
glVertex2i(743,255);
glVertex2i(738,260);
glVertex2i(738,250);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (157,203,178);
glVertex2i(745, 250);
glVertex2i(755, 250);
glVertex2i(755, 260);
glVertex2i(745, 260);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(745,255);
glVertex2i(755,255);
glVertex2i(750,260);
glVertex2i(750,250);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (157,203,178);
glVertex2i(720, 235);
glVertex2i(730, 235);
glVertex2i(730, 245);
glVertex2i(720, 245);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(720,240);
glVertex2i(730,240);
glVertex2i(725,245);
glVertex2i(725,235);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (157,203,178);
glVertex2i(720, 220);
glVertex2i(730, 220);
glVertex2i(730, 230);
glVertex2i(720, 230);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(720,225);
glVertex2i(730,225);
glVertex2i(725,230);
glVertex2i(725,220);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (157,203,178);
glVertex2i(720, 205);
glVertex2i(730, 205);
glVertex2i(730, 215);
glVertex2i(720, 215);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(720,210);
glVertex2i(730,210);
glVertex2i(725,215);
glVertex2i(725,205);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (157,203,178);
glVertex2i(720, 190);
glVertex2i(730, 190);
glVertex2i(730, 200);
glVertex2i(720, 200);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(720,195);
glVertex2i(730,195);
glVertex2i(725,200);
glVertex2i(725,190);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (157,203,178);
glVertex2i(720, 175);
glVertex2i(730, 175);
glVertex2i(730, 185);
glVertex2i(720, 185);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(720,180);
glVertex2i(730,180);
glVertex2i(725,185);
glVertex2i(725,175);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (157,203,178);
glVertex2i(720, 160);
glVertex2i(730, 160);
glVertex2i(730, 170);
glVertex2i(720, 170);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(720,165);
glVertex2i(730,165);
glVertex2i(725,170);
glVertex2i(725,160);
glEnd();

//2nd
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (157,203,178);
glVertex2i(733, 235);
glVertex2i(743, 235);
glVertex2i(743, 245);
glVertex2i(733, 245);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(733,240);
glVertex2i(743,240);
glVertex2i(738,245);
glVertex2i(738,235);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (157,203,178);
glVertex2i(733, 220);
glVertex2i(743, 220);
glVertex2i(743, 230);
glVertex2i(733, 230);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(733,225);
glVertex2i(743,225);
glVertex2i(738,230);
glVertex2i(738,220);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (157,203,178);
glVertex2i(733, 205);
glVertex2i(743, 205);
glVertex2i(743, 215);
glVertex2i(733, 215);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(733,210);
glVertex2i(743,210);
glVertex2i(738,215);
glVertex2i(738,205);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (157,203,178);
glVertex2i(733, 190);
glVertex2i(743, 190);
glVertex2i(743, 200);
glVertex2i(733, 200);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(733,195);
glVertex2i(743,195);
glVertex2i(738,200);
glVertex2i(738,190);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (157,203,178);
glVertex2i(733, 175);
glVertex2i(743, 175);
glVertex2i(743, 185);
glVertex2i(733, 185);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(733,180);
glVertex2i(743,180);
glVertex2i(738,185);
glVertex2i(738,175);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (157,203,178);
glVertex2i(733, 160);
glVertex2i(743, 160);
glVertex2i(743, 170);
glVertex2i(733, 170);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(733,165);
glVertex2i(743,165);
glVertex2i(738,170);
glVertex2i(738,160);
glEnd();

//3rd
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (157,203,178);
glVertex2i(745, 235);
glVertex2i(755, 235);
glVertex2i(755, 245);
glVertex2i(745, 245);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(745,240);
glVertex2i(755,240);
glVertex2i(750,245);
glVertex2i(750,235);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (157,203,178);
glVertex2i(745, 220);
glVertex2i(755, 220);
glVertex2i(755, 230);
glVertex2i(745, 230);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(745,225);
glVertex2i(755,225);
glVertex2i(750,230);
glVertex2i(750,220);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (157,203,178);
glVertex2i(745, 205);
glVertex2i(755, 205);
glVertex2i(755, 215);
glVertex2i(745, 215);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(745,210);
glVertex2i(755,210);
glVertex2i(750,215);
glVertex2i(750,205);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (157,203,178);
glVertex2i(745, 190);
glVertex2i(755, 190);
glVertex2i(755, 200);
glVertex2i(745, 200);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(745,195);
glVertex2i(755,195);
glVertex2i(750,200);
glVertex2i(750,190);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (157,203,178);
glVertex2i(745, 175);
glVertex2i(755, 175);
glVertex2i(755, 185);
glVertex2i(745, 185);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(745,180);
glVertex2i(755,180);
glVertex2i(750,185);
glVertex2i(750,175);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (157,203,178);
glVertex2i(745, 160);
glVertex2i(755, 160);
glVertex2i(755, 170);
glVertex2i(745, 170);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (104,135,118);
glVertex2i(745,165);
glVertex2i(755,165);
glVertex2i(750,170);
glVertex2i(750,160);
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
