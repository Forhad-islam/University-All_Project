#include<windows.h>
#include<mmsystem.h>
#include<math.h>
#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#define PI 3.14159265358979323846


GLfloat positionCar1 = 0.0f;
GLfloat speedCar1 = 0.02f;


GLfloat positionCloud = 0.0f;
GLfloat speedCloud = 0.00099f;


GLfloat positionSun = 0.0f;
GLfloat speedSun = 0.004f;


GLfloat positionMoon = 0.0f;
GLfloat speedMoon = 0.0009f;


void updateCar1(int value)           /// Where and how to move
{
    if(positionCar1 > 6.0)
        positionCar1 = 0.0f;
    positionCar1 += speedCar1;
	glutPostRedisplay();
	glutTimerFunc(1, updateCar1, 0);
}

void updateCloud(int value)         /// Where and how to move
{
    if(positionCloud <-6.0)
        positionCloud = 6.0f;
    positionCloud -= speedCloud;
	glutPostRedisplay();
	glutTimerFunc(1, updateCloud, 0);
}

void updateSun(int value)            ///Where and how to move
{
    if(positionSun <-4.0)
        positionSun = 4.0f;
    positionSun -= speedSun;
	glutPostRedisplay();
	glutTimerFunc(1, updateSun, 0);
}

void updateMoon(int value)            ///Where and how to move
{
    if(positionMoon >4.0)
        positionMoon = -1.5f;
    positionMoon += speedMoon;
	glutPostRedisplay();
	glutTimerFunc(1, updateMoon, 0);
}



                                                                            ///Night
void myDisplayNight(void)
{
	glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
    gluOrtho2D(-5,5,-4,4);

///sky
  glEnable(GL_LIGHTING);//Enable Light Effect
  GLfloat global_ambient[] = {0.0,0.0,2.0, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);

    glColor3ub(25,25,112);
	glBegin(GL_QUADS);
	glVertex2f(-5,4);
	glVertex2f(-5,0);
	glVertex2f(5,0);
	glVertex2f(5,4);
	glEnd();
  glDisable(GL_LIGHTING);

///Moon
    glPushMatrix();
    glTranslatef(0.0f,positionMoon, 0.0f);
    int i1;
	GLfloat x1=-1.0; GLfloat y1=1.0; GLfloat radius1 =.4f;
	int triangleAmount = 100; //# of triangles used to draw circle


	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,230);
		glVertex2f(x1, y1); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            x1 + (radius1 * cos(i1 *  twicePi / triangleAmount)),
			    y1 + (radius1 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();



///clouds
    glPushMatrix();
    glTranslatef(positionCloud,0.0, 0.0f);
    GLfloat global_ambient2[] = {3.5,3.5,3.5, 0.1};//ambient RGBA intensity of light
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient2);

	GLfloat x2=-2.5; GLfloat y2=3.5; GLfloat radius2 =.3f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(191, 191, 191);
		glVertex2f(x2, y2); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            x2 + (radius2 * cos(i1 *  twicePi / triangleAmount)),
			    y2 + (radius2 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x3=-2.9; GLfloat y3=3.3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(191, 191, 191);
		glVertex2f(x3, y3); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            x3 + (radius2 * cos(i1 *  twicePi / triangleAmount)),
			    y3 + (radius2 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x4=-2.65; GLfloat y4=2.95;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(191, 191, 191);
		glVertex2f(x4, y4); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            x4 + (radius2 * cos(i1 *  twicePi / triangleAmount)),
			    y4 + (radius2 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();


    GLfloat x5=2; GLfloat y5=3.4;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(191, 191, 191);
		glVertex2f(x5, y5); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            x5 + (radius2 * cos(i1 *  twicePi / triangleAmount)),
			    y5 + (radius2 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x6=2.26; GLfloat y6=3.04;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(191, 191, 191);
		glVertex2f(x6, y6); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            x6 + (radius2 * cos(i1 *  twicePi / triangleAmount)),
			    y6 + (radius2 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x7=1.8; GLfloat y7=3;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(191, 191, 191);
		glVertex2f(x7, y7); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            x7 + (radius2 * cos(i1 *  twicePi / triangleAmount)),
			    y7 + (radius2 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x8=-2.2; GLfloat y8=3.2;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(191,191,191);
		glVertex2f(x8, y8); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            x8 + (radius2 * cos(i1 *  twicePi / triangleAmount)),
			    y8 + (radius2 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();

    GLfloat x9=1.6; GLfloat y9=3.4;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(191, 191, 191);
		glVertex2f(x9, y9); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            x9 + (radius2 * cos(i1 *  twicePi / triangleAmount)),
			    y9 + (radius2 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();
	glDisable(GL_LIGHTING);

	glPopMatrix();

///Tree
    glColor3ub(90,22,22);
    glBegin(GL_POLYGON);
	glVertex2f(-0.15,2.1);
	glVertex2f(-0.15,1.5);
	glVertex2f(-0.05,1.5);
	glVertex2f(-0.05,2.1);
	glVertex2f(-0.15,2.1);
	glEnd();

GLfloat xt1=-0.3; GLfloat yt1=2.1; GLfloat radiust1 =.2f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,128,0);
		glVertex2f(xt1, yt1); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            xt1 + (radiust1 * cos(i1 *  twicePi / triangleAmount)),
			    yt1 + (radiust1 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat xt2=-0.1; GLfloat yt2=2.3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,128,0);
		glVertex2f(xt2, yt2); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            xt2 + (radiust1 * cos(i1 *  twicePi / triangleAmount)),
			    yt2 + (radiust1 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat xt3=0.1; GLfloat yt3=2.1;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,128,0);
		glVertex2f(xt3, yt3); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            xt3 + (radiust1 * cos(i1 *  twicePi / triangleAmount)),
			    yt3 + (radiust1 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();
///Tree2
    glColor3ub(90,22,22);
    glBegin(GL_POLYGON);
	glVertex2f(0.65,2.1);
	glVertex2f(0.65,1.5);
	glVertex2f(0.55,1.5);
	glVertex2f(0.55,2.1);
	glVertex2f(0.65,2.1);
	glEnd();

GLfloat xt4=0.4; GLfloat yt4=2.0; GLfloat radiust2 =.2f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,128,0);
		glVertex2f(xt4, yt4); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            xt4 + (radiust2 * cos(i1 *  twicePi / triangleAmount)),
			    yt4 + (radiust2 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat xt5=0.6; GLfloat yt5=2.2;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,128,0);
		glVertex2f(xt5, yt5); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            xt5 + (radiust2 * cos(i1 *  twicePi / triangleAmount)),
			        yt5 + (radiust2 * sin(i1 * twicePi / triangleAmount))
			         );
		}
	glEnd();

	GLfloat xt6=0.8; GLfloat yt6=2.0;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,128,0);
		glVertex2f(xt6, yt6); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            xt6 + (radiust2 * cos(i1 *  twicePi / triangleAmount)),
			    yt6 + (radiust2 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();
///Tree3
    glColor3ub(90,22,22);
    glBegin(GL_POLYGON);
	glVertex2f(-0.75,2.1);
	glVertex2f(-0.75,1.5);
	glVertex2f(-0.65,1.5);
	glVertex2f(-0.65,2.1);
	glVertex2f(-0.75,2.1);
	glEnd();

GLfloat xt7=-0.5; GLfloat yt7=2.0; GLfloat radiust3 =.2f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,128,0);
		glVertex2f(xt7, yt7); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            xt7 + (radiust3 * cos(i1 *  twicePi / triangleAmount)),
			    yt7 + (radiust3 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat xt8=-0.7; GLfloat yt8=2.2;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,128,0);
		glVertex2f(xt8, yt8); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            xt8 + (radiust3 * cos(i1 *  twicePi / triangleAmount)),
			        yt8 + (radiust3 * sin(i1 * twicePi / triangleAmount))
			         );
		}
	glEnd();

	GLfloat xt9=-0.9; GLfloat yt9=2.0;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,128,0);
		glVertex2f(xt9, yt9); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            xt9 + (radiust3 * cos(i1 *  twicePi / triangleAmount)),
			    yt9 + (radiust3 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();

///Tree 4
    glColor3ub(90,22,22);
    glBegin(GL_POLYGON);
	glVertex2f(2.85,1.8);
	glVertex2f(2.85,1.2);
	glVertex2f(2.95,1.2);
	glVertex2f(2.95,1.8);
	glVertex2f(2.85,1.8);
	glEnd();

	glColor3ub(0,153,0);
    glBegin(GL_POLYGON);
	glVertex2f(2.55,1.7);
	glVertex2f(2.90,1.9);
	glVertex2f(3.25,1.7);
	glVertex2f(2.65,1.7);
	glEnd();

	glColor3ub(0,153,0);
    glBegin(GL_POLYGON);
	glVertex2f(2.6,1.8);
	glVertex2f(2.90,2.0);
	glVertex2f(3.2,1.8);
	glVertex2f(2.6,1.8);
	glEnd();

	glColor3ub(0,153,0);
    glBegin(GL_POLYGON);
	glVertex2f(2.65,1.9);
	glVertex2f(2.90,2.1);
	glVertex2f(3.15,1.9);
	glVertex2f(2.65,1.9);
	glEnd();

///Tree5
    glColor3ub(90,22,22);
    glBegin(GL_POLYGON);
	glVertex2f(-2.85,1.8);
	glVertex2f(-2.85,1.2);
	glVertex2f(-2.95,1.2);
	glVertex2f(-2.95,1.8);
	glVertex2f(-2.85,1.8);
	glEnd();

	glColor3ub(0,153,0);
    glBegin(GL_POLYGON);
	glVertex2f(-2.55,1.7);
	glVertex2f(-2.90,1.9);
	glVertex2f(-3.25,1.7);
	glVertex2f(-2.55,1.7);
	glEnd();

	glColor3ub(0,153,0);
    glBegin(GL_POLYGON);
	glVertex2f(-2.6,1.8);
	glVertex2f(-2.90,2.0);
	glVertex2f(-3.2,1.8);
	glVertex2f(-2.6,1.8);
	glEnd();

	glColor3ub(0,153,0);
    glBegin(GL_POLYGON);
	glVertex2f(-2.65,1.9);
	glVertex2f(-2.90,2.1);
	glVertex2f(-3.15,1.9);
	glVertex2f(-2.65,1.9);
	glEnd();

///Tree 6
glColor3ub(90,22,22);
    glBegin(GL_POLYGON);
	glVertex2f(3.55,1.8);
	glVertex2f(3.55,1.2);
	glVertex2f(3.65,1.2);
	glVertex2f(3.65,1.8);
	glVertex2f(3.55,1.8);
	glEnd();

	glColor3ub(0,153,0);
    glBegin(GL_POLYGON);
	glVertex2f(3.25,1.65);
	glVertex2f(3.60,1.85);
	glVertex2f(3.95,1.65);
	glVertex2f(3.25,1.65);
	glEnd();

	glColor3ub(0,153,0);
    glBegin(GL_POLYGON);
	glVertex2f(3.3,1.75);
	glVertex2f(3.60,1.95);
	glVertex2f(3.9,1.75);
	glVertex2f(3.3,1.75);
	glEnd();

	glColor3ub(0,153,0);
    glBegin(GL_POLYGON);
	glVertex2f(3.35,1.85);
	glVertex2f(3.60,2.05);
	glVertex2f(3.85,1.85);
	glVertex2f(3.35,1.85);
	glEnd();

///Tree 7
glColor3ub(90,22,22);
    glBegin(GL_POLYGON);
	glVertex2f(-3.55,1.8);
	glVertex2f(-3.55,1.2);
	glVertex2f(-3.65,1.2);
	glVertex2f(-3.65,1.8);
	glVertex2f(-3.55,1.8);
	glEnd();

	glColor3ub(0,153,0);
    glBegin(GL_POLYGON);
	glVertex2f(-3.25,1.65);
	glVertex2f(-3.60,1.85);
	glVertex2f(-3.95,1.65);
	glVertex2f(-3.25,1.65);
	glEnd();

	glColor3ub(0,153,0);
    glBegin(GL_POLYGON);
	glVertex2f(-3.3,1.75);
	glVertex2f(-3.60,1.95);
	glVertex2f(-3.9,1.75);
	glVertex2f(-3.3,1.75);
	glEnd();

	glColor3ub(0,153,0);
    glBegin(GL_POLYGON);
	glVertex2f(-3.35,1.85);
	glVertex2f(-3.60,2.05);
	glVertex2f(-3.85,1.85);
	glVertex2f(-3.35,1.85);
	glEnd();


///Field
    glColor3ub(11,112,24);
    glBegin(GL_POLYGON);
	glVertex2f(-5,0);
	glVertex2f(5,0);
	glVertex2f(5,-4);
	glVertex2f(-5,-4);
	glVertex2f(-5,0);
	glEnd();



///Mosque
///center Structure
glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-4,0);
	glVertex2f(-4,1);
	glVertex2f(0,1.3);
	glVertex2f(4,1);
	glVertex2f(4,0);
	glVertex2f(-4,0);
	glEnd();

glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-3.9,1);
	glVertex2f(-3.9,1.1);
	glVertex2f(-0,1.4);
	glVertex2f(3.9,1.1);
	glVertex2f(3.9,1);
	glVertex2f(-0,1.3);
	glVertex2f(-0,1.3);
	glVertex2f(-3.9,1);
	glEnd();

glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-5,0);
	glVertex2f(-5,-0.1);
	glVertex2f(5,-0.1);
	glVertex2f(5,0);
	glVertex2f(-5,0);
	glEnd();

///black border
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
   glVertex2f(-4,0);
	glVertex2f(-4,1);
	glVertex2f(0,1.3);
	glVertex2f(4,1);
	glVertex2f(4,0);
	glVertex2f(-4,0);
    glEnd();
}
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
  glVertex2f(-3.9,1);
	glVertex2f(-3.9,1.1);
	glVertex2f(-0,1.4);
	glVertex2f(3.9,1.1);
	glVertex2f(3.9,1);
	glVertex2f(-0,1.3);
	glVertex2f(-3.9,1);
    glEnd();
}
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
 glVertex2f(-5,0);
	glVertex2f(-5,-0.1);
	glVertex2f(5,-0.1);
	glVertex2f(5,0);
	glVertex2f(-5,0);
    glEnd();
}
///Left Pillar
glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-4,0);
	glVertex2f(-4.5,0);
	glVertex2f(-4.5,1);
	glVertex2f(-4,1);
	glVertex2f(-4,0);
	glEnd();

glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-3.9,1);
	glVertex2f(-4.6,1);
	glVertex2f(-4.6,1.2);
	glVertex2f(-4.5,1.2);
	glVertex2f(-4.5,1.1);
	glVertex2f(-4,1.1);
	glVertex2f(-4,1.2);
	glVertex2f(-3.9,1.2);
	glVertex2f(-3.9,1);
	glEnd();

glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-4,1.1);
	glVertex2f(-4.5,1.1);
	glVertex2f(-4.5,1.5);
	glVertex2f(-4,1.5);
	glVertex2f(-4,1.1);
	glEnd();

glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-4.6,1.5);
	glVertex2f(-4.7,1.6);
	glVertex2f(-3.8,1.6);
	glVertex2f(-3.9,1.5);
	glVertex2f(-4.6,1.5);
	glEnd();

glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-4.6,1.6);
	glVertex2f(-4.6,1.7);
	glVertex2f(-4.5,1.8);
	glVertex2f(-4.4,1.9);
	glVertex2f(-4.25,2.0);
	glVertex2f(-4.1,1.9);
	glVertex2f(-4.0,1.8);
	glVertex2f(-3.9,1.7);
	glVertex2f(-3.9,1.6);
	glVertex2f(-4.6,1.6);
	glEnd();

///black border
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4,0);
	glVertex2f(-4.5,0);
	glVertex2f(-4.5,1);
	glVertex2f(-4,1);
	glVertex2f(-4,0);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-3.9,1);
	glVertex2f(-4.6,1);
	glVertex2f(-4.6,1.2);
	glVertex2f(-4.5,1.2);
	glVertex2f(-4.5,1.1);
	glVertex2f(-4,1.1);
	glVertex2f(-4,1.2);
	glVertex2f(-3.9,1.2);
	glVertex2f(-3.9,1);
	glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4,1.1);
	glVertex2f(-4.5,1.1);
	glVertex2f(-4.5,1.5);
	glVertex2f(-4,1.5);
	glVertex2f(-4,1.1);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.6,1.5);
	glVertex2f(-4.7,1.6);
	glVertex2f(-3.8,1.6);
	glVertex2f(-3.9,1.5);
	glVertex2f(-4.6,1.5);
    glEnd();
}
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.6,1.6);
	glVertex2f(-4.6,1.7);
	glVertex2f(-4.5,1.8);
	glVertex2f(-4.4,1.9);
	glVertex2f(-4.25,2.0);
	glVertex2f(-4.1,1.9);
	glVertex2f(-4.0,1.8);
	glVertex2f(-3.9,1.7);
	glVertex2f(-3.9,1.6);
	glVertex2f(-4.6,1.6);
    glEnd();
}

/// Right Pillar
glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(4,0);
	glVertex2f(4.5,0);
	glVertex2f(4.5,1);
	glVertex2f(4,1);
	glEnd();

glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(3.9,1);
	glVertex2f(4.6,1);
	glVertex2f(4.6,1.2);
	glVertex2f(4.5,1.2);
	glVertex2f(4.5,1.1);
	glVertex2f(4,1.1);
	glVertex2f(4,1.2);
	glVertex2f(3.9,1.2);
	glVertex2f(3.9,1);
	glEnd();

glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(4,1.1);
	glVertex2f(4.5,1.1);
	glVertex2f(4.5,1.5);
	glVertex2f(4,1.5);
	glVertex2f(4,1.1);
	glEnd();

glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(4.6,1.5);
	glVertex2f(4.7,1.6);
	glVertex2f(3.8,1.6);
	glVertex2f(3.9,1.5);
	glVertex2f(4.6,1.5);
	glEnd();

glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(4.6,1.6);
	glVertex2f(4.6,1.7);
	glVertex2f(4.5,1.8);
	glVertex2f(4.4,1.9);
	glVertex2f(4.25,2.0);
	glVertex2f(4.1,1.9);
	glVertex2f(4.0,1.8);
	glVertex2f(3.9,1.7);
	glVertex2f(3.9,1.6);
	glVertex2f(4.6,1.6);
	glEnd();


///black border
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(4,0);
	glVertex2f(4.5,0);
	glVertex2f(4.5,1);
	glVertex2f(4,1);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  	glVertex2f(3.9,1);
	glVertex2f(4.6,1);
	glVertex2f(4.6,1.2);
	glVertex2f(4.5,1.2);
	glVertex2f(4.5,1.1);
	glVertex2f(4,1.1);
	glVertex2f(4,1.2);
	glVertex2f(3.9,1.2);
	glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(4,1.1);
	glVertex2f(4.5,1.1);
	glVertex2f(4.5,1.5);
	glVertex2f(4,1.5);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(4.6,1.5);
	glVertex2f(4.7,1.6);
	glVertex2f(3.8,1.6);
	glVertex2f(3.9,1.5);
	glVertex2f(4.6,1.5);
    glEnd();
}
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(4.6,1.6);
	glVertex2f(4.6,1.7);
	glVertex2f(4.5,1.8);
	glVertex2f(4.4,1.9);
	glVertex2f(4.25,2.0);
	glVertex2f(4.1,1.9);
	glVertex2f(4.0,1.8);
	glVertex2f(3.9,1.7);
	glVertex2f(3.9,1.6);
	glVertex2f(4.6,1.6);
    glEnd();
}

///Left window
glColor3ub(255,255,51);
glBegin(GL_POLYGON);
	glVertex2f(-4.2,1.2);
	glVertex2f(-4.3,1.2);
	glVertex2f(-4.3,1.4);
	glVertex2f(-4.2,1.4);
	glVertex2f(-4.2,1.2);
	glEnd();
///Right window
glColor3ub(255,255,51);
glBegin(GL_POLYGON);
	glVertex2f(4.2,1.2);
	glVertex2f(4.3,1.2);
	glVertex2f(4.3,1.4);
	glVertex2f(4.2,1.4);
	glVertex2f(4.2,1.2);
	glEnd();

///Door -5
glColor3ub(255,255,51);
glBegin(GL_POLYGON);
	glVertex2f(-3.8,0);
	glVertex2f(-3.8,0.8);
	glVertex2f(-3.4,0.8);
	glVertex2f(-3.4,0);
	glVertex2f(-3.8,0);
	glEnd();

glColor3ub(205,133,63);
glBegin(GL_POLYGON);
	glVertex2f(-3.8,0.8);
	glVertex2f(-3.8,0.5);
	glVertex2f(-3.6,0.7);
	glVertex2f(-3.4,0.5);
	glVertex2f(-3.4,0.8);
	glVertex2f(-3.8,0.8);
	glEnd();

glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-3.8,0);
	glVertex2f(-3.8,0.8);
	glVertex2f(-3.4,0.8);
	glVertex2f(-3.4,0);
	glVertex2f(-3.8,0);
    glEnd();
}

///Door +5
glColor3ub(255,255,51);
glBegin(GL_POLYGON);
	glVertex2f(3.8,0);
	glVertex2f(3.8,0.8);
	glVertex2f(3.4,0.8);
	glVertex2f(3.4,0);
	glVertex2f(3.8,0);
	glEnd();

glColor3ub(205,133,63);
glBegin(GL_POLYGON);
	glVertex2f(3.8,0.8);
	glVertex2f(3.8,0.5);
	glVertex2f(3.6,0.7);
	glVertex2f(3.4,0.5);
	glVertex2f(3.4,0.8);
	glVertex2f(3.8,0.8);
	glEnd();

glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(3.8,0);
	glVertex2f(3.8,0.8);
	glVertex2f(3.4,0.8);
	glVertex2f(3.4,0);
	glVertex2f(3.8,0);
    glEnd();
}

///Door -4
glColor3ub(255,255,51);
glBegin(GL_POLYGON);
	glVertex2f(-3.1,0);
	glVertex2f(-3.1,0.8);
	glVertex2f(-2.7,0.8);
	glVertex2f(-2.7,0);
	glVertex2f(-3.1,0);
	glEnd();

glColor3ub(205,133,63);
glBegin(GL_POLYGON);
	glVertex2f(-3.1,0.8);
	glVertex2f(-3.1,0.5);
	glVertex2f(-2.9,0.7);
	glVertex2f(-2.7,0.5);
	glVertex2f(-2.7,0.8);
	glVertex2f(-3.1,0.8);
	glEnd();

glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-3.1,0);
	glVertex2f(-3.1,0.8);
	glVertex2f(-2.7,0.8);
	glVertex2f(-2.7,0);
	glVertex2f(-3.1,0);
    glEnd();
}

///Door +4
glColor3ub(255,255,51);
glBegin(GL_POLYGON);
	glVertex2f(3.1,0);
	glVertex2f(3.1,0.8);
	glVertex2f(2.7,0.8);
	glVertex2f(2.7,0);
	glVertex2f(3.1,0);
	glEnd();

glColor3ub(205,133,63);
glBegin(GL_POLYGON);
	glVertex2f(3.1,0.8);
	glVertex2f(3.1,0.5);
	glVertex2f(2.9,0.7);
	glVertex2f(2.7,0.5);
	glVertex2f(2.7,0.8);
	glVertex2f(3.1,0.8);
	glEnd();

glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(3.1,0);
	glVertex2f(3.1,0.8);
	glVertex2f(2.7,0.8);
	glVertex2f(2.7,0);
	glVertex2f(3.1,0);
    glEnd();
}

///Door -3
glColor3ub(255,255,51);
glBegin(GL_POLYGON);
	glVertex2f(-2.4,0);
	glVertex2f(-2.4,0.8);
	glVertex2f(-2.0,0.8);
	glVertex2f(-2.0,0);
	glVertex2f(-2.4,0);
	glEnd();

glColor3ub(205,133,63);
glBegin(GL_POLYGON);
	glVertex2f(-2.4,0.8);
	glVertex2f(-2.4,0.5);
	glVertex2f(-2.2,0.7);
	glVertex2f(-2.0,0.5);
	glVertex2f(-2.0,0.8);
	glVertex2f(-3.1,0.8);
	glEnd();

glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-2.4,0);
	glVertex2f(-2.4,0.8);
	glVertex2f(-2.0,0.8);
	glVertex2f(-2.0,0);
	glVertex2f(-2.4,0);
    glEnd();
}

///Door +3
glColor3ub(255,255,51);
glBegin(GL_POLYGON);
	glVertex2f(2.4,0);
	glVertex2f(2.4,0.8);
	glVertex2f(2.0,0.8);
	glVertex2f(2.0,0);
	glVertex2f(2.4,0);
	glEnd();

glColor3ub(205,133,63);
glBegin(GL_POLYGON);
	glVertex2f(2.4,0.8);
	glVertex2f(2.4,0.5);
	glVertex2f(2.2,0.7);
	glVertex2f(2.0,0.5);
	glVertex2f(2.0,0.8);
	glVertex2f(3.1,0.8);
	glEnd();

glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(2.4,0);
	glVertex2f(2.4,0.8);
	glVertex2f(2.0,0.8);
	glVertex2f(2.0,0);
	glVertex2f(2.4,0);
    glEnd();
}

///Door -2
glColor3ub(255,255,51);
glBegin(GL_POLYGON);
	glVertex2f(-1.7,0);
	glVertex2f(-1.7,0.8);
	glVertex2f(-1.3,0.8);
	glVertex2f(-1.3,0);
	glVertex2f(-1.7,0);
	glEnd();

glColor3ub(205,133,63);
glBegin(GL_POLYGON);
	glVertex2f(-1.7,0.8);
	glVertex2f(-1.7,0.5);
	glVertex2f(-1.5,0.7);
	glVertex2f(-1.3,0.5);
	glVertex2f(-1.3,0.8);
	glVertex2f(-1.7,0.8);
	glEnd();

glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-1.7,0);
	glVertex2f(-1.7,0.8);
	glVertex2f(-1.3,0.8);
	glVertex2f(-1.3,0);
	glVertex2f(-1.7,0);
    glEnd();
}

///Door +2
glColor3ub(255,255,51);
glBegin(GL_POLYGON);
	glVertex2f(1.7,0);
	glVertex2f(1.7,0.8);
	glVertex2f(1.3,0.8);
	glVertex2f(1.3,0);
	glVertex2f(1.7,0);
	glEnd();

glColor3ub(205,133,63);
glBegin(GL_POLYGON);
	glVertex2f(1.7,0.8);
	glVertex2f(1.7,0.5);
	glVertex2f(1.5,0.7);
	glVertex2f(1.3,0.5);
	glVertex2f(1.3,0.8);
	glVertex2f(1.7,0.8);
	glEnd();

glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(1.7,0);
	glVertex2f(1.7,0.8);
	glVertex2f(1.3,0.8);
	glVertex2f(1.3,0);
	glVertex2f(1.7,0);
    glEnd();
}

///Door -1
glColor3ub(255,255,51);
glBegin(GL_POLYGON);
	glVertex2f(-1,0);
	glVertex2f(-1,0.8);
	glVertex2f(-0.6,0.8);
	glVertex2f(-0.6,0);
	glVertex2f(-1,0);
	glEnd();

glColor3ub(205,133,63);
glBegin(GL_POLYGON);
	glVertex2f(-1.0,0.8);
	glVertex2f(-1.0,0.5);
	glVertex2f(-0.8,0.7);
	glVertex2f(-0.6,0.5);
	glVertex2f(-0.6,0.8);
	glVertex2f(-1.0,0.8);
	glEnd();

glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-1,0);
	glVertex2f(-1,0.8);
	glVertex2f(-0.6,0.8);
	glVertex2f(-0.6,0);
	glVertex2f(-1,0);
    glEnd();
}

///Door +1
glColor3ub(255,255,51);
glBegin(GL_POLYGON);
    glVertex2f(1,0);
	glVertex2f(1,0.8);
	glVertex2f(0.6,0.8);
	glVertex2f(0.6,0);
	glVertex2f(1,0);
	glEnd();

glColor3ub(205,133,63);
glBegin(GL_POLYGON);
	glVertex2f(1.0,0.8);
	glVertex2f(1.0,0.5);
	glVertex2f(0.8,0.7);
	glVertex2f(0.6,0.5);
	glVertex2f(0.6,0.8);
	glVertex2f(1.0,0.8);
	glEnd();

glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(1,0);
	glVertex2f(1,0.8);
	glVertex2f(0.6,0.8);
	glVertex2f(0.6,0);
	glVertex2f(1,0);
    glEnd();
}

///Door 0
glColor3ub(255,255,51);
glBegin(GL_POLYGON);
	glVertex2f(-0.3,0);
	glVertex2f(-0.3,1.1);
	glVertex2f(0.3,1.1);
	glVertex2f(0.3,0);
	glVertex2f(-0.3,0);
	glEnd();

glColor3ub(205,133,63);
glBegin(GL_POLYGON);
	glVertex2f(-0.3,1.1);
	glVertex2f(-0.3,0.7);
	glVertex2f(0,1);
	glVertex2f(0.3,0.7);
	glVertex2f(0.3,1.1);
	glVertex2f(-0.3,1.1);
	glEnd();

glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.3,0);
	glVertex2f(-0.3,1.1);
	glVertex2f(0.3,1.1);
	glVertex2f(0.3,0);
	glVertex2f(-0.3,0);
    glEnd();
}

///Road
glColor3ub(96,96,96);
glBegin(GL_POLYGON);
	glVertex2f(-0.3,-0.1);
	glVertex2f(-1,-4);
	glVertex2f(1,-4);
	glVertex2f(0.3,-0.1);
	glVertex2f(-0.3,-0.1);
	glEnd();

glColor3ub(96,96,96);
glBegin(GL_POLYGON);
	glVertex2f(0.3,-0.5);
	glVertex2f(0.4,-1.5);
	glVertex2f(5,-1.5);
	glVertex2f(5,-0.5);
    glVertex2f(0.3,-0.5);
	glEnd();

///Road Lines
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0,-0.3);
	glVertex2f(0,-0.6);
    glEnd();
}
glLineWidth(5.2);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0,-0.9);
	glVertex2f(0,-1.2);
    glEnd();
}
glLineWidth(5.4);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0,-1.5);
	glVertex2f(0,-1.8);
    glEnd();
}
glLineWidth(5.6);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0,-2.1);
	glVertex2f(0,-2.4);
    glEnd();
}
glLineWidth(5.8);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0,-2.7);
	glVertex2f(0,-3.0);
    glEnd();
}
glLineWidth(6.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0,-3.3);
	glVertex2f(0,-3.6);
    glEnd();
}
glLineWidth(6.2);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0,-3.9);
	glVertex2f(0,-4.2);
    glEnd();
}
glLineWidth(6.4);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0,-4.5);
	glVertex2f(0,-5.0);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.475,-1.0);
	glVertex2f(0.775,-1.0);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(1.1,-1.0);
	glVertex2f(1.4,-1.0);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(1.7,-1.0);
	glVertex2f(2.0,-1.0);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(2.3,-1.0);
	glVertex2f(2.6,-1.0);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(2.9,-1.0);
	glVertex2f(3.2,-1.0);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(3.5,-1.0);
	glVertex2f(3.8,-1.0);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(4.1,-1.0);
	glVertex2f(4.4,-1.0);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(4.7,-1.0);
	glVertex2f(5.0,-1.0);
    glEnd();
}

///Zebracrossing
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.45,-0.9);
	glVertex2f(0.75,-0.9);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.425,-0.8);
	glVertex2f(0.725,-0.8);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.4,-0.7);
	glVertex2f(0.7,-0.7);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.375,-0.6);
	glVertex2f(0.675,-0.6);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.5,-1.1);
	glVertex2f(0.8,-1.1);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.525,-1.2);
	glVertex2f(0.825,-1.2);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.55,-1.3);
	glVertex2f(0.85,-1.3);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.575,-1.4);
	glVertex2f(0.875,-1.4);
    glEnd();
}
///Dome 0
glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-0.3,1.4);
	glVertex2f(-0.3,1.4);
	glVertex2f(-0.2,1.625);
	glVertex2f(-0.1,1.725);
    glVertex2f(0.0,1.8);
    glVertex2f(0.1,1.725);
    glVertex2f(0.2,1.625);
    glVertex2f(0.3,1.4);
    glVertex2f(0.0,1.4);
    glVertex2f(-0.3,1.4);
	glEnd();
///Border
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.3,1.4);
	glVertex2f(-0.3,1.4);
	glVertex2f(-0.2,1.625);
	glVertex2f(-0.1,1.725);
    glVertex2f(0.0,1.8);
    glVertex2f(0.1,1.725);
    glVertex2f(0.2,1.625);
    glVertex2f(0.3,1.4);
    glVertex2f(0.0,1.4);
    glVertex2f(-0.3,1.4);
    glEnd();
}

///Dome +1
glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(0.350,1.375);
	glVertex2f(0.4,1.5);
	glVertex2f(0.5,1.6);
	glVertex2f(0.6,1.65);
	glVertex2f(0.7,1.7);
    glVertex2f(0.8,1.65);
	glVertex2f(0.9,1.6);
	glVertex2f(1.0,1.465);
	glVertex2f(1.050,1.325);
	glEnd();
///Border
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.350,1.375);
	glVertex2f(0.4,1.5);
	glVertex2f(0.5,1.6);
	glVertex2f(0.6,1.65);
	glVertex2f(0.7,1.7);
    glVertex2f(0.8,1.65);
	glVertex2f(0.9,1.6);
	glVertex2f(1.0,1.465);
	glVertex2f(1.050,1.325);
    glEnd();
}

///Dome +2
glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(1.1,1.325);
	glVertex2f(1.125,1.4);
	glVertex2f(1.2,1.5);
	glVertex2f(1.4,1.6);
	glVertex2f(1.55,1.5);
    glVertex2f(1.65,1.4);
	glVertex2f(1.7,1.285);
	glVertex2f(1.1,1.325);
	glEnd();
///Border
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    	glVertex2f(1.1,1.325);
	glVertex2f(1.125,1.4);
	glVertex2f(1.2,1.5);
	glVertex2f(1.4,1.6);
	glVertex2f(1.55,1.5);
    glVertex2f(1.65,1.4);
	glVertex2f(1.7,1.285);
	glVertex2f(1.1,1.325);
    glEnd();
}

///Dome +3
glColor3ub(160,82,45);
glBegin(GL_POLYGON);

	glVertex2f(1.775,1.265);
	glVertex2f(1.9,1.445);
	glVertex2f(2.1,1.55);
	glVertex2f(2.2,1.475);
    glVertex2f(2.285,1.4);
	glVertex2f(2.3,1.4);
	glVertex2f(2.4,1.225);
	glVertex2f(1.775,1.265);
	glEnd();
///Border
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(1.775,1.265);
	glVertex2f(1.9,1.445);
	glVertex2f(2.1,1.55);
	glVertex2f(2.2,1.475);
    glVertex2f(2.285,1.4);
	glVertex2f(2.3,1.4);
	glVertex2f(2.4,1.225);
	glVertex2f(1.775,1.265);
    glEnd();
}

///Dome +4
glColor3ub(160,82,45);
glBegin(GL_POLYGON);

	glVertex2f(2.5,1.215);
	glVertex2f(2.605,1.335);
	glVertex2f(2.8,1.45);
	glVertex2f(2.975,1.335);
    glVertex2f(3.1,1.165);
	glVertex2f(2.5,1.215);
	glEnd();
///Border
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(2.5,1.215);
	glVertex2f(2.605,1.335);
	glVertex2f(2.8,1.45);
	glVertex2f(2.975,1.335);
    glVertex2f(3.1,1.165);
	glVertex2f(2.5,1.215);
    glEnd();
}

///Dome +5
glColor3ub(160,82,45);
glBegin(GL_POLYGON);

	glVertex2f(3.21,1.2);
	glVertex2f(3.35,1.32);
	glVertex2f(3.5,1.4);
	glVertex2f(3.65,1.32);
    glVertex2f(3.8,1.115);
	glVertex2f(3.2,1.175);
	glEnd();
///Border
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(3.21,1.2);
	glVertex2f(3.35,1.32);
	glVertex2f(3.5,1.4);
	glVertex2f(3.65,1.32);
    glVertex2f(3.8,1.115);
	glVertex2f(3.2,1.175);
    glEnd();
}

///Dome -1
glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-0.350,1.375);
	glVertex2f(-0.4,1.5);
	glVertex2f(-0.5,1.6);
	glVertex2f(-0.6,1.65);
	glVertex2f(-0.7,1.7);
    glVertex2f(-0.8,1.65);
	glVertex2f(-0.9,1.6);
	glVertex2f(-1.0,1.465);
	glVertex2f(-1.050,1.325);
	glEnd();
///Border
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.350,1.375);
	glVertex2f(-0.4,1.5);
	glVertex2f(-0.5,1.6);
	glVertex2f(-0.6,1.65);
	glVertex2f(-0.7,1.7);
    glVertex2f(-0.8,1.65);
	glVertex2f(-0.9,1.6);
	glVertex2f(-1.0,1.465);
	glVertex2f(-1.050,1.325);
    glEnd();
}

///Dome -2
glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-1.1,1.325);
	glVertex2f(-1.125,1.4);
	glVertex2f(-1.2,1.5);
	glVertex2f(-1.4,1.6);
	glVertex2f(-1.55,1.5);
    glVertex2f(-1.65,1.4);
	glVertex2f(-1.7,1.285);
	glVertex2f(-1.1,1.325);
	glEnd();
///Border
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-1.1,1.325);
	glVertex2f(-1.125,1.4);
	glVertex2f(-1.2,1.5);
	glVertex2f(-1.4,1.6);
	glVertex2f(-1.55,1.5);
    glVertex2f(-1.65,1.4);
	glVertex2f(-1.7,1.285);
	glVertex2f(-1.1,1.325);
    glEnd();
}

///Dome -3
glColor3ub(160,82,45);
glBegin(GL_POLYGON);

	glVertex2f(-1.775,1.265);
	glVertex2f(-1.9,1.445);
	glVertex2f(-2.1,1.55);
	glVertex2f(-2.2,1.475);
    glVertex2f(-2.285,1.4);
	glVertex2f(-2.3,1.4);
	glVertex2f(-2.4,1.225);
	glVertex2f(-1.775,1.265);
	glEnd();
///Border
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-1.775,1.265);
	glVertex2f(-1.9,1.445);
	glVertex2f(-2.1,1.55);
	glVertex2f(-2.2,1.475);
    glVertex2f(-2.285,1.4);
	glVertex2f(-2.3,1.4);
	glVertex2f(-2.4,1.225);
	glVertex2f(-1.775,1.265);
    glEnd();
}

///Dome -4
glColor3ub(160,82,45);
glBegin(GL_POLYGON);

	glVertex2f(-2.5,1.215);
	glVertex2f(-2.605,1.335);
	glVertex2f(-2.8,1.45);
	glVertex2f(-2.975,1.335);
    glVertex2f(-3.1,1.165);
	glVertex2f(-2.5,1.215);
	glEnd();
///Border
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-2.5,1.215);
	glVertex2f(-2.605,1.335);
	glVertex2f(-2.8,1.45);
	glVertex2f(-2.975,1.335);
    glVertex2f(-3.1,1.165);
	glVertex2f(-2.5,1.215);
    glEnd();
}

///Dome -5
glColor3ub(160,82,45);
glBegin(GL_POLYGON);

	glVertex2f(-3.21,1.2);
	glVertex2f(-3.35,1.32);
	glVertex2f(-3.5,1.4);
	glVertex2f(-3.65,1.32);
    glVertex2f(-3.8,1.115);
	glVertex2f(-3.2,1.175);
	glEnd();
///Border
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-3.21,1.2);
	glVertex2f(-3.35,1.32);
	glVertex2f(-3.5,1.4);
	glVertex2f(-3.65,1.32);
    glVertex2f(-3.8,1.115);
	glVertex2f(-3.2,1.175);
    glEnd();
}

///Fence
glColor3ub(192,192,192);
glBegin(GL_POLYGON);

	glVertex2f(-5,-1);
	glVertex2f(-3.5,-1);
	glVertex2f(-3.7,-1.2);
	glVertex2f(-5,-1.2);
    glVertex2f(-5,-1);
	glEnd();
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-5,-1);
	glVertex2f(-3.5,-1);
	glVertex2f(-3.7,-1.2);
	glVertex2f(-5,-1.2);
    glVertex2f(-5,-1);
    glEnd();
}

glColor3ub(192,192,192);
glBegin(GL_POLYGON);

	glVertex2f(-3.5,-1);
	glVertex2f(-5,-2.5);
	glVertex2f(-5,-2.7);
	glVertex2f(-3.5,-1.2);
    glVertex2f(-3.5,-1);
	glEnd();
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-3.5,-1);
	glVertex2f(-5,-2.5);
	glVertex2f(-5,-2.7);
	glVertex2f(-3.5,-1.2);
    glVertex2f(-3.5,-1);
    glEnd();
}

glColor3ub(244,164,96);
glBegin(GL_POLYGON);

	glVertex2f(-5,-1.2);
	glVertex2f(-3.7,-1.2);
	glVertex2f(-5,-2.5);
	glVertex2f(-5,-1.2);
	glEnd();
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.9,-1);
	glVertex2f(-4.9,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.8,-1);
	glVertex2f(-4.8,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.7,-1);
	glVertex2f(-4.7,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.6,-1);
	glVertex2f(-4.6,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.5,-1);
	glVertex2f(-4.5,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.4,-1);
	glVertex2f(-4.4,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.3,-1);
	glVertex2f(-4.3,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.2,-1);
	glVertex2f(-4.2,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.1,-1);
	glVertex2f(-4.1,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4,-1);
	glVertex2f(-4,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-3.9,-1);
	glVertex2f(-3.9,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-3.8,-1);
	glVertex2f(-3.8,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-3.7,-1);
	glVertex2f(-3.7,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-3.6,-1);
	glVertex2f(-3.6,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-3.5,-1);
	glVertex2f(-3.5,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.9,-2.4);
	glVertex2f(-4.9,-2.1);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.8,-2.3);
	glVertex2f(-4.8,-2.0);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.7,-2.2);
	glVertex2f(-4.7,-1.9);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.6,-2.1);
	glVertex2f(-4.6,-1.8);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.5,-2);
	glVertex2f(-4.5,-1.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.4,-1.9);
	glVertex2f(-4.4,-1.6);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.3,-1.8);
	glVertex2f(-4.3,-1.5);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.2,-1.7);
	glVertex2f(-4.2,-1.4);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.1,-1.6);
	glVertex2f(-4.1,-1.3);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4,-1.5);
	glVertex2f(-4,-1.2);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-3.9,-1.4);
	glVertex2f(-3.9,-1.1);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-3.8,-1.3);
	glVertex2f(-3.8,-1);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-3.7,-1.2);
	glVertex2f(-3.7,-0.9);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-3.6,-1.1);
	glVertex2f(-3.6,-0.8);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-5,-0.9);
	glVertex2f(-3.5,-0.9);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-5,-0.8);
	glVertex2f(-3.5,-0.8);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
	glVertex2f(-3.5,-0.8);
	glVertex2f(-5,-2.3);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
	glVertex2f(-3.5,-0.9);
	glVertex2f(-5,-2.4);
    glEnd();
}

///Light 1
    glColor3ub(214, 214, 194);
    glBegin(GL_QUADS);
    glVertex2f(-0.5f,-0.9f);
    glVertex2f(-0.6f,-0.9f);
    glVertex2f(-0.6f,-0.3f);
    glVertex2f(-0.5f,-0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.5f,-0.4f);
    glVertex2f(-0.3f,-0.4f);
    glVertex2f(-0.3f,-0.3f);
    glVertex2f(-0.5f,-0.3f);
    glEnd();



    glBegin(GL_TRIANGLES);
    glVertex2f(-0.4f,-0.5f);
    glVertex2f(-0.2f,-0.5f);
    glVertex2f(-0.3f,-0.4f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.4f,-0.9f);
    glVertex2f(-0.2f,-0.9f);
    glVertex2f(-0.3f,-0.5f);
    glEnd();

///Light 2
    glColor3ub(214, 214, 194);
    glBegin(GL_QUADS);
    glVertex2f(-0.7f,-1.9f);
    glVertex2f(-0.8f,-1.9f);
    glVertex2f(-0.8f,-1.3f);
    glVertex2f(-0.7f,-1.3f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.7f,-1.4f);
    glVertex2f(-0.5f,-1.4f);
    glVertex2f(-0.5f,-1.3f);
    glVertex2f(-0.7f,-1.3f);
    glEnd();



    glBegin(GL_TRIANGLES);
    glVertex2f(-0.6f,-1.5f);
    glVertex2f(-0.4f,-1.5f);
    glVertex2f(-0.5f,-1.4f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.6f,-1.9f);
    glVertex2f(-0.4f,-1.9f);
    glVertex2f(-0.5f,-1.5f);
    glEnd();

///Light 3
glColor3ub(214, 214, 194);
    glBegin(GL_QUADS);
    glVertex2f(-0.85f,-2.9f);
    glVertex2f(-0.95f,-2.9f);
    glVertex2f(-0.95f,-2.3f);
    glVertex2f(-0.85f,-2.3f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.85f,-2.4f);
    glVertex2f(-0.65f,-2.4f);
    glVertex2f(-0.65f,-2.3f);
    glVertex2f(-0.85f,-2.3f);
    glEnd();



    glBegin(GL_TRIANGLES);
    glVertex2f(-0.75f,-2.5f);
    glVertex2f(-0.55f,-2.5f);
    glVertex2f(-0.65f,-2.4f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.75f,-2.9f);
    glVertex2f(-0.55f,-2.9f);
    glVertex2f(-0.65f,-2.5f);
    glEnd();

///Light 4
    glColor3ub(214, 214, 194);
    glBegin(GL_QUADS);
    glVertex2f(0.65f,-1.9f);
    glVertex2f(0.75f,-1.9f);
    glVertex2f(0.75f,-1.3f);
    glVertex2f(0.65f,-1.3f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.65f,-1.4f);
    glVertex2f(0.45f,-1.4f);
    glVertex2f(0.45f,-1.3f);
    glVertex2f(0.65f,-1.3f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glVertex2f(0.55f,-1.5f);
    glVertex2f(0.35f,-1.5f);
    glVertex2f(0.45f,-1.4f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 0);
    glVertex2f(0.55f,-1.9f);
    glVertex2f(0.35f,-1.9f);
    glVertex2f(0.45f,-1.5f);
    glEnd();

///Light 5
    glColor3ub(214, 214, 194);
    glBegin(GL_QUADS);
    glVertex2f(0.85f,-2.9f);
    glVertex2f(0.95f,-2.9f);
    glVertex2f(0.95f,-2.3f);
    glVertex2f(0.85f,-2.3f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.85f,-2.4f);
    glVertex2f(0.65f,-2.4f);
    glVertex2f(0.65f,-2.3f);
    glVertex2f(0.85f,-2.3f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glVertex2f(0.75f,-2.5f);
    glVertex2f(0.55f,-2.5f);
    glVertex2f(0.65f,-2.4f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 0);
    glVertex2f(0.75f,-2.9f);
    glVertex2f(0.55f,-2.9f);
    glVertex2f(0.65f,-2.5f);
    glEnd();

///Light 6
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 0);
    glVertex2f(1.45f,-1.3f);
    glVertex2f(1.75f,-1.3f);
    glVertex2f(1.6f,-1.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);
    glVertex2f(1.65f,-1.7f);
    glVertex2f(1.75f,-1.7f);
    glVertex2f(1.75f,-1.1f);
    glVertex2f(1.65f,-1.1f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);
    glVertex2f(1.65f,-1.1f);
    glVertex2f(1.75f,-1.1f);
    glVertex2f(1.65f,-0.9f);
    glVertex2f(1.55f,-0.9f);
    glEnd();

///Light 7
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 0);
    glVertex2f(2.45f,-1.3f);
    glVertex2f(2.75f,-1.3f);
    glVertex2f(2.6f,-1.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);
    glVertex2f(2.65f,-1.7f);
    glVertex2f(2.75f,-1.7f);
    glVertex2f(2.75f,-1.1f);
    glVertex2f(2.65f,-1.1f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);
    glVertex2f(2.65f,-1.1f);
    glVertex2f(2.75f,-1.1f);
    glVertex2f(2.65f,-0.9f);
    glVertex2f(2.55f,-0.9f);
    glEnd();

///Light 8
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 0);
    glVertex2f(3.45f,-1.3f);
    glVertex2f(3.75f,-1.3f);
    glVertex2f(3.6f,-1.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);
    glVertex2f(3.65f,-1.7f);
    glVertex2f(3.75f,-1.7f);
    glVertex2f(3.75f,-1.1f);
    glVertex2f(3.65f,-1.1f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);
    glVertex2f(3.65f,-1.1f);
    glVertex2f(3.75f,-1.1f);
    glVertex2f(3.65f,-0.9f);
    glVertex2f(3.55f,-0.9f);
    glEnd();

///Light 9
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 0);
    glVertex2f(4.45f,-1.3f);
    glVertex2f(4.75f,-1.3f);
    glVertex2f(4.6f,-1.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);
    glVertex2f(4.65f,-1.7f);
    glVertex2f(4.75f,-1.7f);
    glVertex2f(4.75f,-1.1f);
    glVertex2f(4.65f,-1.1f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);
    glVertex2f(4.65f,-1.1f);
    glVertex2f(4.75f,-1.1f);
    glVertex2f(4.65f,-0.9f);
    glVertex2f(4.55f,-0.9f);
    glEnd();

glPopMatrix();

glFlush ();
}

void displayDayToNight(int value)
{
    glutDisplayFunc(myDisplayNight);
}


void myDisplayDay(void)
{
	glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
gluOrtho2D(-5,5,-4,4);

///sky
glColor3ub(128, 255, 255);
	glBegin(GL_QUADS);
	glVertex2f(-5,4);
	glVertex2f(-5,0);
	glVertex2f(5,0);
	glVertex2f(5,4);
	glEnd();
	 int i1;
///Sun
    glPushMatrix();
    glTranslatef(0.0f,positionSun, 0.0f);
	GLfloat x1=2.5; GLfloat y1=3.5; GLfloat radius1 =.4f;
	int triangleAmount = 100; //# of triangles used to draw circle

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(235,31,31);
		glVertex2f(x1, y1); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            x1 + (radius1 * cos(i1 *  twicePi / triangleAmount)),
			    y1 + (radius1 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();

///clouds
  glPushMatrix();
  glTranslatef(positionCloud,0.0, 0.0f);
  GLfloat global_ambient2[] = {3.5,3.5,3.5, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient2);

	GLfloat x2=-2.5; GLfloat y2=3.5; GLfloat radius2 =.3f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(224,255,255);
		glVertex2f(x2, y2); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            x2 + (radius2 * cos(i1 *  twicePi / triangleAmount)),
			    y2 + (radius2 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x3=-2.9; GLfloat y3=3.3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(224,255,255);
		glVertex2f(x3, y3); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            x3 + (radius2 * cos(i1 *  twicePi / triangleAmount)),
			    y3 + (radius2 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x4=-2.65; GLfloat y4=2.95;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(224,255,255);
		glVertex2f(x4, y4); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            x4 + (radius2 * cos(i1 *  twicePi / triangleAmount)),
			    y4 + (radius2 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();


    GLfloat x5=2; GLfloat y5=3.4;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(224,255,255);
		glVertex2f(x5, y5); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            x5 + (radius2 * cos(i1 *  twicePi / triangleAmount)),
			    y5 + (radius2 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x6=2.26; GLfloat y6=3.04;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(224,255,255);
		glVertex2f(x6, y6); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            x6 + (radius2 * cos(i1 *  twicePi / triangleAmount)),
			    y6 + (radius2 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x7=1.8; GLfloat y7=3;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(224,255,255);
		glVertex2f(x7, y7); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            x7 + (radius2 * cos(i1 *  twicePi / triangleAmount)),
			    y7 + (radius2 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x8=-2.2; GLfloat y8=3.2;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(224,255,255);
		glVertex2f(x8, y8); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            x8 + (radius2 * cos(i1 *  twicePi / triangleAmount)),
			    y8 + (radius2 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat x9=1.6; GLfloat y9=3.4;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(224,255,255);
		glVertex2f(x9, y9); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            x9 + (radius2 * cos(i1 *  twicePi / triangleAmount)),
			    y9 + (radius2 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();
glPopMatrix();

///Tree
    glColor3ub(90,22,22);
    glBegin(GL_POLYGON);
	glVertex2f(-0.15,2.1);
	glVertex2f(-0.15,1.5);
	glVertex2f(-0.05,1.5);
	glVertex2f(-0.05,2.1);
	glVertex2f(-0.15,2.1);
	glEnd();

GLfloat xt1=-0.3; GLfloat yt1=2.1; GLfloat radiust1 =.2f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,128,0);
		glVertex2f(xt1, yt1); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            xt1 + (radiust1 * cos(i1 *  twicePi / triangleAmount)),
			    yt1 + (radiust1 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat xt2=-0.1; GLfloat yt2=2.3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,128,0);
		glVertex2f(xt2, yt2); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            xt2 + (radiust1 * cos(i1 *  twicePi / triangleAmount)),
			    yt2 + (radiust1 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat xt3=0.1; GLfloat yt3=2.1;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,128,0);
		glVertex2f(xt3, yt3); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            xt3 + (radiust1 * cos(i1 *  twicePi / triangleAmount)),
			    yt3 + (radiust1 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();
///Tree2
    glColor3ub(90,22,22);
    glBegin(GL_POLYGON);
	glVertex2f(0.65,2.1);
	glVertex2f(0.65,1.5);
	glVertex2f(0.55,1.5);
	glVertex2f(0.55,2.1);
	glVertex2f(0.65,2.1);
	glEnd();

GLfloat xt4=0.4; GLfloat yt4=2.0; GLfloat radiust2 =.2f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,128,0);
		glVertex2f(xt4, yt4); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            xt4 + (radiust2 * cos(i1 *  twicePi / triangleAmount)),
			    yt4 + (radiust2 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat xt5=0.6; GLfloat yt5=2.2;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,128,0);
		glVertex2f(xt5, yt5); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            xt5 + (radiust2 * cos(i1 *  twicePi / triangleAmount)),
			        yt5 + (radiust2 * sin(i1 * twicePi / triangleAmount))
			         );
		}
	glEnd();

	GLfloat xt6=0.8; GLfloat yt6=2.0;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,128,0);
		glVertex2f(xt6, yt6); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            xt6 + (radiust2 * cos(i1 *  twicePi / triangleAmount)),
			    yt6 + (radiust2 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();
///Tree3
    glColor3ub(90,22,22);
    glBegin(GL_POLYGON);
	glVertex2f(-0.75,2.1);
	glVertex2f(-0.75,1.5);
	glVertex2f(-0.65,1.5);
	glVertex2f(-0.65,2.1);
	glVertex2f(-0.75,2.1);
	glEnd();

GLfloat xt7=-0.5; GLfloat yt7=2.0; GLfloat radiust3 =.2f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,128,0);
		glVertex2f(xt7, yt7); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            xt7 + (radiust3 * cos(i1 *  twicePi / triangleAmount)),
			    yt7 + (radiust3 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat xt8=-0.7; GLfloat yt8=2.2;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,128,0);
		glVertex2f(xt8, yt8); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            xt8 + (radiust3 * cos(i1 *  twicePi / triangleAmount)),
			        yt8 + (radiust3 * sin(i1 * twicePi / triangleAmount))
			         );
		}
	glEnd();

	GLfloat xt9=-0.9; GLfloat yt9=2.0;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,128,0);
		glVertex2f(xt9, yt9); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            xt9 + (radiust3 * cos(i1 *  twicePi / triangleAmount)),
			    yt9 + (radiust3 * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();

///Tree 4
    glColor3ub(90,22,22);
    glBegin(GL_POLYGON);
	glVertex2f(2.85,1.8);
	glVertex2f(2.85,1.2);
	glVertex2f(2.95,1.2);
	glVertex2f(2.95,1.8);
	glVertex2f(2.85,1.8);
	glEnd();

	glColor3ub(0,153,0);
    glBegin(GL_POLYGON);
	glVertex2f(2.55,1.7);
	glVertex2f(2.90,1.9);
	glVertex2f(3.25,1.7);
	glVertex2f(2.65,1.7);
	glEnd();

	glColor3ub(0,153,0);
    glBegin(GL_POLYGON);
	glVertex2f(2.6,1.8);
	glVertex2f(2.90,2.0);
	glVertex2f(3.2,1.8);
	glVertex2f(2.6,1.8);
	glEnd();

	glColor3ub(0,153,0);
    glBegin(GL_POLYGON);
	glVertex2f(2.65,1.9);
	glVertex2f(2.90,2.1);
	glVertex2f(3.15,1.9);
	glVertex2f(2.65,1.9);
	glEnd();

///Tree5
    glColor3ub(90,22,22);
    glBegin(GL_POLYGON);
	glVertex2f(-2.85,1.8);
	glVertex2f(-2.85,1.2);
	glVertex2f(-2.95,1.2);
	glVertex2f(-2.95,1.8);
	glVertex2f(-2.85,1.8);
	glEnd();

	glColor3ub(0,153,0);
    glBegin(GL_POLYGON);
	glVertex2f(-2.55,1.7);
	glVertex2f(-2.90,1.9);
	glVertex2f(-3.25,1.7);
	glVertex2f(-2.55,1.7);
	glEnd();

	glColor3ub(0,153,0);
    glBegin(GL_POLYGON);
	glVertex2f(-2.6,1.8);
	glVertex2f(-2.90,2.0);
	glVertex2f(-3.2,1.8);
	glVertex2f(-2.6,1.8);
	glEnd();

	glColor3ub(0,153,0);
    glBegin(GL_POLYGON);
	glVertex2f(-2.65,1.9);
	glVertex2f(-2.90,2.1);
	glVertex2f(-3.15,1.9);
	glVertex2f(-2.65,1.9);
	glEnd();

///Tree 6
glColor3ub(90,22,22);
    glBegin(GL_POLYGON);
	glVertex2f(3.55,1.8);
	glVertex2f(3.55,1.2);
	glVertex2f(3.65,1.2);
	glVertex2f(3.65,1.8);
	glVertex2f(3.55,1.8);
	glEnd();

	glColor3ub(0,153,0);
    glBegin(GL_POLYGON);
	glVertex2f(3.25,1.65);
	glVertex2f(3.60,1.85);
	glVertex2f(3.95,1.65);
	glVertex2f(3.25,1.65);
	glEnd();

	glColor3ub(0,153,0);
    glBegin(GL_POLYGON);
	glVertex2f(3.3,1.75);
	glVertex2f(3.60,1.95);
	glVertex2f(3.9,1.75);
	glVertex2f(3.3,1.75);
	glEnd();

	glColor3ub(0,153,0);
    glBegin(GL_POLYGON);
	glVertex2f(3.35,1.85);
	glVertex2f(3.60,2.05);
	glVertex2f(3.85,1.85);
	glVertex2f(3.35,1.85);
	glEnd();

///Tree 7
glColor3ub(90,22,22);
    glBegin(GL_POLYGON);
	glVertex2f(-3.55,1.8);
	glVertex2f(-3.55,1.2);
	glVertex2f(-3.65,1.2);
	glVertex2f(-3.65,1.8);
	glVertex2f(-3.55,1.8);
	glEnd();

	glColor3ub(0,153,0);
    glBegin(GL_POLYGON);
	glVertex2f(-3.25,1.65);
	glVertex2f(-3.60,1.85);
	glVertex2f(-3.95,1.65);
	glVertex2f(-3.25,1.65);
	glEnd();

	glColor3ub(0,153,0);
    glBegin(GL_POLYGON);
	glVertex2f(-3.3,1.75);
	glVertex2f(-3.60,1.95);
	glVertex2f(-3.9,1.75);
	glVertex2f(-3.3,1.75);
	glEnd();

	glColor3ub(0,153,0);
    glBegin(GL_POLYGON);
	glVertex2f(-3.35,1.85);
	glVertex2f(-3.60,2.05);
	glVertex2f(-3.85,1.85);
	glVertex2f(-3.35,1.85);
	glEnd();


///Field
    glColor3ub(50,205,50);
    glBegin(GL_POLYGON);
	glVertex2f(-5,0);
	glVertex2f(5,0);
	glVertex2f(5,-4);
	glVertex2f(-5,-4);
	glVertex2f(-5,0);
	glEnd();



///Mosque
///center Structure
glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-4,0);
	glVertex2f(-4,1);
	glVertex2f(0,1.3);
	glVertex2f(4,1);
	glVertex2f(4,0);
	glVertex2f(-4,0);
	glEnd();

glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-3.9,1);
	glVertex2f(-3.9,1.1);
	glVertex2f(-0,1.4);
	glVertex2f(3.9,1.1);
	glVertex2f(3.9,1);
	glVertex2f(-0,1.3);
	glVertex2f(-3.9,1);
	glEnd();

glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-5,0);
	glVertex2f(-5,-0.1);
	glVertex2f(5,-0.1);
	glVertex2f(5,0);
	glVertex2f(-5,0);
	glEnd();

///black border
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
   glVertex2f(-4,0);
	glVertex2f(-4,1);
	glVertex2f(0,1.3);
	glVertex2f(4,1);
	glVertex2f(4,0);
	glVertex2f(-4,0);
    glEnd();
}
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
  glVertex2f(-3.9,1);
	glVertex2f(-3.9,1.1);
	glVertex2f(-0,1.4);
	glVertex2f(3.9,1.1);
	glVertex2f(3.9,1);
	glVertex2f(-0,1.3);
	glVertex2f(-3.9,1);
    glEnd();
}
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
 glVertex2f(-5,0);
	glVertex2f(-5,-0.1);
	glVertex2f(5,-0.1);
	glVertex2f(5,0);
	glVertex2f(-5,0);
    glEnd();
}
///Left Pillar
glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-4,0);
	glVertex2f(-4.5,0);
	glVertex2f(-4.5,1);
	glVertex2f(-4,1);
	glVertex2f(-4,0);
	glEnd();

glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-3.9,1);
	glVertex2f(-4.6,1);
	glVertex2f(-4.6,1.2);
	glVertex2f(-4.5,1.2);
	glVertex2f(-4.5,1.1);
	glVertex2f(-4,1.1);
	glVertex2f(-4,1.2);
	glVertex2f(-3.9,1.2);
	glVertex2f(-3.9,1);
	glEnd();

glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-4,1.1);
	glVertex2f(-4.5,1.1);
	glVertex2f(-4.5,1.5);
	glVertex2f(-4,1.5);
	glVertex2f(-4,1.1);
	glEnd();

glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-4.6,1.5);
	glVertex2f(-4.7,1.6);
	glVertex2f(-3.8,1.6);
	glVertex2f(-3.9,1.5);
	glVertex2f(-4.6,1.5);
	glEnd();

glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-4.6,1.6);
	glVertex2f(-4.6,1.7);
	glVertex2f(-4.5,1.8);
	glVertex2f(-4.4,1.9);
	glVertex2f(-4.25,2.0);
	glVertex2f(-4.1,1.9);
	glVertex2f(-4.0,1.8);
	glVertex2f(-3.9,1.7);
	glVertex2f(-3.9,1.6);
	glVertex2f(-4.6,1.6);
	glEnd();

///black border
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4,0);
	glVertex2f(-4.5,0);
	glVertex2f(-4.5,1);
	glVertex2f(-4,1);
	glVertex2f(-4,0);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-3.9,1);
	glVertex2f(-4.6,1);
	glVertex2f(-4.6,1.2);
	glVertex2f(-4.5,1.2);
	glVertex2f(-4.5,1.1);
	glVertex2f(-4,1.1);
	glVertex2f(-4,1.2);
	glVertex2f(-3.9,1.2);
	glVertex2f(-3.9,1);
	glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4,1.1);
	glVertex2f(-4.5,1.1);
	glVertex2f(-4.5,1.5);
	glVertex2f(-4,1.5);
	glVertex2f(-4,1.1);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.6,1.5);
	glVertex2f(-4.7,1.6);
	glVertex2f(-3.8,1.6);
	glVertex2f(-3.9,1.5);
	glVertex2f(-4.6,1.5);
    glEnd();
}
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.6,1.6);
	glVertex2f(-4.6,1.7);
	glVertex2f(-4.5,1.8);
	glVertex2f(-4.4,1.9);
	glVertex2f(-4.25,2.0);
	glVertex2f(-4.1,1.9);
	glVertex2f(-4.0,1.8);
	glVertex2f(-3.9,1.7);
	glVertex2f(-3.9,1.6);
	glVertex2f(-4.6,1.6);
    glEnd();
}

/// Right Pillar
glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(4,0);
	glVertex2f(4.5,0);
	glVertex2f(4.5,1);
	glVertex2f(4,1);
	glEnd();

glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(3.9,1);
	glVertex2f(4.6,1);
	glVertex2f(4.6,1.2);
	glVertex2f(4.5,1.2);
	glVertex2f(4.5,1.1);
	glVertex2f(4,1.1);
	glVertex2f(4,1.2);
	glVertex2f(3.9,1.2);
	glVertex2f(3.9,1);
	glEnd();

glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(4,1.1);
	glVertex2f(4.5,1.1);
	glVertex2f(4.5,1.5);
	glVertex2f(4,1.5);
	glVertex2f(4,1.1);
	glEnd();

glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(4.6,1.5);
	glVertex2f(4.7,1.6);
	glVertex2f(3.8,1.6);
	glVertex2f(3.9,1.5);
	glVertex2f(4.6,1.5);
	glEnd();

glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(4.6,1.6);
	glVertex2f(4.6,1.7);
	glVertex2f(4.5,1.8);
	glVertex2f(4.4,1.9);
	glVertex2f(4.25,2.0);
	glVertex2f(4.1,1.9);
	glVertex2f(4.0,1.8);
	glVertex2f(3.9,1.7);
	glVertex2f(3.9,1.6);
	glVertex2f(4.6,1.6);
	glEnd();


///black border
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(4,0);
	glVertex2f(4.5,0);
	glVertex2f(4.5,1);
	glVertex2f(4,1);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  	glVertex2f(3.9,1);
	glVertex2f(4.6,1);
	glVertex2f(4.6,1.2);
	glVertex2f(4.5,1.2);
	glVertex2f(4.5,1.1);
	glVertex2f(4,1.1);
	glVertex2f(4,1.2);
	glVertex2f(3.9,1.2);
	glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(4,1.1);
	glVertex2f(4.5,1.1);
	glVertex2f(4.5,1.5);
	glVertex2f(4,1.5);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(4.6,1.5);
	glVertex2f(4.7,1.6);
	glVertex2f(3.8,1.6);
	glVertex2f(3.9,1.5);
	glVertex2f(4.6,1.5);
    glEnd();
}
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(4.6,1.6);
	glVertex2f(4.6,1.7);
	glVertex2f(4.5,1.8);
	glVertex2f(4.4,1.9);
	glVertex2f(4.25,2.0);
	glVertex2f(4.1,1.9);
	glVertex2f(4.0,1.8);
	glVertex2f(3.9,1.7);
	glVertex2f(3.9,1.6);
	glVertex2f(4.6,1.6);
    glEnd();
}

///Left window
glColor3ub(0,0,0);
glBegin(GL_POLYGON);
	glVertex2f(-4.2,1.2);
	glVertex2f(-4.3,1.2);
	glVertex2f(-4.3,1.4);
	glVertex2f(-4.2,1.4);
	glVertex2f(-4.2,1.2);
	glEnd();
///Right window
glColor3ub(0,0,0);
glBegin(GL_POLYGON);
	glVertex2f(4.2,1.2);
	glVertex2f(4.3,1.2);
	glVertex2f(4.3,1.4);
	glVertex2f(4.2,1.4);
	glVertex2f(4.2,1.2);
	glEnd();

///Door -5
glColor3ub(0,0,0);
glBegin(GL_POLYGON);
	glVertex2f(-3.8,0);
	glVertex2f(-3.8,0.8);
	glVertex2f(-3.4,0.8);
	glVertex2f(-3.4,0);
	glVertex2f(-3.8,0);
	glEnd();

glColor3ub(205,133,63);
glBegin(GL_POLYGON);
	glVertex2f(-3.8,0.8);
	glVertex2f(-3.8,0.5);
	glVertex2f(-3.6,0.7);
	glVertex2f(-3.4,0.5);
	glVertex2f(-3.4,0.8);
	glVertex2f(-3.8,0.8);
	glEnd();

glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-3.8,0);
	glVertex2f(-3.8,0.8);
	glVertex2f(-3.4,0.8);
	glVertex2f(-3.4,0);
	glVertex2f(-3.8,0);
    glEnd();
}

///Door +5
glColor3ub(0,0,0);
glBegin(GL_POLYGON);
	glVertex2f(3.8,0);
	glVertex2f(3.8,0.8);
	glVertex2f(3.4,0.8);
	glVertex2f(3.4,0);
	glVertex2f(3.8,0);
	glEnd();

glColor3ub(205,133,63);
glBegin(GL_POLYGON);
	glVertex2f(3.8,0.8);
	glVertex2f(3.8,0.5);
	glVertex2f(3.6,0.7);
	glVertex2f(3.4,0.5);
	glVertex2f(3.4,0.8);
	glVertex2f(3.8,0.8);
	glEnd();

glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(3.8,0);
	glVertex2f(3.8,0.8);
	glVertex2f(3.4,0.8);
	glVertex2f(3.4,0);
	glVertex2f(3.8,0);
    glEnd();
}

///Door -4
glColor3ub(0,0,0);
glBegin(GL_POLYGON);
	glVertex2f(-3.1,0);
	glVertex2f(-3.1,0.8);
	glVertex2f(-2.7,0.8);
	glVertex2f(-2.7,0);
	glVertex2f(-3.1,0);
	glEnd();

glColor3ub(205,133,63);
glBegin(GL_POLYGON);
	glVertex2f(-3.1,0.8);
	glVertex2f(-3.1,0.5);
	glVertex2f(-2.9,0.7);
	glVertex2f(-2.7,0.5);
	glVertex2f(-2.7,0.8);
	glVertex2f(-3.1,0.8);
	glEnd();

glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-3.1,0);
	glVertex2f(-3.1,0.8);
	glVertex2f(-2.7,0.8);
	glVertex2f(-2.7,0);
	glVertex2f(-3.1,0);
    glEnd();
}

///Door +4
glColor3ub(0,0,0);
glBegin(GL_POLYGON);
	glVertex2f(3.1,0);
	glVertex2f(3.1,0.8);
	glVertex2f(2.7,0.8);
	glVertex2f(2.7,0);
	glVertex2f(3.1,0);
	glEnd();

glColor3ub(205,133,63);
glBegin(GL_POLYGON);
	glVertex2f(3.1,0.8);
	glVertex2f(3.1,0.5);
	glVertex2f(2.9,0.7);
	glVertex2f(2.7,0.5);
	glVertex2f(2.7,0.8);
	glVertex2f(3.1,0.8);
	glEnd();

glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(3.1,0);
	glVertex2f(3.1,0.8);
	glVertex2f(2.7,0.8);
	glVertex2f(2.7,0);
	glVertex2f(3.1,0);
    glEnd();
}

///Door -3
glColor3ub(0,0,0);
glBegin(GL_POLYGON);
	glVertex2f(-2.4,0);
	glVertex2f(-2.4,0.8);
	glVertex2f(-2.0,0.8);
	glVertex2f(-2.0,0);
	glVertex2f(-2.4,0);
	glEnd();

glColor3ub(205,133,63);
glBegin(GL_POLYGON);
	glVertex2f(-2.4,0.8);
	glVertex2f(-2.4,0.5);
	glVertex2f(-2.2,0.7);
	glVertex2f(-2.0,0.5);
	glVertex2f(-2.0,0.8);
	glVertex2f(-3.1,0.8);
	glEnd();

glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-2.4,0);
	glVertex2f(-2.4,0.8);
	glVertex2f(-2.0,0.8);
	glVertex2f(-2.0,0);
	glVertex2f(-2.4,0);
    glEnd();
}

///Door +3
glColor3ub(0,0,0);
glBegin(GL_POLYGON);
	glVertex2f(2.4,0);
	glVertex2f(2.4,0.8);
	glVertex2f(2.0,0.8);
	glVertex2f(2.0,0);
	glVertex2f(2.4,0);
	glEnd();

glColor3ub(205,133,63);
glBegin(GL_POLYGON);
	glVertex2f(2.4,0.8);
	glVertex2f(2.4,0.5);
	glVertex2f(2.2,0.7);
	glVertex2f(2.0,0.5);
	glVertex2f(2.0,0.8);
	glVertex2f(3.1,0.8);
	glEnd();

glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(2.4,0);
	glVertex2f(2.4,0.8);
	glVertex2f(2.0,0.8);
	glVertex2f(2.0,0);
	glVertex2f(2.4,0);
    glEnd();
}

///Door -2
glColor3ub(0,0,0);
glBegin(GL_POLYGON);
	glVertex2f(-1.7,0);
	glVertex2f(-1.7,0.8);
	glVertex2f(-1.3,0.8);
	glVertex2f(-1.3,0);
	glVertex2f(-1.7,0);
	glEnd();

glColor3ub(205,133,63);
glBegin(GL_POLYGON);
	glVertex2f(-1.7,0.8);
	glVertex2f(-1.7,0.5);
	glVertex2f(-1.5,0.7);
	glVertex2f(-1.3,0.5);
	glVertex2f(-1.3,0.8);
	glVertex2f(-1.7,0.8);
	glEnd();

glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-1.7,0);
	glVertex2f(-1.7,0.8);
	glVertex2f(-1.3,0.8);
	glVertex2f(-1.3,0);
	glVertex2f(-1.7,0);
    glEnd();
}

///Door +2
glColor3ub(0,0,0);
glBegin(GL_POLYGON);
	glVertex2f(1.7,0);
	glVertex2f(1.7,0.8);
	glVertex2f(1.3,0.8);
	glVertex2f(1.3,0);
	glVertex2f(1.7,0);
	glEnd();

glColor3ub(205,133,63);
glBegin(GL_POLYGON);
	glVertex2f(1.7,0.8);
	glVertex2f(1.7,0.5);
	glVertex2f(1.5,0.7);
	glVertex2f(1.3,0.5);
	glVertex2f(1.3,0.8);
	glVertex2f(1.7,0.8);
	glEnd();

glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(1.7,0);
	glVertex2f(1.7,0.8);
	glVertex2f(1.3,0.8);
	glVertex2f(1.3,0);
	glVertex2f(1.7,0);
    glEnd();
}

///Door -1
glColor3ub(0,0,0);
glBegin(GL_POLYGON);
	glVertex2f(-1,0);
	glVertex2f(-1,0.8);
	glVertex2f(-0.6,0.8);
	glVertex2f(-0.6,0);
	glVertex2f(-1,0);
	glEnd();

glColor3ub(205,133,63);
glBegin(GL_POLYGON);
	glVertex2f(-1.0,0.8);
	glVertex2f(-1.0,0.5);
	glVertex2f(-0.8,0.7);
	glVertex2f(-0.6,0.5);
	glVertex2f(-0.6,0.8);
	glVertex2f(-1.0,0.8);
	glEnd();

glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-1,0);
	glVertex2f(-1,0.8);
	glVertex2f(-0.6,0.8);
	glVertex2f(-0.6,0);
	glVertex2f(-1,0);
    glEnd();
}

///Door +1
glColor3ub(0,0,0);
glBegin(GL_POLYGON);
    glVertex2f(1,0);
	glVertex2f(1,0.8);
	glVertex2f(0.6,0.8);
	glVertex2f(0.6,0);
	glVertex2f(1,0);
	glEnd();

glColor3ub(205,133,63);
glBegin(GL_POLYGON);
	glVertex2f(1.0,0.8);
	glVertex2f(1.0,0.5);
	glVertex2f(0.8,0.7);
	glVertex2f(0.6,0.5);
	glVertex2f(0.6,0.8);
	glVertex2f(1.0,0.8);
	glEnd();

glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(1,0);
	glVertex2f(1,0.8);
	glVertex2f(0.6,0.8);
	glVertex2f(0.6,0);
	glVertex2f(1,0);
    glEnd();
}

///Door 0
glColor3ub(0,0,0);
glBegin(GL_POLYGON);
	glVertex2f(-0.3,0);
	glVertex2f(-0.3,1.1);
	glVertex2f(0.3,1.1);
	glVertex2f(0.3,0);
	glVertex2f(-0.3,0);
	glEnd();

glColor3ub(205,133,63);
glBegin(GL_POLYGON);
	glVertex2f(-0.3,1.1);
	glVertex2f(-0.3,0.7);
	glVertex2f(0,1);
	glVertex2f(0.3,0.7);
	glVertex2f(0.3,1.1);
	glVertex2f(-0.3,1.1);
	glEnd();

glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.3,0);
	glVertex2f(-0.3,1.1);
	glVertex2f(0.3,1.1);
	glVertex2f(0.3,0);
	glVertex2f(-0.3,0);
    glEnd();
}

///Road
glColor3ub(169,169,169);
glBegin(GL_POLYGON);
	glVertex2f(-0.3,-0.1);
	glVertex2f(-1,-4);
	glVertex2f(1,-4);
	glVertex2f(0.3,-0.1);
	glVertex2f(-0.3,-0.1);
	glEnd();

glColor3ub(169,169,169);
glBegin(GL_POLYGON);
	glVertex2f(0.3,-0.5);
	glVertex2f(0.4,-1.5);
	glVertex2f(5,-1.5);
	glVertex2f(5,-0.5);
    glVertex2f(0.3,-0.5);
	glEnd();
///Road Lines
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0,-0.3);
	glVertex2f(0,-0.6);
    glEnd();
}
glLineWidth(5.2);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0,-0.9);
	glVertex2f(0,-1.2);
    glEnd();
}
glLineWidth(5.4);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0,-1.5);
	glVertex2f(0,-1.8);
    glEnd();
}
glLineWidth(5.6);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0,-2.1);
	glVertex2f(0,-2.4);
    glEnd();
}
glLineWidth(5.8);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0,-2.7);
	glVertex2f(0,-3.0);
    glEnd();
}
glLineWidth(6.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0,-3.3);
	glVertex2f(0,-3.6);
    glEnd();
}
glLineWidth(6.2);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0,-3.9);
	glVertex2f(0,-4.2);
    glEnd();
}
glLineWidth(6.4);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0,-4.5);
	glVertex2f(0,-5.0);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.475,-1.0);
	glVertex2f(0.775,-1.0);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(1.1,-1.0);
	glVertex2f(1.4,-1.0);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(1.7,-1.0);
	glVertex2f(2.0,-1.0);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(2.3,-1.0);
	glVertex2f(2.6,-1.0);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(2.9,-1.0);
	glVertex2f(3.2,-1.0);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(3.5,-1.0);
	glVertex2f(3.8,-1.0);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(4.1,-1.0);
	glVertex2f(4.4,-1.0);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(4.7,-1.0);
	glVertex2f(5.0,-1.0);
    glEnd();
}

///Zebracrossing
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.45,-0.9);
	glVertex2f(0.75,-0.9);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.425,-0.8);
	glVertex2f(0.725,-0.8);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.4,-0.7);
	glVertex2f(0.7,-0.7);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.375,-0.6);
	glVertex2f(0.675,-0.6);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.5,-1.1);
	glVertex2f(0.8,-1.1);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.525,-1.2);
	glVertex2f(0.825,-1.2);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.55,-1.3);
	glVertex2f(0.85,-1.3);
    glEnd();
}
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.575,-1.4);
	glVertex2f(0.875,-1.4);
    glEnd();
}

///Car
    glPushMatrix();
    glTranslatef(positionCar1,0.0f, 0.0f);
    glBegin(GL_QUADS);             ///Car_Body
{
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(1.3f,-0.5f);
    glVertex2f(1.3f,-0.7f);
    glVertex2f(0.6f,-0.7f);
    glVertex2f(0.6f,-0.5f);
    glEnd();
}
 glBegin(GL_QUADS);               ///Car_Glass
{
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(1.3f,-0.5);
    glVertex2f(1.2f,-0.28f);
    glVertex2f(0.7f,-0.28f);
    glVertex2f(0.6f,-0.5f);
    glEnd();
}
glLineWidth(1.2);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(1.3f,-0.5);
    glVertex2f(1.2f,-0.28f);
    glVertex2f(0.7f,-0.28f);
    glVertex2f(0.6f,-0.5f);
    glEnd();
}
glBegin(GL_LINE_LOOP);
{
    glVertex2f(1.2f,-0.5);
    glVertex2f(1.2f,-0.28f);
    glVertex2f(0.7f,-0.28f);
    glVertex2f(0.7f,-0.5f);
    glEnd();
}

glColor3f(0.0f,0.0f,0.0f);
    int ib;
    GLfloat xb=1.15f; GLfloat yb=-.7f; GLfloat radiusb =.12f;
	int triangleAmountb = 20;
	GLfloat twicePib = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xb, yb);
		for(ib = 0; ib <= triangleAmountb;ib++)
            {
			glVertex2f(
                xb + (radiusb * cos(ib *  twicePib / triangleAmountb)),
			    yb + (radiusb * sin(ib * twicePib / triangleAmountb))
			          );
            }
	glEnd();


	glColor3f(0.0f,0.0f,0.0f);
    int jb;
    GLfloat pb=0.75f; GLfloat qb=-0.7f; GLfloat radb =.12f;
	int triangleAmtb = 20;
	GLfloat twicepib = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(pb, qb);
		for(jb = 0; jb <= triangleAmtb;jb++)
            {
			glVertex2f(
                pb + (radb * cos(jb *  twicepib / triangleAmtb)),
			    qb + (radb * sin(jb * twicepib / triangleAmtb))
			          );
            }
	glEnd();

	glColor3f(1.0f,1.0f,1.0f);

   GLfloat radi =.09f;

   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xb, yb);
		for(ib = 0; ib <= triangleAmountb;ib++)
            {
			glVertex2f(
                xb + (radi * cos(ib *  twicePib / triangleAmountb)),
			    yb + (radi * sin(ib * twicePib / triangleAmountb))
			          );
            }
	glEnd();



   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(pb, qb);
		for(jb = 0; jb <= triangleAmtb;jb++)
            {
			glVertex2f(
                pb + (radi * cos(jb *  twicepib / triangleAmtb)),
			    qb + (radi * sin(jb * twicepib / triangleAmtb))
			          );
            }
	glEnd();



///Bus
  glBegin(GL_QUADS);
    glColor3ub(179, 255, 102);
    glVertex2f(2.7f,-0.7f);
    glVertex2f(4.1f,-0.7f);
    glVertex2f(4.1f,-0.5f);
    glVertex2f(2.7f,-0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(2.7f,-0.5f);
    glVertex2f(4.1f,-0.5f);
    glVertex2f(4.0f,0.0f);
    glVertex2f(2.7f,0.0f);
    glEnd();

   glBegin(GL_QUADS);
    glColor3ub(0,0,128);
    glVertex2f(3.8f,-0.5f);
    glVertex2f(3.95f,-0.5f);
    glVertex2f(3.95f,-0.2f);
    glVertex2f(3.8f,-0.2f);
    glEnd();

   glBegin(GL_QUADS);
    glVertex2f(2.9f,-0.5f);
    glVertex2f(3.1f,-0.5f);
    glVertex2f(3.1f,-0.3f);
    glVertex2f(2.9f,-0.3f);
    glEnd();

   glBegin(GL_QUADS);
    glVertex2f(3.2f,-0.5f);
    glVertex2f(3.4f,-0.5f);
    glVertex2f(3.4f,-0.3f);
    glVertex2f(3.2f,-0.3f);
    glEnd();

   glBegin(GL_QUADS);
    glVertex2f(3.5f,-0.5f);
    glVertex2f(3.7f,-0.5f);
    glVertex2f(3.7f,-0.3f);
    glVertex2f(3.5f,-0.3f);
    glEnd();

////

   glBegin(GL_QUADS);
    glVertex2f(2.6f,-0.2f);
    glVertex2f(2.6f,-0.2f);
    glVertex2f(2.8f,-0.1f);
    glVertex2f(2.8f,-0.1f);
    glEnd();

   glBegin(GL_QUADS);
    glColor3ub(0,0,128);
    glVertex2f(2.9f,-0.2f);
    glVertex2f(3.1f,-0.2f);
    glVertex2f(3.1f,-0.1f);
    glVertex2f(2.9f,-0.1f);


///Bus
  glBegin(GL_QUADS);
    glColor3ub(179, 255, 102);
    glVertex2f(2.7f,-0.7f);
    glVertex2f(4.1f,-0.7f);
    glVertex2f(4.1f,-0.5f);
    glVertex2f(2.7f,-0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(2.7f,-0.5f);
    glVertex2f(4.1f,-0.5f);
    glVertex2f(4.0f,0.0f);
    glVertex2f(2.7f,0.0f);
    glEnd();

   glBegin(GL_QUADS);
    glColor3ub(0,0,128);
    glVertex2f(3.8f,-0.5f);
    glVertex2f(3.95f,-0.5f);
    glVertex2f(3.95f,-0.2f);
    glVertex2f(3.8f,-0.2f);
    glEnd();

   glBegin(GL_QUADS);
    glVertex2f(2.9f,-0.5f);
    glVertex2f(3.1f,-0.5f);
    glVertex2f(3.1f,-0.3f);
    glVertex2f(2.9f,-0.3f);
    glEnd();

   glBegin(GL_QUADS);
    glVertex2f(3.2f,-0.5f);
    glVertex2f(3.4f,-0.5f);
    glVertex2f(3.4f,-0.3f);
    glVertex2f(3.2f,-0.3f);
    glEnd();

   glBegin(GL_QUADS);
    glVertex2f(3.5f,-0.5f);
    glVertex2f(3.7f,-0.5f);
    glVertex2f(3.7f,-0.3f);
    glVertex2f(3.5f,-0.3f);
    glEnd();

////

   glBegin(GL_QUADS);
    glVertex2f(2.6f,-0.2f);
    glVertex2f(2.6f,-0.2f);
    glVertex2f(2.8f,-0.1f);
    glVertex2f(2.8f,-0.1f);
    glEnd();

   glBegin(GL_QUADS);
    glColor3ub(0,0,128);
    glVertex2f(2.9f,-0.2f);
    glVertex2f(3.1f,-0.2f);
    glVertex2f(3.1f,-0.1f);
    glVertex2f(2.9f,-0.1f);
    glEnd();

   glBegin(GL_QUADS);
    glVertex2f(3.2f,-0.2f);
    glVertex2f(3.4f,-0.2f);
    glVertex2f(3.4f,-0.1f);
    glVertex2f(3.2f,-0.1f);
    glEnd();

   glBegin(GL_QUADS);
    glVertex2f(3.5f,-0.2f);
    glVertex2f(3.7f,-0.2f);
    glVertex2f(3.7f,-0.1f);
    glVertex2f(3.5f,-0.1f);
    glEnd();

   glBegin(GL_QUADS);
    glColor3ub(0,139,139);
    glVertex2f(4.0f,-0.3f);
    glVertex2f(4.2f,-0.3f);
    glVertex2f(4.2f,-0.5f);
    glVertex2f(4.0f,-0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(179, 255, 102);
    glVertex2f(4.0f,-0.5f);
    glVertex2f(4.2f,-0.5f);
    glVertex2f(4.2f,-0.7f);
    glVertex2f(4.0f,-0.7f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(65,105,225);
    glVertex2f(4.0f,0.0f);
    glVertex2f(4.0f,-0.3f);
    glVertex2f(4.2f,-0.3f);
    glEnd();


   ///wheel
glColor3f(0,0,0);
   GLfloat xbpr=3.0f; GLfloat ybpr=-0.7f,radbw=.13,radiw=.09;

   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xbpr, ybpr);
		for(ib = 0; ib <= triangleAmountb;ib++)
            {
			glVertex2f(
                xbpr + (radbw * cos(ib *  twicePib / triangleAmountb)),
			    ybpr + (radbw * sin(ib * twicePib / triangleAmountb))
			          );
            }
	glEnd();

	glColor3f(0,0,0);

    GLfloat pbpt=3.8f; GLfloat qbpt=-0.7f;

   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(pbpt, qbpt);
		for(jb = 0; jb <= triangleAmtb;jb++)
            {
			glVertex2f(
                pbpt + (radbw * cos(jb *  twicepib / triangleAmtb)),
			    qbpt + (radbw * sin(jb * twicepib / triangleAmtb))
			          );
            }
	glEnd();

	glColor3f(1,1,1);


   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xbpr, ybpr);
		for(ib = 0; ib <= triangleAmountb;ib++)
            {
			glVertex2f(
                xbpr + (radiw * cos(ib *  twicePib / triangleAmountb)),
			    ybpr + (radiw * sin(ib * twicePib / triangleAmountb))
			          );
            }
	glEnd();


   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(pbpt, qbpt);
		for(jb = 0; jb <= triangleAmtb;jb++)
            {
			glVertex2f(
                pbpt + (radiw * cos(jb *  twicepib / triangleAmtb)),
			    qbpt + (radiw * sin(jb * twicepib / triangleAmtb))
			          );
            }
	glEnd();
	glPopMatrix();

 ///Dome 0
glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-0.3,1.4);
	glVertex2f(-0.3,1.4);
	glVertex2f(-0.2,1.625);
	glVertex2f(-0.1,1.725);
    glVertex2f(0.0,1.8);
    glVertex2f(0.1,1.725);
    glVertex2f(0.2,1.625);
    glVertex2f(0.3,1.4);
    glVertex2f(0.0,1.4);
    glVertex2f(-0.3,1.4);
	glEnd();
///Border
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.3,1.4);
	glVertex2f(-0.3,1.4);
	glVertex2f(-0.2,1.625);
	glVertex2f(-0.1,1.725);
    glVertex2f(0.0,1.8);
    glVertex2f(0.1,1.725);
    glVertex2f(0.2,1.625);
    glVertex2f(0.3,1.4);
    glVertex2f(0.0,1.4);
    glVertex2f(-0.3,1.4);
    glEnd();
}

///Dome +1
glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(0.350,1.375);
	glVertex2f(0.4,1.5);
	glVertex2f(0.5,1.6);
	glVertex2f(0.6,1.65);
	glVertex2f(0.7,1.7);
    glVertex2f(0.8,1.65);
	glVertex2f(0.9,1.6);
	glVertex2f(1.0,1.465);
	glVertex2f(1.050,1.325);
	glEnd();
///Border
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.350,1.375);
	glVertex2f(0.4,1.5);
	glVertex2f(0.5,1.6);
	glVertex2f(0.6,1.65);
	glVertex2f(0.7,1.7);
    glVertex2f(0.8,1.65);
	glVertex2f(0.9,1.6);
	glVertex2f(1.0,1.465);
	glVertex2f(1.050,1.325);
    glEnd();
}

///Dome +2
glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(1.1,1.325);
	glVertex2f(1.125,1.4);
	glVertex2f(1.2,1.5);
	glVertex2f(1.4,1.6);
	glVertex2f(1.55,1.5);
    glVertex2f(1.65,1.4);
	glVertex2f(1.7,1.285);
	glVertex2f(1.1,1.325);
	glEnd();
///Border
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    	glVertex2f(1.1,1.325);
	glVertex2f(1.125,1.4);
	glVertex2f(1.2,1.5);
	glVertex2f(1.4,1.6);
	glVertex2f(1.55,1.5);
    glVertex2f(1.65,1.4);
	glVertex2f(1.7,1.285);
	glVertex2f(1.1,1.325);
    glEnd();
}

///Dome +3
glColor3ub(160,82,45);
glBegin(GL_POLYGON);

	glVertex2f(1.775,1.265);
	glVertex2f(1.9,1.445);
	glVertex2f(2.1,1.55);
	glVertex2f(2.2,1.475);
    glVertex2f(2.285,1.4);
	glVertex2f(2.3,1.4);
	glVertex2f(2.4,1.225);
	glVertex2f(1.775,1.265);
	glEnd();
///Border
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(1.775,1.265);
	glVertex2f(1.9,1.445);
	glVertex2f(2.1,1.55);
	glVertex2f(2.2,1.475);
    glVertex2f(2.285,1.4);
	glVertex2f(2.3,1.4);
	glVertex2f(2.4,1.225);
	glVertex2f(1.775,1.265);
    glEnd();
}

///Dome +4
glColor3ub(160,82,45);
glBegin(GL_POLYGON);

	glVertex2f(2.5,1.215);
	glVertex2f(2.605,1.335);
	glVertex2f(2.8,1.45);
	glVertex2f(2.975,1.335);
    glVertex2f(3.1,1.165);
	glVertex2f(2.5,1.215);
	glEnd();
///Border
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(2.5,1.215);
	glVertex2f(2.605,1.335);
	glVertex2f(2.8,1.45);
	glVertex2f(2.975,1.335);
    glVertex2f(3.1,1.165);
	glVertex2f(2.5,1.215);
    glEnd();
}

///Dome +5
glColor3ub(160,82,45);
glBegin(GL_POLYGON);

	glVertex2f(3.21,1.2);
	glVertex2f(3.35,1.32);
	glVertex2f(3.5,1.4);
	glVertex2f(3.65,1.32);
    glVertex2f(3.8,1.115);
	glVertex2f(3.2,1.175);
	glEnd();
///Border
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(3.21,1.2);
	glVertex2f(3.35,1.32);
	glVertex2f(3.5,1.4);
	glVertex2f(3.65,1.32);
    glVertex2f(3.8,1.115);
	glVertex2f(3.2,1.175);
    glEnd();
}

///Dome -1
glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-0.350,1.375);
	glVertex2f(-0.4,1.5);
	glVertex2f(-0.5,1.6);
	glVertex2f(-0.6,1.65);
	glVertex2f(-0.7,1.7);
    glVertex2f(-0.8,1.65);
	glVertex2f(-0.9,1.6);
	glVertex2f(-1.0,1.465);
	glVertex2f(-1.050,1.325);
	glEnd();
///Border
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.350,1.375);
	glVertex2f(-0.4,1.5);
	glVertex2f(-0.5,1.6);
	glVertex2f(-0.6,1.65);
	glVertex2f(-0.7,1.7);
    glVertex2f(-0.8,1.65);
	glVertex2f(-0.9,1.6);
	glVertex2f(-1.0,1.465);
	glVertex2f(-1.050,1.325);
    glEnd();
}

///Dome -2
glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-1.1,1.325);
	glVertex2f(-1.125,1.4);
	glVertex2f(-1.2,1.5);
	glVertex2f(-1.4,1.6);
	glVertex2f(-1.55,1.5);
    glVertex2f(-1.65,1.4);
	glVertex2f(-1.7,1.285);
	glVertex2f(-1.1,1.325);
	glEnd();
///Border
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-1.1,1.325);
	glVertex2f(-1.125,1.4);
	glVertex2f(-1.2,1.5);
	glVertex2f(-1.4,1.6);
	glVertex2f(-1.55,1.5);
    glVertex2f(-1.65,1.4);
	glVertex2f(-1.7,1.285);
	glVertex2f(-1.1,1.325);
    glEnd();
}

///Dome -3
glColor3ub(160,82,45);
glBegin(GL_POLYGON);

	glVertex2f(-1.775,1.265);
	glVertex2f(-1.9,1.445);
	glVertex2f(-2.1,1.55);
	glVertex2f(-2.2,1.475);
    glVertex2f(-2.285,1.4);
	glVertex2f(-2.3,1.4);
	glVertex2f(-2.4,1.225);
	glVertex2f(-1.775,1.265);
	glEnd();
///Border
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-1.775,1.265);
	glVertex2f(-1.9,1.445);
	glVertex2f(-2.1,1.55);
	glVertex2f(-2.2,1.475);
    glVertex2f(-2.285,1.4);
	glVertex2f(-2.3,1.4);
	glVertex2f(-2.4,1.225);
	glVertex2f(-1.775,1.265);
    glEnd();
}

///Dome -4
glColor3ub(160,82,45);
glBegin(GL_POLYGON);

	glVertex2f(-2.5,1.215);
	glVertex2f(-2.605,1.335);
	glVertex2f(-2.8,1.45);
	glVertex2f(-2.975,1.335);
    glVertex2f(-3.1,1.165);
	glVertex2f(-2.5,1.215);
	glEnd();
///Border
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-2.5,1.215);
	glVertex2f(-2.605,1.335);
	glVertex2f(-2.8,1.45);
	glVertex2f(-2.975,1.335);
    glVertex2f(-3.1,1.165);
	glVertex2f(-2.5,1.215);
    glEnd();
}

///Dome -5
glColor3ub(160,82,45);
glBegin(GL_POLYGON);

	glVertex2f(-3.21,1.2);
	glVertex2f(-3.35,1.32);
	glVertex2f(-3.5,1.4);
	glVertex2f(-3.65,1.32);
    glVertex2f(-3.8,1.115);
	glVertex2f(-3.2,1.175);
	glEnd();
///Border
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-3.21,1.2);
	glVertex2f(-3.35,1.32);
	glVertex2f(-3.5,1.4);
	glVertex2f(-3.65,1.32);
    glVertex2f(-3.8,1.115);
	glVertex2f(-3.2,1.175);
    glEnd();
}

///Sand
glColor3ub(192,192,192);
glBegin(GL_POLYGON);

	glVertex2f(-5,-1);
	glVertex2f(-3.5,-1);
	glVertex2f(-3.7,-1.2);
	glVertex2f(-5,-1.2);
    glVertex2f(-5,-1);
	glEnd();
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-5,-1);
	glVertex2f(-3.5,-1);
	glVertex2f(-3.7,-1.2);
	glVertex2f(-5,-1.2);
    glVertex2f(-5,-1);
    glEnd();
}

glColor3ub(192,192,192);
glBegin(GL_POLYGON);

	glVertex2f(-3.5,-1);
	glVertex2f(-5,-2.5);
	glVertex2f(-5,-2.7);
	glVertex2f(-3.5,-1.2);
    glVertex2f(-3.5,-1);
	glEnd();
glLineWidth(2.0);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-3.5,-1);
	glVertex2f(-5,-2.5);
	glVertex2f(-5,-2.7);
	glVertex2f(-3.5,-1.2);
    glVertex2f(-3.5,-1);
    glEnd();
}

glColor3ub(222,184,135);
glBegin(GL_POLYGON);

	glVertex2f(-5,-1.2);
	glVertex2f(-3.7,-1.2);
	glVertex2f(-5,-2.5);
	glVertex2f(-5,-1.2);
	glEnd();
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.9,-1);
	glVertex2f(-4.9,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.8,-1);
	glVertex2f(-4.8,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.7,-1);
	glVertex2f(-4.7,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.6,-1);
	glVertex2f(-4.6,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.5,-1);
	glVertex2f(-4.5,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.4,-1);
	glVertex2f(-4.4,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.3,-1);
	glVertex2f(-4.3,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.2,-1);
	glVertex2f(-4.2,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.1,-1);
	glVertex2f(-4.1,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4,-1);
	glVertex2f(-4,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-3.9,-1);
	glVertex2f(-3.9,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-3.8,-1);
	glVertex2f(-3.8,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-3.7,-1);
	glVertex2f(-3.7,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-3.6,-1);
	glVertex2f(-3.6,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-3.5,-1);
	glVertex2f(-3.5,-0.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.9,-2.4);
	glVertex2f(-4.9,-2.1);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.8,-2.3);
	glVertex2f(-4.8,-2.0);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.7,-2.2);
	glVertex2f(-4.7,-1.9);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.6,-2.1);
	glVertex2f(-4.6,-1.8);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.5,-2);
	glVertex2f(-4.5,-1.7);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.4,-1.9);
	glVertex2f(-4.4,-1.6);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.3,-1.8);
	glVertex2f(-4.3,-1.5);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.2,-1.7);
	glVertex2f(-4.2,-1.4);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4.1,-1.6);
	glVertex2f(-4.1,-1.3);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-4,-1.5);
	glVertex2f(-4,-1.2);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-3.9,-1.4);
	glVertex2f(-3.9,-1.1);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-3.8,-1.3);
	glVertex2f(-3.8,-1);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-3.7,-1.2);
	glVertex2f(-3.7,-0.9);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-3.6,-1.1);
	glVertex2f(-3.6,-0.8);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-5,-0.9);
	glVertex2f(-3.5,-0.9);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-5,-0.8);
	glVertex2f(-3.5,-0.8);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
	glVertex2f(-3.5,-0.8);
	glVertex2f(-5,-2.3);
    glEnd();
}
glLineWidth(1.5);
glBegin(GL_LINE_LOOP);
{
  glColor3f(0.0f,0.0f,0.0f);
	glVertex2f(-3.5,-0.9);
	glVertex2f(-5,-2.4);
    glEnd();
}

///Light 1
    glColor3ub(214, 214, 194);
    glBegin(GL_QUADS);
    glVertex2f(-0.5f,-0.9f);
    glVertex2f(-0.6f,-0.9f);
    glVertex2f(-0.6f,-0.3f);
    glVertex2f(-0.5f,-0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.5f,-0.4f);
    glVertex2f(-0.3f,-0.4f);
    glVertex2f(-0.3f,-0.3f);
    glVertex2f(-0.5f,-0.3f);
    glEnd();



    glBegin(GL_TRIANGLES);
    glVertex2f(-0.4f,-0.5f);
    glVertex2f(-0.2f,-0.5f);
    glVertex2f(-0.3f,-0.4f);
    glEnd();

///Light 2
    glColor3ub(214, 214, 194);
    glBegin(GL_QUADS);
    glVertex2f(-0.7f,-1.9f);
    glVertex2f(-0.8f,-1.9f);
    glVertex2f(-0.8f,-1.3f);
    glVertex2f(-0.7f,-1.3f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.7f,-1.4f);
    glVertex2f(-0.5f,-1.4f);
    glVertex2f(-0.5f,-1.3f);
    glVertex2f(-0.7f,-1.3f);
    glEnd();



    glBegin(GL_TRIANGLES);
    glVertex2f(-0.6f,-1.5f);
    glVertex2f(-0.4f,-1.5f);
    glVertex2f(-0.5f,-1.4f);
    glEnd();

///Light 3
glColor3ub(214, 214, 194);
    glBegin(GL_QUADS);
    glVertex2f(-0.85f,-2.9f);
    glVertex2f(-0.95f,-2.9f);
    glVertex2f(-0.95f,-2.3f);
    glVertex2f(-0.85f,-2.3f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.85f,-2.4f);
    glVertex2f(-0.65f,-2.4f);
    glVertex2f(-0.65f,-2.3f);
    glVertex2f(-0.85f,-2.3f);
    glEnd();



    glBegin(GL_TRIANGLES);
    glVertex2f(-0.75f,-2.5f);
    glVertex2f(-0.55f,-2.5f);
    glVertex2f(-0.65f,-2.4f);
    glEnd();

///Light 4
    glColor3ub(214, 214, 194);
    glBegin(GL_QUADS);
    glVertex2f(0.65f,-1.9f);
    glVertex2f(0.75f,-1.9f);
    glVertex2f(0.75f,-1.3f);
    glVertex2f(0.65f,-1.3f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.65f,-1.4f);
    glVertex2f(0.45f,-1.4f);
    glVertex2f(0.45f,-1.3f);
    glVertex2f(0.65f,-1.3f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glVertex2f(0.55f,-1.5f);
    glVertex2f(0.35f,-1.5f);
    glVertex2f(0.45f,-1.4f);
    glEnd();

///Light 5
    glColor3ub(214, 214, 194);
    glBegin(GL_QUADS);
    glVertex2f(0.85f,-2.9f);
    glVertex2f(0.95f,-2.9f);
    glVertex2f(0.95f,-2.3f);
    glVertex2f(0.85f,-2.3f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.85f,-2.4f);
    glVertex2f(0.65f,-2.4f);
    glVertex2f(0.65f,-2.3f);
    glVertex2f(0.85f,-2.3f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glVertex2f(0.75f,-2.5f);
    glVertex2f(0.55f,-2.5f);
    glVertex2f(0.65f,-2.4f);
    glEnd();

///Light 6
    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);
    glVertex2f(1.65f,-1.7f);
    glVertex2f(1.75f,-1.7f);
    glVertex2f(1.75f,-1.1f);
    glVertex2f(1.65f,-1.1f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);
    glVertex2f(1.65f,-1.1f);
    glVertex2f(1.75f,-1.1f);
    glVertex2f(1.65f,-0.9f);
    glVertex2f(1.55f,-0.9f);
    glEnd();

///Light 7
    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);
    glVertex2f(2.65f,-1.7f);
    glVertex2f(2.75f,-1.7f);
    glVertex2f(2.75f,-1.1f);
    glVertex2f(2.65f,-1.1f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);
    glVertex2f(2.65f,-1.1f);
    glVertex2f(2.75f,-1.1f);
    glVertex2f(2.65f,-0.9f);
    glVertex2f(2.55f,-0.9f);
    glEnd();

///Light 8
    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);
    glVertex2f(3.65f,-1.7f);
    glVertex2f(3.75f,-1.7f);
    glVertex2f(3.75f,-1.1f);
    glVertex2f(3.65f,-1.1f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);
    glVertex2f(3.65f,-1.1f);
    glVertex2f(3.75f,-1.1f);
    glVertex2f(3.65f,-0.9f);
    glVertex2f(3.55f,-0.9f);
    glEnd();

///Light 9
       glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);
    glVertex2f(4.65f,-1.7f);
    glVertex2f(4.75f,-1.7f);
    glVertex2f(4.75f,-1.1f);
    glVertex2f(4.65f,-1.1f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);
    glVertex2f(4.65f,-1.1f);
    glVertex2f(4.75f,-1.1f);
    glVertex2f(4.65f,-0.9f);
    glVertex2f(4.55f,-0.9f);
    glEnd();

///Birds
glPushMatrix();
;
glLineWidth(3.0);
glBegin(GL_LINES);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(3.0,2.2);
	glVertex2f(3.1,2.1);
	glVertex2f(3.2,2.3);
	glVertex2f(3.1,2.1);
	glVertex2f(3.2,2.3);
    glEnd();
}

glLineWidth(3.0);
glBegin(GL_LINES);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(3.4,2.3);
	glVertex2f(3.5,2.2);
	glVertex2f(3.6,2.4);
	glVertex2f(3.5,2.2);
	glVertex2f(3.6,2.4);
    glEnd();
}

glBegin(GL_LINES);
glLineWidth(3.0);
{
  glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(3.2,2.5);
	glVertex2f(3.3,2.4);
	glVertex2f(3.4,2.6);
	glVertex2f(3.3,2.4);
	glVertex2f(3.4,2.6);
    glEnd();
}


glPopMatrix();
glutTimerFunc(10000,displayDayToNight,0);
glFlush ();
}


void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glColor3f(0.0f, 0.0f, 0.0f);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(1600,960);
glutCreateWindow ("60 DOME MOSQUE");
glutDisplayFunc(myDisplayDay);
myInit ();

   glutTimerFunc(100, updateCar1, 0);
   glutTimerFunc(1, updateCloud, 0);
   glutTimerFunc(1, updateSun, 0);
   glutTimerFunc(1, updateMoon, 0);

https://www.linkedin.com/in/md-forhad-5b58601b2/
//   glutKeyboardFunc(handleKeypress);
   //glutMouseFunc(handleMouse);

glutMainLoop();
return 0;
}
