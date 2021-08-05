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
///testing Junaed Asif
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
