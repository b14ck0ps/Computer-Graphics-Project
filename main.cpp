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

///BG Building 3
glColor3ub (151, 163, 151);//top_box_shadow
glBegin(GL_QUADS);
glVertex2i(270,355);
glVertex2i(305,355);
glVertex2i(302,365);
glVertex2i(275,365);
glEnd();

glColor3ub (195, 203, 200);//top_box
glBegin(GL_QUADS);
glVertex2i(280,355);
glVertex2i(305,355);
glVertex2i(302,368);
glVertex2i(285,368);
glEnd();

glColor3ub (195, 203, 200);//top_tri1
glBegin(GL_TRIANGLES);
glVertex2i(305,355);
glVertex2i(315,355);
glVertex2i(310,365);
glEnd();

glColor3ub (195, 203, 200);//top_tri2
glBegin(GL_TRIANGLES);
glVertex2i(320,355);
glVertex2i(325,355);
glVertex2i(325,365);
glEnd();

glColor3ub (195, 203, 200);//top
glBegin(GL_QUADS);
glVertex2i(280,170);
glVertex2i(336,170);
glVertex2i(336,355);
glVertex2i(280,355);
glEnd();

glColor3ub (151, 163, 151);//top_shadow
glBegin(GL_QUADS);
glVertex2i(270,170);
glVertex2i(280,170);
glVertex2i(280,355);
glVertex2i(270,355);
glEnd();

///end

///BG Building 4
glColor3ub (151, 163, 151);//top_quad_shadow
glBegin(GL_QUADS);
glVertex2i(364,380);
glVertex2i(374,380);
glVertex2i(380,398);
glVertex2i(364,408);
glEnd();

glColor3ub (195, 203, 200);//top_quad
glBegin(GL_QUADS);
glVertex2i(374,380);
glVertex2i(397,380);
glVertex2i(397,401);
glVertex2i(374,411);
glEnd();

glColor3ub (195, 203, 200);//top
glBegin(GL_QUADS);
glVertex2i(354,170);
glVertex2i(397,170);
glVertex2i(397,380);
glVertex2i(354,380);
glEnd();

glColor3ub (151, 163, 151);//top_shadow
glBegin(GL_QUADS);
glVertex2i(344,170);
glVertex2i(354,170);
glVertex2i(354,380);
glVertex2i(344,380);
glEnd();

glColor3ub (195, 203, 200);//right_B3
glBegin(GL_QUADS);
glVertex2i(336,170);
glVertex2i(349,170);
glVertex2i(349,270);
glVertex2i(336,270);
glEnd();

glColor3ub (195, 203, 200);//right
glBegin(GL_QUADS);
glVertex2i(401,340);
glVertex2i(397,340);
glVertex2i(397,372);
glVertex2i(401,369);
glEnd();
glColor3ub (195, 203, 200);//right_2
glBegin(GL_QUADS);
glVertex2i(408,170);
glVertex2i(397,170);
glVertex2i(397,353);
glVertex2i(408,345);
glEnd();
///end

///BG Building 5
glColor3ub (195, 203, 200);//top_1
glBegin(GL_QUADS);
glVertex2i(461,400);
glVertex2i(484,400);
glVertex2i(484,387);
glVertex2i(461,387);
glEnd();

glColor3ub (151, 163, 151);//top_1_shadow
glBegin(GL_QUADS);
glVertex2i(451,398);
glVertex2i(461,398);
glVertex2i(461,387);
glVertex2i(451,387);
glEnd();

glColor3ub (151, 163, 151);//top_2_curve_shadow
glBegin(GL_QUADS);
glVertex2i(451,387);
glVertex2i(474,387);
glVertex2i(474,380);
glVertex2i(448,380);
glEnd();

glColor3ub (195, 203, 200);//top_2_curve
glBegin(GL_QUADS);
glVertex2i(461,387);
glVertex2i(484,387);
glVertex2i(487,380);
glVertex2i(458,380);
glEnd();

glColor3ub (151, 163, 151);//top_2_shadow
glBegin(GL_QUADS);
glVertex2i(448,380);
glVertex2i(477,380);
glVertex2i(477,350);
glVertex2i(448,350);
glEnd();

glColor3ub (195, 203, 200);//top_2
glBegin(GL_QUADS);
glVertex2i(458,380);
glVertex2i(487,380);
glVertex2i(487,350);
glVertex2i(458,350);
glEnd();

glColor3ub (151, 163, 151);//top_curve
glBegin(GL_QUADS);
glVertex2i(445,343);
glVertex2i(480,343);
glVertex2i(477,350);
glVertex2i(448,350);
glEnd();

glColor3ub (195, 203, 200);//top_curve
glBegin(GL_QUADS);
glVertex2i(455,343);
glVertex2i(490,343);
glVertex2i(487,350);
glVertex2i(458,350);
glEnd();

glColor3ub (151, 163, 151);//main_shadow
glBegin(GL_QUADS);
glVertex2i(445,170);
glVertex2i(480,170);
glVertex2i(480,343);
glVertex2i(445,343);
glEnd();

glColor3ub (195, 203, 200);//main
glBegin(GL_QUADS);
glVertex2i(455,170);
glVertex2i(490,170);
glVertex2i(490,343);
glVertex2i(455,343);
glEnd();

glColor3ub (195, 203, 200);//righty
glBegin(GL_QUADS);
glVertex2i(490,170);
glVertex2i(513,170);
glVertex2i(513,319);
glVertex2i(490,319);
glEnd();

///end

///BG Building 6
glColor3ub (195, 203, 200);//top_stick!
glBegin(GL_LINES);
glLineWidth(2);
glVertex2i(760,380);
glVertex2i(760,346);
glEnd();

glColor3ub (195, 203, 200);//top_1
glBegin(GL_QUADS);
glVertex2i(748,346);
glVertex2i(762,346);
glVertex2i(762,361);
glVertex2i(748,361);
glEnd();

glColor3ub (195, 203, 200);//top_2
glBegin(GL_QUADS);
glVertex2i(730,340);
glVertex2i(764,340);
glVertex2i(764,346);
glVertex2i(730,346);
glEnd();

glColor3ub (195, 203, 200);//main
glBegin(GL_QUADS);
glVertex2i(723,170);
glVertex2i(762,170);
glVertex2i(762,340);
glVertex2i(723,340);
glEnd();

glColor3ub (195, 203, 200);//right
glBegin(GL_QUADS);
glVertex2i(762,170);
glVertex2i(768,170);
glVertex2i(768,345);
glVertex2i(762,350);
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
