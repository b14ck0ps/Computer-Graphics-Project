#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);


glColor3ub (0,0,0);
glBegin(GL_LINES);
//-----------------
    ///Ajran - Sky & BG
    ///X(0 - 1200)
    ///Y(145)
//-----------------

//-----------------
    ///Asraf - Building
    ///X(0 - 302)
    ///Y(145)
//-----------------
glVertex2i(302, 600);
glVertex2i(302, 0);
//-----------------
    ///Mahjabin - Building
    ///X(302 - 764)
    ///Y(145)
//-----------------
glVertex2i(764, 600);
glVertex2i(764, 0);
glEnd();
//-----------------
    ///Fariha - Building
    ///X(764 - 1200)
    ///Y(145)
//-----------------

///Road Junaedasif
glColor3ub(254, 206, 8); //road_bg_yellow
glBegin(GL_QUADS);
glVertex2i(0, 0);
glVertex2i(1200, 0);
glVertex2i(1200, 122);
glVertex2i(0, 122);
glEnd();

//road_line_white
glLineWidth(5);
glLineStipple(10, 0xAAAA);
glEnable(GL_LINE_STIPPLE);
glColor3ub(255,255, 255);
glBegin(GL_LINES);
glVertex2i(-5, 58);
glVertex2i(1200, 58);
glEnd();

//car01
glColor3ub(199, 199, 193);
glBegin(GL_QUADS);
glVertex2i(104, 26);
glVertex2i(196, 26);
glVertex2i(196, 90);
glVertex2i(104, 90);
glEnd();

glColor3ub(180, 204, 201);
glBegin(GL_POLYGON);
glVertex2i(196, 26);
glVertex2i(226, 26);
glVertex2i(226, 50);
glVertex2i(210, 65);
glVertex2i(203, 80);
glVertex2i(196, 85);
glEnd();


glColor3ub(240, 109, 35);
glBegin(GL_QUADS);
glVertex2i(104, 32);
glVertex2i(196, 32);
glVertex2i(196, 90);
glVertex2i(104, 90);
glEnd();

//car 01 window
glColor3ub(253, 231, 215);
glBegin(GL_QUADS);
glVertex2i(196, 76);
glVertex2i(196, 61);
glVertex2i(218, 57);
glVertex2i(206, 72);
glEnd();

//Testing Github

/*
glColor3ub(255,255, 255);
glBegin(GL_LINES);
glVertex2i(196, 61);
glVertex2i(218, 57);
glEnd();
*/

//car02
glColor3ub(215, 236, 240);
glBegin(GL_POLYGON);
glVertex2i(535, 82);
glVertex2i(525, 82);
glVertex2i(518, 78);
glVertex2i(518, 74);
glVertex2i(518, 74);
glVertex2i(604, 74);
glVertex2i(604, 78);
glVertex2i(599, 82);
glVertex2i(590, 82);
glVertex2i(584, 106);
glVertex2i(541, 106);
glEnd();

glColor3ub(44, 136, 133);//car2 window 01
glBegin(GL_POLYGON);
glVertex2i(546, 101);
glVertex2i(541, 84);
glVertex2i(561, 84);
glVertex2i(561, 101);
glEnd();

glColor3ub(23, 125, 117);//car2 window 01 Glitch
glBegin(GL_TRIANGLES);
glVertex2i(546, 101);
glVertex2i(561, 84);
glVertex2i(561, 101);
glEnd();


glColor3ub(44, 136, 133);//car2 window 02
glBegin(GL_POLYGON);
glVertex2i(565, 101);
glVertex2i(565, 84);
glVertex2i(585, 84);
glVertex2i(580, 101);
glEnd();

glColor3ub(23, 125, 117);//car2 window 02 Glitch
glBegin(GL_TRIANGLES);
glVertex2i(565, 101);
glVertex2i(585, 84);
glVertex2i(580, 101);
glEnd();

//car03
glColor3ub(28, 138, 141);
glBegin(GL_POLYGON);
glVertex2i(735, 22);
glVertex2i(725, 22);
glVertex2i(718, 18);
glVertex2i(718, 14);
glVertex2i(718, 14);
glVertex2i(804, 14);
glVertex2i(804, 18);
glVertex2i(799, 22);
glVertex2i(790, 22);
glVertex2i(784, 46);
glVertex2i(741, 46);
glEnd();

glColor3ub(153, 200, 209);//car3 window 01
glBegin(GL_POLYGON);
glVertex2i(746, 41);
glVertex2i(741, 22);
glVertex2i(761, 22);
glVertex2i(761, 41);
glEnd();

glColor3ub(132, 172, 176);//car3 window 01 Glitch
glBegin(GL_TRIANGLES);
glVertex2i(746, 41);
glVertex2i(741, 22);
glVertex2i(761, 41);
glEnd();


glColor3ub(153, 200, 209);//car2 window 02
glBegin(GL_POLYGON);
glVertex2i(765, 41);
glVertex2i(765, 22);
glVertex2i(784, 22);
glVertex2i(779, 41);
glEnd();

glColor3ub(132, 172, 176);//car3 window 02 Glitch
glBegin(GL_TRIANGLES);
glVertex2i(765, 41);
glVertex2i(765, 22);
glVertex2i(779, 41);
glEnd();


//car04
glColor3ub(238, 84, 59);
glBegin(GL_POLYGON);
glVertex2i(895, 22);
glVertex2i(885, 22);
glVertex2i(878, 18);
glVertex2i(878, 14);
glVertex2i(878, 14);
glVertex2i(964, 14);
glVertex2i(964, 18);
glVertex2i(959, 22);
glVertex2i(950, 22);
glVertex2i(944, 46);
glVertex2i(901, 46);
glEnd();
/*glVertex2i(0, 122);
glVertex2i(1200, 122);
glEnd();*/

glColor3ub(219, 238, 243);//car4 window 01
glBegin(GL_POLYGON);
glVertex2i(906, 41);
glVertex2i(901, 22);
glVertex2i(921, 22);
glVertex2i(921, 41);
glEnd();

glColor3ub(182, 190, 184);//car4 window 01 Glitch
glBegin(GL_TRIANGLES);
glVertex2i(906, 41);
glVertex2i(901, 22);
glVertex2i(921, 41);
glEnd();


glColor3ub(219, 238, 243);//car4 window 02
glBegin(GL_POLYGON);
glVertex2i(925, 41);
glVertex2i(925, 22);
glVertex2i(944, 22);
glVertex2i(939, 41);
glEnd();

glColor3ub(182, 190, 184);//car4 window 02 Glitch
glBegin(GL_TRIANGLES);
glVertex2i(925, 41);
glVertex2i(925, 22);
glVertex2i(939, 41);
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
