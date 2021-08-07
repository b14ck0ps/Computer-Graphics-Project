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
//-----------------
//getset
    ///Fariha - Building
    ///X(764 - 1200)
    ///Y(145)
//-----------------

///Road Junaedasif
glVertex2i(0, 145);
glVertex2i(1200, 145);
glEnd();

//Road to Fariha
//1st building.
glBegin(GL_QUADS);//red part b1
glPointSize(10.0);
glColor3ub (163,76,63);
glVertex2i(774, 147);
glVertex2i(790, 147);
glVertex2i(790, 242);
glVertex2i(774, 242);
glEnd();
// border
glBegin(GL_LINES);
glLineWidth(04);
glColor3ub (114,149,125);
glVertex2i(777,146);
glVertex2i(777,242);
glEnd();
glBegin(GL_LINES);
glLineWidth(04);
glColor3ub (114,149,125);
glVertex2i(782,146);
glVertex2i(782,242);
glEnd();
glBegin(GL_LINES);
glLineWidth(04);
glColor3ub (114,149,125);
glVertex2i(789,146);
glVertex2i(789,242);
glEnd();


glBegin(GL_QUADS);//white part b1
glPointSize(10.0);
glColor3ub (244,237,215);
glVertex2i(790, 147);
glVertex2i(863, 147);
glVertex2i(863, 242);
glVertex2i(790, 242);
glEnd();
glBegin(GL_QUADS);//w1 b1
glPointSize(10.0);
glColor3ub (187,211,188);
glVertex2i(800, 217);
glVertex2i(813, 217);
glVertex2i(813, 232);
glVertex2i(800, 232);
glEnd();


glBegin(GL_QUADS);//w2 b1
glPointSize(10.0);
glColor3ub (187,211,188);
glVertex2i(820, 217);
glVertex2i(833, 217);
glVertex2i(833, 232);
glVertex2i(820, 232);
glEnd();
glBegin(GL_QUADS);//w3 b1
glPointSize(10.0);
glColor3ub (187,211,188);
glVertex2i(840, 217);
glVertex2i(853, 217);
glVertex2i(853, 232);
glVertex2i(840, 232);
glEnd();
glBegin(GL_QUADS);//w4 b1
glPointSize(10.0);
glColor3ub (187,211,188);
glVertex2i(800, 188);
glVertex2i(813, 188);
glVertex2i(813, 203);
glVertex2i(800, 203);
glEnd();
glBegin(GL_QUADS);//w5 b1
glPointSize(10.0);
glColor3ub (187,211,188);
glVertex2i(820, 188);
glVertex2i(833, 188);
glVertex2i(833, 203);
glVertex2i(820, 203);
glEnd();
glBegin(GL_QUADS);//w6 b1
glPointSize(10.0);
glColor3ub (187,211,188);
glVertex2i(840, 188);
glVertex2i(853, 188);
glVertex2i(853, 203);
glVertex2i(840, 203);
glEnd();

glBegin(GL_QUADS);//w7 b1
glPointSize(10.0);
glColor3ub (187,211,188);
glVertex2i(800, 159);
glVertex2i(813, 159);
glVertex2i(813, 174);
glVertex2i(800, 174);
glEnd();
glBegin(GL_QUADS);//w8 b1
glPointSize(10.0);
glColor3ub (187,211,188);
glVertex2i(820, 159);
glVertex2i(833, 159);
glVertex2i(833, 174);
glVertex2i(820, 174);
glEnd();
glBegin(GL_QUADS);//w9 b1
glPointSize(10.0);
glColor3ub (187,211,188);
glVertex2i(840, 159);
glVertex2i(853, 159);
glVertex2i(853, 174);
glVertex2i(840, 174);
glEnd();
//2nd building
glBegin(GL_QUADS);//red1 b2
glPointSize(10.0);
glColor3ub (208,75,36);
glVertex2i(855, 155);
glVertex2i(865, 155);
glVertex2i(865, 330);
glVertex2i(855, 330);
glEnd();

glBegin(GL_QUADS);//red2 b2 border
glPointSize(10.0);
glColor3ub (208,75,36);
glVertex2i(850, 325);
glVertex2i(865, 325);
glVertex2i(865, 335);
glVertex2i(850, 335);
glEnd();
glBegin(GL_QUADS);//green1 b2
glPointSize(10.0);
glColor3ub (29,68,59);
glVertex2i(865, 155);
glVertex2i(925, 155);
glVertex2i(925, 330);
glVertex2i(865, 330);
glEnd();
glBegin(GL_QUADS);//green2 b2 border
glPointSize(10.0);
glColor3ub (29,68,59);
glVertex2i(860, 325);
glVertex2i(930, 325);
glVertex2i(930, 335);
glVertex2i(860, 335);
glEnd();
glBegin(GL_QUADS);//w1 b2
glPointSize(10.0);
glColor3ub (184,218,194);
glVertex2i(870, 290);
glVertex2i(885, 290);
glVertex2i(885, 310);
glVertex2i(870, 310);
glEnd();
glBegin(GL_QUADS);//w2 b2
glPointSize(10.0);
glColor3ub (184,218,194);
glVertex2i(890, 290);
glVertex2i(905, 290);
glVertex2i(905, 310);
glVertex2i(890, 310);
glEnd();
glBegin(GL_QUADS);//w3 b2
glPointSize(10.0);
glColor3ub (184,218,194);
glVertex2i(910, 290);
glVertex2i(925, 290);
glVertex2i(925, 310);
glVertex2i(910, 310);
glEnd();
//line border1

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (184,218,194);
glVertex2i(867,282);
glVertex2i(923,282);
glEnd();

glBegin(GL_QUADS);//w4 b2
glPointSize(10.0);
glColor3ub (184,218,194);
glVertex2i(870, 255);
glVertex2i(885, 255);
glVertex2i(885, 275);
glVertex2i(870, 275);
glEnd();
glBegin(GL_QUADS);//w5 b2
glPointSize(10.0);
glColor3ub (184,218,194);
glVertex2i(890, 255);
glVertex2i(905, 255);
glVertex2i(905, 275);
glVertex2i(890, 275);
glEnd();

glBegin(GL_QUADS);//w6 b2
glPointSize(10.0);
glColor3ub (184,218,194);
glVertex2i(910, 255);
glVertex2i(925, 255);
glVertex2i(925, 275);
glVertex2i(910, 275);
glEnd();
//line border2
glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (184,218,194);
glVertex2i(867,244);
glVertex2i(923,244);
glEnd();

glBegin(GL_QUADS);//w7 b2
glPointSize(10.0);
glColor3ub (184,218,194);
glVertex2i(870, 220);
glVertex2i(885, 220);
glVertex2i(885, 240);
glVertex2i(870, 240);
glEnd();

glBegin(GL_QUADS);//w8 b2
glPointSize(10.0);
glColor3ub (184,218,194);
glVertex2i(890, 220);
glVertex2i(905, 220);
glVertex2i(905, 240);
glVertex2i(890, 240);
glEnd();

glBegin(GL_QUADS);//w9 b2
glPointSize(10.0);
glColor3ub (184,218,194);
glVertex2i(910, 220);
glVertex2i(925, 220);
glVertex2i(925, 240);
glVertex2i(910, 240);
glEnd();

//line border3
glBegin(GL_LINES);
glLineWidth(10);
glColor3ub (184,218,194);
glVertex2i(867,204);
glVertex2i(923,204);
glEnd();

//3rd building
glBegin(GL_QUADS);//b3 border
glPointSize(10.0);
glColor3ub (82,78,55);
glVertex2i(924, 145);
glVertex2i(934, 145);
glVertex2i(934, 252);
glVertex2i(924, 252);
glEnd();
//Red part b3
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (201,79,43);
glVertex2i(934, 145);
glVertex2i(995, 145);
glVertex2i(995, 252);
glVertex2i(934, 252);
glEnd();
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (198,242,237);//w1 b3
glVertex2i(952, 235);
glVertex2i(960, 235);
glVertex2i(960, 245);
glVertex2i(952, 245);
glEnd();
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (198,242,237);//w2 b3
glVertex2i(975, 235);
glVertex2i(984, 235);
glVertex2i(984, 245);
glVertex2i(975, 245);
glEnd();
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (198,242,237);//w3 b3
glVertex2i(940, 220);
glVertex2i(950, 220);
glVertex2i(950, 230);
glVertex2i(940, 230);
glEnd();
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (198,242,237);//w4 b3
glVertex2i(963, 220);
glVertex2i(973, 220);
glVertex2i(973, 232);
glVertex2i(963, 232);
glEnd();
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (198,242,237);//w5 b3
glVertex2i(952, 205);
glVertex2i(960, 205);
glVertex2i(960, 215);
glVertex2i(952, 215);
glEnd();
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (198,242,237);//w6 b3
glVertex2i(975, 205);
glVertex2i(984, 205);
glVertex2i(984, 215);
glVertex2i(975, 215);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (198,242,237);//w7 b3
glVertex2i(940, 190);
glVertex2i(950, 190);
glVertex2i(950, 200);
glVertex2i(940, 200);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (198,242,237);//w8 b3
glVertex2i(963, 190);
glVertex2i(973, 190);
glVertex2i(973, 200);
glVertex2i(963, 200);
glEnd();
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (198,242,237);//w9 b3
glVertex2i(952, 180);
glVertex2i(960, 180);
glVertex2i(960, 190);
glVertex2i(952, 190);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (198,242,237);//w10 b3
glVertex2i(975, 180);
glVertex2i(984, 180);
glVertex2i(984, 190);
glVertex2i(975, 190);
glEnd();
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (198,242,237);//w11 b3
glVertex2i(940, 165);
glVertex2i(950, 165);
glVertex2i(950, 175);
glVertex2i(940, 175);
glEnd();
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (198,242,237);//w12 b3
glVertex2i(963, 165);
glVertex2i(973, 165);
glVertex2i(973, 175);
glVertex2i(963, 175);
glEnd();
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (198,242,237);//w13 b3
glVertex2i(952, 150);
glVertex2i(960, 150);
glVertex2i(960, 160);
glVertex2i(952, 160);
glEnd();
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (198,242,237);//w14 b3
glVertex2i(975, 150);
glVertex2i(984, 150);
glVertex2i(984, 160);
glVertex2i(975, 160);
glEnd();

//4th building
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (241,219,168);
glVertex2i(1010, 147);
glVertex2i(1025, 147);
glVertex2i(1025, 208);
glVertex2i(1010, 208);
glEnd();

glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (191,83,22);//deep oranger part b4
glVertex2i(1025, 147);
glVertex2i(1030, 147);
glVertex2i(1030, 208);
glVertex2i(1025, 208);
glEnd();
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (232,107,37);//light oranger part b4
glVertex2i(1030, 147);
glVertex2i(1060, 147);
glVertex2i(1060, 208);
glVertex2i(1030, 208);
glEnd();
glBegin(GL_QUADS);//light brik 1
glPointSize(10.0);
glColor3ub (241,219,168);
glVertex2i(1060, 147);
glVertex2i(1074, 147);
glVertex2i(1074, 208);
glVertex2i(1060, 208);
glEnd();
glBegin(GL_QUADS);//light brik 2
glPointSize(10.0);
glColor3ub (241,219,168);
glVertex2i(1060, 147);
glVertex2i(1074, 147);
glVertex2i(1074, 208);
glVertex2i(1060, 208);
glEnd();
glBegin(GL_QUADS);//light brik square
glPointSize(10.0);
glColor3ub (241,219,168);
glVertex2i(1010, 208);
glVertex2i(1074, 208);
glVertex2i(1074, 233);
glVertex2i(1010, 233);
glEnd();
glBegin(GL_QUADS);//white border
glPointSize(10.0);
glColor3ub (255,255,255);
glVertex2i(1010, 233);
glVertex2i(1074, 233);
glVertex2i(1074, 239);
glVertex2i(1010, 239);
glEnd();
glBegin(GL_QUADS);//upper brik
glPointSize(10.0);
glColor3ub (241,219,168);
glVertex2i(1010, 239);
glVertex2i(1074, 239);
glVertex2i(1074, 282);
glVertex2i(1010, 282);
glEnd();
glBegin(GL_QUADS);//W1
glPointSize(10.0);
glColor3ub (255,255,255);
glVertex2i(1018, 260);
glVertex2i(1024, 260);
glVertex2i(1024, 270);
glVertex2i(1018, 270);
glEnd();
glBegin(GL_QUADS);//W2
glPointSize(10.0);
glColor3ub (255,255,255);
glVertex2i(1028, 260);
glVertex2i(1035, 260);
glVertex2i(1035, 270);
glVertex2i(1028, 270);
glEnd();
glBegin(GL_QUADS);//W3
glPointSize(10.0);
glColor3ub (255,255,255);
glVertex2i(1038, 260);
glVertex2i(1045, 260);
glVertex2i(1045, 270);
glVertex2i(1038, 270);
glEnd();
glBegin(GL_QUADS);//W4
glPointSize(10.0);
glColor3ub (255,255,255);
glVertex2i(1048, 260);
glVertex2i(1055, 260);
glVertex2i(1055, 270);
glVertex2i(1048, 270);
glEnd();
glBegin(GL_QUADS);//W5
glPointSize(10.0);
glColor3ub (255,255,255);
glVertex2i(1018, 249);
glVertex2i(1024, 249);
glVertex2i(1024, 258);
glVertex2i(1018, 258);
glEnd();
glBegin(GL_QUADS);//W6
glPointSize(10.0);
glColor3ub (255,255,255);
glVertex2i(1028, 249);
glVertex2i(1035, 249);
glVertex2i(1035, 258);
glVertex2i(1028, 258);
glEnd();
glBegin(GL_QUADS);//W6
glPointSize(10.0);
glColor3ub (255,255,255);
glVertex2i(1038, 249);
glVertex2i(1045, 249);
glVertex2i(1045, 258);
glVertex2i(1038, 258);
glEnd();
glBegin(GL_QUADS);//W7
glPointSize(10.0);
glColor3ub (255,255,255);
glVertex2i(1038, 249);
glVertex2i(1045, 249);
glVertex2i(1045, 258);
glVertex2i(1038, 258);
glEnd();
glBegin(GL_QUADS);//W8
glPointSize(10.0);
glColor3ub (255,255,255);
glVertex2i(1048, 249);
glVertex2i(1055, 249);
glVertex2i(1055, 258);
glVertex2i(1048, 258);
glEnd();
//uppper triangle
glBegin(GL_TRIANGLES);
glPointSize(10.0);
glColor3ub (121,137,109);
glVertex2i(1010, 282);
glVertex2i(1073, 282);
glVertex2i(1053, 315);
glEnd();
glBegin(GL_QUADS);//deep border
glPointSize(10.0);
glColor3ub (44,76,63);
glVertex2i(1010, 282);
glVertex2i(1072, 282);
glVertex2i(1072, 288);
glVertex2i(1014, 288);
glEnd();


glBegin(GL_TRIANGLES);
glPointSize(10.0);
glColor3ub (56,83,58);
glVertex2i(1073, 282);
glVertex2i(1097, 282);
glVertex2i(1053, 315);
glEnd();
glBegin(GL_QUADS);
glPointSize(10.0);
glColor3ub (203,175,98);
glVertex2i(1074, 147);
glVertex2i(1097, 147);
glVertex2i(1097, 282);
glVertex2i(1074, 282);
glEnd();
glBegin(GL_QUADS);//w1
glPointSize(10.0);
glColor3ub (255,255,255);
glVertex2i(1080, 262);
glVertex2i(1085, 262);
glVertex2i(1085, 273);
glVertex2i(1080, 273);
glEnd();
glBegin(GL_QUADS);//w2
glPointSize(10.0);
glColor3ub (255,255,255);
glVertex2i(1088, 263);
glVertex2i(1093, 263);
glVertex2i(1093, 273);
glVertex2i(1088, 273);
glEnd();
glBegin(GL_QUADS);//w3
glPointSize(10.0);
glColor3ub (255,255,255);
glVertex2i(1080, 249);
glVertex2i(1085, 249);
glVertex2i(1085, 258);
glVertex2i(1080, 258);
glEnd();
glBegin(GL_QUADS);//w4
glPointSize(10.0);
glColor3ub (255,255,255);
glVertex2i(1088, 249);
glVertex2i(1093, 249);
glVertex2i(1093, 258);
glVertex2i(1088, 258);
glEnd();
glBegin(GL_QUADS);//w5
glPointSize(10.0);
glColor3ub (255,255,255);
glVertex2i(1080, 232);
glVertex2i(1085, 232);
glVertex2i(1085, 244);
glVertex2i(1080, 244);
glEnd();
glBegin(GL_QUADS);//w6
glPointSize(10.0);
glColor3ub (255,255,255);
glVertex2i(1088, 232);
glVertex2i(1093, 232);
glVertex2i(1093, 244);
glVertex2i(1088, 244);
glEnd();

glBegin(GL_QUADS);//w7
glPointSize(10.0);
glColor3ub (255,255,255);
glVertex2i(1080, 216);
glVertex2i(1085, 216);
glVertex2i(1085, 228);
glVertex2i(1080, 228);
glEnd();
glBegin(GL_QUADS);//w8
glPointSize(10.0);
glColor3ub (255,255,255);
glVertex2i(1088, 216);
glVertex2i(1093, 216);
glVertex2i(1093, 228);
glVertex2i(1088, 228);
glEnd();
glBegin(GL_QUADS);//w9
glPointSize(10.0);
glColor3ub (255,255,255);
glVertex2i(1080, 204);
glVertex2i(1085, 204);
glVertex2i(1085, 213);
glVertex2i(1080, 213);
glEnd();
glBegin(GL_QUADS);//w10
glPointSize(10.0);
glColor3ub (255,255,255);
glVertex2i(1088, 204);
glVertex2i(1093, 204);
glVertex2i(1093, 213);
glVertex2i(1088, 213);
glEnd();
glBegin(GL_QUADS);//w11
glPointSize(10.0);
glColor3ub (255,255,255);
glVertex2i(1080, 188);
glVertex2i(1085, 188);
glVertex2i(1085, 198);
glVertex2i(1080, 198);
glEnd();
glBegin(GL_QUADS);//w12
glPointSize(10.0);
glColor3ub (255,255,255);
glVertex2i(1088, 188);
glVertex2i(1093, 188);
glVertex2i(1093, 198);
glVertex2i(1088, 198);
glEnd();

glBegin(GL_QUADS);//w13
glPointSize(10.0);
glColor3ub (255,255,255);
glVertex2i(1080, 173);
glVertex2i(1085, 173);
glVertex2i(1085, 182);
glVertex2i(1080, 182);
glEnd();
glBegin(GL_QUADS);//w14
glPointSize(10.0);
glColor3ub (255,255,255);
glVertex2i(1088, 173);
glVertex2i(1093, 173);
glVertex2i(1093, 182);
glVertex2i(1088, 182);
glEnd();
glBegin(GL_QUADS);//w15
glPointSize(10.0);
glColor3ub (255,255,255);
glVertex2i(1080, 157);
glVertex2i(1085, 157);
glVertex2i(1085, 169);
glVertex2i(1080, 169);
glEnd();
glBegin(GL_QUADS);//w16
glPointSize(10.0);
glColor3ub (255,255,255);
glVertex2i(1088, 157);
glVertex2i(1093, 157);
glVertex2i(1093, 169);
glVertex2i(1088, 169);
glEnd();
//5th building
glBegin(GL_QUADS);//light part
glPointSize(10.0);
glColor3ub (159,158,58);
glVertex2i(1108, 147);
glVertex2i(1158, 147);
glVertex2i(1158, 267);
glVertex2i(1108, 267);
glEnd();
glBegin(GL_QUADS);//deep part
glPointSize(10.0);
glColor3ub (129,130,53);
glVertex2i(1158, 147);
glVertex2i(1186, 147);
glVertex2i(1186, 300);
glVertex2i(1158, 268);
glEnd();
glBegin(GL_QUADS);//deep blue
glPointSize(10.0);
glColor3ub (55,25,85);
glVertex2i(1108, 267);
glVertex2i(1158, 267);
glVertex2i(1186, 300);
glVertex2i(1136, 300);
glEnd();
//shade
glBegin(GL_LINES);//1
glLineWidth(10);
glColor3ub (199,192,49);
glVertex2i(1108,255);
glVertex2i(1158,255);
glVertex2i(1117,147);
glVertex2i(1117,267);
glEnd();

glBegin(GL_LINES);//2
glLineWidth(10);
glColor3ub (199,192,49);
glVertex2i(1108,245);
glVertex2i(1158,245);
glVertex2i(1125,147);
glVertex2i(1125,266);
glEnd();

glBegin(GL_LINES);//3
glLineWidth(10);
glColor3ub (199,192,49);
glVertex2i(1108,233);
glVertex2i(1158,233);
glVertex2i(1135,147);
glVertex2i(1135,266);
glEnd();

glBegin(GL_LINES);//4
glLineWidth(10);
glColor3ub (199,192,49);
glVertex2i(1108,222);
glVertex2i(1158,222);
glVertex2i(1145,147);
glVertex2i(1145,266);
glEnd();
glBegin(GL_LINES);//5
glLineWidth(10);
glColor3ub (199,192,49);
glVertex2i(1108,212);
glVertex2i(1158,212);
glVertex2i(1135,147);
glVertex2i(1135,266);
glEnd();
glBegin(GL_LINES);//6
glLineWidth(10);
glColor3ub (199,192,49);
glVertex2i(1108,202);
glVertex2i(1158,202);
glEnd();
glBegin(GL_LINES);//7
glLineWidth(10);
glColor3ub (199,192,49);
glVertex2i(1108,192);
glVertex2i(1158,192);
glEnd();
glBegin(GL_LINES);//8
glLineWidth(10);
glColor3ub (199,192,49);
glVertex2i(1108,182);
glVertex2i(1158,182);
glEnd();
glBegin(GL_LINES);//9
glLineWidth(10);
glColor3ub (199,192,49);
glVertex2i(1108,172);
glVertex2i(1158,172);
glEnd();
glBegin(GL_LINES);//10
glLineWidth(10);
glColor3ub (199,192,49);
glVertex2i(1108,162);
glVertex2i(1158,162);
glEnd();
glBegin(GL_LINES);//11
glLineWidth(10);
glColor3ub (199,192,49);
glVertex2i(1108,152);
glVertex2i(1158,152);
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
