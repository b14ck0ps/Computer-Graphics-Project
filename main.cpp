#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);

///sky block
glColor3ub (219, 223, 226);
glBegin(GL_QUADS);
glVertex2i(0, 600);
glVertex2i(0, 145);
glVertex2i(1200, 145);
glVertex2i(1200, 600);
glEnd();

///bg building 1

glColor3ub (195, 203, 200);//top_stick!
glLineWidth(2);
glBegin(GL_LINES);
glVertex2i(164,350);
glVertex2i(164,340);

glVertex2i(174,360);
glVertex2i(174,340);
glEnd();

glColor3ub (195, 203, 200);//top
glBegin(GL_QUADS);
glVertex2i(138,284);
glVertex2i(179,284);
glVertex2i(178,342);
glVertex2i(138,340);
glEnd();

glColor3ub (195, 203, 200);//bottom
glBegin(GL_QUADS);
glVertex2i(124,170);
glVertex2i(179,170);
glVertex2i(179,284);
glVertex2i(124,284);
glEnd();

glColor3ub (195, 203, 200);//right_side
glBegin(GL_QUADS);
glVertex2i(179,170);
glVertex2i(186,170);
glVertex2i(186,276);
glVertex2i(179,284);
glEnd();

glColor3ub (151, 163, 151);//bottom_shadow
glBegin(GL_QUADS);
glVertex2i(115,170);
glVertex2i(124,170);
glVertex2i(124,284);
glVertex2i(115,284);
glEnd();

glColor3ub (151, 163, 151);//top_shadow
glBegin(GL_QUADS);
glVertex2i(129,284);
glVertex2i(138,284);
glVertex2i(138,342);
glVertex2i(129,340);
glEnd();
///end

///BG building 2
glColor3ub (195, 203, 200);//top_stick!
glLineWidth(2);
glBegin(GL_LINES);
glVertex2i(229,332);
glVertex2i(229,340);
glEnd();
glColor3ub (151, 163, 151);//top_stick_shadow
glLineWidth(2);
glBegin(GL_LINES);
glVertex2i(219,336);
glVertex2i(219,330);
glEnd();

glColor3ub (195, 203, 200);//top_hat
glBegin(GL_QUADS);
glVertex2i(227,330);
glVertex2i(238,330);
glVertex2i(238,332);
glVertex2i(227,332);
glEnd();

glColor3ub (195, 203, 200);//top
glBegin(GL_QUADS);
glVertex2i(227,280);
glVertex2i(248,280);
glVertex2i(248,330);
glVertex2i(227,330);
glEnd();

glColor3ub (151, 163, 151);//top_shadow
glBegin(GL_QUADS);
glVertex2i(218,280);
glVertex2i(227,280);
glVertex2i(227,330);
glVertex2i(218,330);
glEnd();

glColor3ub (195, 203, 200);//mid
glBegin(GL_QUADS);
glVertex2i(211,254);
glVertex2i(248,254);
glVertex2i(248,280);
glVertex2i(211,280);
glEnd();

glColor3ub (151, 163, 151);//mid_shadow
glBegin(GL_QUADS);
glVertex2i(200,254);
glVertex2i(211,254);
glVertex2i(211,280);
glVertex2i(200,280);
glEnd();

glColor3ub (195, 203, 200);//bottom
glBegin(GL_QUADS);
glVertex2i(204,170);
glVertex2i(248,170);
glVertex2i(248,254);
glVertex2i(204,254);
glEnd();

glColor3ub (151, 163, 151);//bottom_shadow
glBegin(GL_QUADS);
glVertex2i(194,170);
glVertex2i(204,170);
glVertex2i(204,254);
glVertex2i(194,254);
glEnd();
///end
glColor3ub (0,0,0);
glBegin(GL_LINES);
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
//-----------------
    ///Fariha - Building
    ///X(764 - 1200)
    ///Y(145)
//-----------------

///Road Junaedasif
glVertex2i(0, 145);
glVertex2i(1200, 145);
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
