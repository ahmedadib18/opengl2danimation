#include<windows.h>
#include <glut.h>
#include <stdlib.h>
#include<stdio.h>
#include <math.h>
#include<iostream>
#define PI 3.1416

static float	tx	=  0.0;
static float	ty	=  0.0;
static GLfloat spin = 0.0;//initial degree for spinning
float sun_move=0.0f;

float cloud_move1=0.0f;
float cloud_move2=0.0f;
float cloud_move3=0.0f;
float cloud_move4=0.0f;
float cloud_move5=0.0f;
float cloud_move6=0.0f;
float cloud_move7=0.0f;
int bound = 75;

float bus_move=0.0f;

float man1_move=0.0f;
float man2_move=0.0f;
float man3_move=0.0f;
float boat_move1=0.0f;

struct point2d
{
    double x, y;
};

struct point2d cp[200];
int cpidx=0;
int score=0;
void circle(float radius_x, float radius_y)
{
    int i = 0;
    float angle = 0.0;

    glBegin(GL_POLYGON);

    for(i = 0; i < 100; i++)
    {
        angle = 2 * PI * i / 100;
        glVertex3f (cos(angle) * radius_x, sin(angle) * radius_y, 0);
    }

    glEnd();
}
void road()
{

    glPushMatrix();
    glColor3f(0.0, 0.0, 0.0);
    glRectf(50.0,-7.0,-50.0,-20.0);

    glColor3f(1.0, 1.0, 1.0);
    glRectf(40.0,-13.0,45.0,-14.0);
    glTranslated(-10.0,0.0,1);
    glColor3f(1.0, 1.0, 1.0);
    glRectf(40.0,-13.0,45.0,-14.0);
    glTranslated(-10.0,0.0,1);
    glColor3f(1.0, 1.0, 1.0);
    glRectf(40.0,-13.0,45.0,-14.0);
    glTranslated(-10.0,0.0,1);
    glColor3f(1.0, 1.0, 1.0);
    glRectf(40.0,-13.0,45.0,-14.0);
    glTranslated(-10.0,0.0,1);
    glColor3f(1.0, 1.0, 1.0);
    glRectf(40.0,-13.0,45.0,-14.0);
    glTranslated(-10.0,0.0,1);
    glColor3f(1.0, 1.0, 1.0);
    glRectf(40.0,-13.0,45.0,-14.0);
    glTranslated(-10.0,0.0,1);
    glColor3f(1.0, 1.0, 1.0);
    glRectf(40.0,-13.0,45.0,-14.0);
    glTranslated(-10.0,0.0,1);
    glColor3f(1.0, 1.0, 1.0);
    glRectf(40.0,-13.0,45.0,-14.0);
    glTranslated(-10.0,0.0,1);
    glColor3f(1.0, 1.0, 1.0);
    glRectf(40.0,-13.0,45.0,-14.0);
    glTranslated(-10.0,0.0,0.0);

    glColor3f(1.0, 1.0, 1.0);
    glRectf(40.0,-13.0,45.0,-14.0);
    glPopMatrix();
}
void bus1()
{

    glPushMatrix();
    glTranslatef(tx,ty,0);
    glTranslatef(-63,0,0);
    glPushMatrix();
    glColor3f(0.5,0.9961,0.83);
    glRectf(33.0,-8.0,48.0,-16.0);

    glColor3f(0.852,0.44,0.84);
    glRectf(33.3,-8.5,47.7,-12.0);

    glColor3f(0.0,0.41,0.543);
    glRectf(33.3,-12.0,47.7,-12.7);

    glColor3f(0.801,0.79,0.79);
    glRectf(47.5,-10.0,46.0,-15.5);

    glPushMatrix();
    glTranslatef(-2,0,0);
    glColor3f(1.0,1.0,1.0);
    glRectf(36.0,-8.9,37.5,-11.5);
    glColor3f(1.0,1.0,1.0);
    glRectf(38.0,-8.9,39.5,-11.5);
    glColor3f(1.0,1.0,1.0);
    glRectf(40.5,-8.9,42.0,-11.5);
    glColor3f(1.0,1.0,1.0);
    glRectf(43.5,-8.9,45.0,-11.5);
    glColor3f(1.0,1.0,1.0);
    glRectf(45.5,-8.9,47.0,-11.5);
    glPopMatrix();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(35,-17.5,0);
    circle(1.5,2);
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(44.5,-17.5,0);
    circle(1.5,2);
    glPopMatrix();
    glEnd();
    glPopMatrix();

}

void fild()
{
    glPushMatrix();
    glColor3f(0.801, 0.73, 0.6);
    glRectf(50.0,-60.0,-50.0,-20.0);
    glPopMatrix();
    glPushMatrix();
    glColor3f(0.0, 0.801, 0.4);
    glRectf(50.0,20.0,-50.0,-7.0);
    glPopMatrix();


}
void bulding()
{
    glPushMatrix();

    glPushMatrix();
    glTranslated(0.0,-5.0,1);
    glColor3f(0.81, 0.33, 0.33);
    glRectf(-48.0,19.0,-38.0,28.0);

    glColor3f(0.997, 0.08,0.6);
    glRectf(-49.0,28.0,-37.0,30.0);

    glColor3f(0.81, 0.33, 0.33);
    glRectf(-48.0,30.0,-38.0,40.0);

    glColor3f(0.997, 0.08,0.6);
    glRectf(-49.0,39.0,-37.0,41.0);

    glColor3f(0.0, 0.0, 0.0);
    glRectf(-47.0,22.0,-45.0,25.0);
    glRectf(-41.0,22.0,-39.0,25.0);
    glRectf(-41.0,35.0,-39.0,32.0);
    glRectf(-47.0,35.0,-45.0,32.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(15,-5.0,1);
    glColor3f(0.81, 0.33, 0.33);
    glRectf(-48.0,19.0,-38.0,28.0);

    glColor3f(0.997, 0.08,0.6);
    glRectf(-49.0,28.0,-37.0,30.0);

    glColor3f(0.81, 0.33, 0.33);
    glRectf(-48.0,30.0,-38.0,40.0);

    glColor3f(0.997, 0.08,0.6);
    glRectf(-49.0,39.0,-37.0,41.0);

    glColor4d(0.0, 0.0, 0.0,0.0);
    glRectf(-47.0,22.0,-45.0,25.0);
    glRectf(-41.0,22.0,-39.0,25.0);
    glRectf(-41.0,35.0,-39.0,32.0);
    glRectf(-47.0,35.0,-45.0,32.0);
    glPopMatrix();

    glPopMatrix();

}
void cloud1()
{
    glPushMatrix();
    glTranslated(-28.0,5.0,1);

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(0,43,0);
    circle(3,3);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(0,45,0);
    circle(2,3);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(0,42,0);
    circle(2,3);
    glPopMatrix();

    glPopMatrix();
}
void cloud2()
{
    glPushMatrix();
    glTranslated(20,-4,1);
    glPushMatrix();
    glTranslated(-28.0,5.0,1);

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(0,43,0);
    circle(3,3);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(0,45,0);
    circle(2,3);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(0,42,0);
    circle(2,3);
    glPopMatrix();

    glPopMatrix();
    glPopMatrix();



}
void cloud3()
{
    glPushMatrix();
    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(0,43,0);
    circle(3,3);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(0,45,0);
    circle(2,3);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(0,42,0);
    circle(2,3);
    glPopMatrix();

    glPopMatrix();
}

void cloud4()
{
    glPushMatrix();
    glTranslated(-50.0,0.0,1);

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(3,43,0);
    circle(3,3);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(3,45,0);
    circle(2,3);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(3,42,0);
    circle(2,3);
    glPopMatrix();
    glPopMatrix();

}
void cloud5()
{
    glPushMatrix();
    glTranslated(20.0,2.0,1);

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(0,43,0);
    circle(3,3);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(0,45,0);
    circle(2,3);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(0,42,0);
    circle(2,3);
    glPopMatrix();

    glPopMatrix();


}
void cloud6()
{
    glPushMatrix();
    glTranslated(-18.0,-5.0,1);

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(0,43,0);
    circle(3,3);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(0,45,0);
    circle(2,3);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(0,42,0);
    circle(2,3);
    glPopMatrix();

    glPopMatrix();

}
void cloud7()
{
    glPushMatrix();
    glTranslated(-41.0,2.0,1);

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(0,43,0);
    circle(3,3);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(0,45,0);
    circle(2,3);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(0,42,0);
    circle(2,3);
    glPopMatrix();

    glPopMatrix();

}
void river()
{

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.12f, 0.565f, 1.0f);
    glVertex2d(150.0,-22.5);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2d(-150.0,-22.5);
    glColor3f(0.062f, 0.31f, 0.545f);
    glVertex2d(-150.0,-60);
    glColor3f(0.388f, 0.72f, 1.0f);
    glVertex2d(150.0,-60);
    glEnd();

    glPopMatrix();
    glPopMatrix();
}

void ship()
{
    glPushMatrix();
    glTranslatef(-30,0,0);
    glTranslatef(5,0,0);
    glPushMatrix();
    glTranslated(0.0,0.3,1);
    glColor3f(1.0, 1.0, 1.0);
    glRectf(13.0,-23.0,14.0,-26.0);//
    glColor3f(0.99,0.99,0.0);
    glRectf(5.0,-26.0,15.0,-32.0);//
    glColor3f(0.7,0.13,0.13);
    glRectf(0.0,-32.0,20.0,-38.0);//
    glColor3f(0.73,0.6,0.6);
    glRectf(-1.0,-38.0,21.0,-39.6);//

    glColor3f(0.0,0.0,0.0);
    glRectf(5.6,-31.0,7.0,-27.6);
    glColor3f(0.0,0.0,0.0);
    glRectf(7.6,-31.0,9.0,-27.6);
    glColor3f(0.0,0.0,0.0);
    glRectf(14.0,-31.0,12.6,-27.6);

    glColor3f(0.93,0.821,0.93);
    glRectf(1.3,-37.0,2.7,-32.6);
    glColor3f(0.93,0.821,0.93);
    glRectf(3.0,-37.0,4.4,-32.6);
    glColor3f(0.93,0.821,0.93);
    glRectf(19.0,-37.0,17.6,-32.6);
    glColor3f(0.93,0.821,0.93);
    glRectf(15.4,-37.0,16.9,-32.6);
    glColor3f(0.93,0.821,0.93);

    glPopMatrix();
    glPopMatrix();
}
void smallShip()
{
    ///1
    glPushMatrix();
    glTranslatef(-8,0,0);
    glPushMatrix();
    glTranslated(20.0,-10.0,1);
    glColor3f(0.9961,0.645,0.0);
    glRectf(-48,-32.0,-38,-37.0);
    glColor3f(0.73,0.6,0.6);
    glRectf(-49,-37.0,-37.0,-38.5);
    glColor3f(0.9961,0.0,0.9961);
    glRectf(-46,-28.0,-40.0,-32.0);
    glColor3f(0.0,0.0,0.0);
    glRectf(-41.0,-28.0,-42.0,-24.0);
    glTranslated(0.0,-4.0,1);
    glColor3f(0.93,0.821,0.93);
    glRectf(-45.0,-27.0,-43.5,-25.0);
    glTranslated(3.0,-4.0,1);
    glColor3f(0.93,0.821,0.93);
    glRectf(-45.0,-27.0,-43.5,-25.0);
    glTranslated(-4.0,0.0,1);
    glColor3f(0.93,0.821,0.93);
    glRectf(-45.0,-27.0,-43.5,-25.0);
    glPopMatrix();
    glPopMatrix();

    ///2
    glPushMatrix();
    glTranslated(80.0,-5.0,1);
    glColor3f(0.9961,0.645,0.0);
    glRectf(-48,-32.0,-38,-37.0);
    glColor3f(0.73,0.6,0.6);
    glRectf(-49,-37.0,-37.0,-38.5);
    glColor3f(0.9961,0.0,0.9961);
    glRectf(-46,-28.0,-40.0,-32.0);
    glColor3f(0.0,0.0,0.0);
    glRectf(-41.0,-28.0,-42.0,-24.0);
    glTranslated(0.0,-4.0,1);
    glColor3f(0.93,0.821,0.93);
    glRectf(-45.0,-27.0,-43.5,-25.0);
    glTranslated(3.0,-4.0,1);
    glColor3f(0.93,0.821,0.93);
    glRectf(-45.0,-27.0,-43.5,-25.0);
    glTranslated(-4.0,0.0,1);
    glColor3f(0.93,0.821,0.93);
    glRectf(-45.0,-27.0,-43.5,-25.0);
    glPopMatrix();

    ///3
    glPushMatrix();
    glColor3f(0.9961,0.645,0.0);
    glRectf(-48,-32.0,-38,-37.0);
    glColor3f(0.73,0.6,0.6);
    glRectf(-49,-37.0,-37.0,-38.5);
    glColor3f(0.9961,0.0,0.9961);
    glRectf(-46,-28.0,-40.0,-32.0);
    glColor3f(0.0,0.0,0.0);
    glRectf(-41.0,-28.0,-42.0,-24.0);
    glTranslated(0.0,-4.0,1);
    glColor3f(0.93,0.821,0.93);
    glRectf(-45.0,-27.0,-43.5,-25.0);
    glTranslated(3.0,-4.0,1);
    glColor3f(0.93,0.821,0.93);
    glRectf(-45.0,-27.0,-43.5,-25.0);
    glTranslated(-4.0,0.0,1);
    glColor3f(0.93,0.821,0.93);
    glRectf(-45.0,-27.0,-43.5,-25.0);
    glPopMatrix();
    ///4
    glPushMatrix();
    glTranslatef(56,0,0);
    glPushMatrix();
    glColor3f(0.9961,0.645,0.0);
    glRectf(-48,-32.0,-38,-37.0);
    glColor3f(0.73,0.6,0.6);
    glRectf(-49,-37.0,-37.0,-38.5);
    glColor3f(0.9961,0.0,0.9961);
    glRectf(-46,-28.0,-40.0,-32.0);
    glColor3f(0.0,0.0,0.0);
    glRectf(-41.0,-28.0,-42.0,-24.0);
    glTranslated(0.0,-4.0,1);
    glColor3f(0.93,0.821,0.93);
    glRectf(-45.0,-27.0,-43.5,-25.0);
    glTranslated(3.0,-4.0,1);
    glColor3f(0.93,0.821,0.93);
    glRectf(-45.0,-27.0,-43.5,-25.0);
    glTranslated(-4.0,0.0,1);
    glColor3f(0.93,0.821,0.93);
    glRectf(-45.0,-27.0,-43.5,-25.0);
    glPopMatrix();
    glPopMatrix();


}
void tree()
{
    ///1
    glPushMatrix();
    glPushMatrix();
    glPushMatrix();
    glColor3f(0.543,0.3,0.1);
    glRectf(40,5.0,41.0,15.0);
    glColor3f(0.9,0.645,0.3);
    glRectf(39.5,5.0,41.5,4.0);
    glColor3f(0.0,0.543,0.0);
    glTranslatef(40.5,19,1);
    circle(3,3);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,-2,1);
    glColor3f(0.0,0.543,0.0);
    glTranslatef(40.5,19,1);
    circle(2,2);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,2,1);
    glColor3f(0.0,0.543,0.0);
    glTranslatef(40.5,19,1);
    circle(2,2);
    glPopMatrix();
    glPopMatrix();

    ///2
    glPushMatrix();
    glTranslatef(-7,-11,1);
    glPushMatrix();
    glColor3f(0.543,0.3,0.1);
    glRectf(40,5.0,41.0,15.0);
    glColor3f(0.9,0.645,0.3);
    glRectf(39.5,5.0,41.5,4.0);
    glColor3f(0.0,0.543,0.0);
    glTranslatef(40.5,19,1);
    circle(3,3);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,-2,1);
    glColor3f(0.0,0.543,0.0);
    glTranslatef(40.5,19,1);
    circle(2,2);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,2,1);
    glColor3f(0.0,0.543,0.0);
    glTranslatef(40.5,19,1);
    circle(2,2);
    glPopMatrix();
    glPopMatrix();
    ///3
    glPushMatrix();
    glTranslatef(-60,-11,1);
    glPushMatrix();
    glColor3f(0.543,0.3,0.1);
    glRectf(40,5.0,41.0,15.0);
    glColor3f(0.9,0.645,0.3);
    glRectf(39.5,5.0,41.5,4.0);
    glColor3f(0.0,0.543,0.0);
    glTranslatef(40.5,19,1);
    circle(3,3);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,-2,1);
    glColor3f(0.0,0.543,0.0);
    glTranslatef(40.5,19,1);
    circle(2,2);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,2,1);
    glColor3f(0.0,0.543,0.0);
    glTranslatef(40.5,19,1);
    circle(2,2);
    glPopMatrix();
    glPopMatrix();
    ///4
    glPushMatrix();
    glTranslatef(7,-11,1);
    glPushMatrix();
    glColor3f(0.543,0.3,0.1);
    glRectf(40,5.0,41.0,15.0);
    glColor3f(0.9,0.645,0.3);
    glRectf(39.5,5.0,41.5,4.0);
    glColor3f(0.0,0.543,0.0);
    glTranslatef(40.5,19,1);
    circle(3,3);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,-2,1);
    glColor3f(0.0,0.543,0.0);
    glTranslatef(40.5,19,1);
    circle(2,2);
    glPopMatrix();
    glPushMatrix();

    glTranslatef(0,2,1);
    glColor3f(0.0,0.543,0.0);
    glTranslatef(40.5,19,1);
    circle(2,2);
    glPopMatrix();
    glPopMatrix();
    ///5
    glPushMatrix();
    glTranslatef(-88,-11,1);
    glPushMatrix();
    glColor3f(0.543,0.3,0.1);
    glRectf(40,5.0,41.0,15.0);
    glColor3f(0.9,0.645,0.3);
    glRectf(39.5,5.0,41.5,4.0);
    glColor3f(0.0,0.543,0.0);
    glTranslatef(40.5,19,1);
    circle(3,3);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,-2,1);
    glColor3f(0.0,0.543,0.0);
    glTranslatef(40.5,19,1);
    circle(2,2);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,2,1);
    glColor3f(0.0,0.543,0.0);
    glTranslatef(40.5,19,1);
    circle(2,2);
    glPopMatrix();
    glPopMatrix();

    glPopMatrix();
}


void spinDisplay_left(void)
{
    bus_move+=.03;
    if(bus_move>100)
    {
        bus_move=-4.0;
    }

    //CLOUD MOVEMENT
    cloud_move1+=.37;
    if(cloud_move1>bound)
    {
        cloud_move1=1.0;
    }

    cloud_move2+=.11;
    if(cloud_move2>bound)
    {
        cloud_move2=1.0;
    }

    cloud_move3+=.25;
    if(cloud_move3>bound)
    {
        cloud_move3=1.0;
    }

    cloud_move4+=.05;
    if(cloud_move4>bound)
    {
        cloud_move4=1.0;
    }

    cloud_move5+=.01;
    if(cloud_move5>bound)
    {
        cloud_move5=1.0;
    }

    cloud_move6+=.01;
    if(cloud_move6>bound)
    {
        cloud_move6=1.0;
    }
    cloud_move7+=.01;
    if(cloud_move7>bound)
    {
        cloud_move7=1.0;
    }
    //MAN MOVEMENT
    man1_move+=.03;
    if(man1_move>95)
    {
        man1_move=-4.0;
    }
    man2_move+=.004;
    if(man2_move>90)
    {
        man2_move=-1.0;
    }
    man3_move+=.01;
    if(man3_move>90)
    {
        man3_move=-1.0;
    }
     boat_move1+=.01;
     if(boat_move1>80)
     {
         boat_move1=-4.0;
     }
    //WINDMILL MOVEMENT
    spin = spin - 0.05;
    if (spin < 0.0)
        spin = spin +360.0;
    glutPostRedisplay();


    glutPostRedisplay();
}


void sun()
{
    glPushMatrix();

    glColor3f(1.0,0.843,0.0);
    glTranslatef(10,43,0);
    circle(3.5,5);
    glPopMatrix();
}
void whilemil()
{
    glColor3f(1.0, 1.0, 0.0);
    glRectf(22,13,23,-4);
    glPushMatrix();
    glTranslatef(23,15,0);
    glRotatef(spin, 0.0, 0.0, 1.0);
    glColor3f(0.73,0.6,0.6);
    glRectf(-0.5,10,0.5,-10);
    glRectf(7,-0.5,-7,1);
    glColor3f(0.0, 1.0, 0.0);
    circle(3.5,5);
    glPopMatrix();
}
void man1()
{
    glTranslatef(-2,0,0);
    glPushMatrix();
    glTranslatef(-35,10,0);
    glColor3f(0.0,00,0.0);
    circle(1.5,2);
    glRectf(-0.5,0,0,-3);
    glRectf(-2.5,-4,2.5,-4.5);
    glRectf(-1.5,-3,1.5,-5.5);
    glRectf(0.5,-4,0.8,-8.5);
    glRectf(-0.5,-4,-0.8,-8.5);
    glPopMatrix();
    glEnd();
}
void man2()
{
    glTranslatef(8,-5,0);
    glPushMatrix();
    glTranslatef(-35,10,0);
    glColor3f(0.0,00,0.0);
    circle(1.5,2);
    glRectf(-0.5,0,0,-3);
    glRectf(-2.5,-4,2.5,-4.5);
    glRectf(-1.5,-3,1.5,-5.5);
    glRectf(0.5,-4,0.8,-8.5);
    glRectf(-0.5,-4,-0.8,-8.5);
    glPopMatrix();
    glEnd();
}
void man3()
{
    glTranslatef(-8,-2,0);
    glPushMatrix();
    glTranslatef(-35,10,0);
    glColor3f(0.0,00,0.0);
    circle(1.5,2);
    glRectf(-0.5,0,0,-3);
    glRectf(-2.5,-4,2.5,-4.5);
    glRectf(-1.5,-3,1.5,-5.5);
    glRectf(0.5,-4,0.8,-8.5);
    glRectf(-0.5,-4,-0.8,-8.5);
    glPopMatrix();
    glEnd();
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    road();
    bus1();
    fild();
    bulding();
    tree();
    sun();
    whilemil();
    river();
    ship();

    glPushMatrix();
    glTranslatef(boat_move1,0.0,0.0);
    smallShip();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,-cloud_move1,0.0);
    cloud1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,-cloud_move2,0.0);
    cloud2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,-cloud_move3,0.0);
    cloud3();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,-cloud_move4,0.0);
    cloud4();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(man1_move,0.0,0.0);
    man1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(man2_move,0.0,0.0);
    man2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(man3_move,0.0,0.0);
    man3();
    glPopMatrix();

    glFlush();
}

void init(void)
{
    glClearColor (0.53, 0.807, 0.98, 1.0);
    glOrtho(-50.0, 50.0, -50.0, 50.0, -50.0, 50.0);
}
void spe_key(int key, int x, int y)
{
    switch (key)
    {
    case GLUT_KEY_LEFT:
        tx -=0.5;
        std::cout << x << " " << y << std::endl;
        cp[cpidx].x = (double)x;
        cp[cpidx].y = (double)(1000 - y);
        std::cout << cp[cpidx].x << " " << cp[cpidx].y << std::endl;
        cpidx++;
        glutPostRedisplay();
        break;

    case GLUT_KEY_RIGHT:
        tx +=0.5;
        std::cout << x << " " << y << std::endl;
        cp[cpidx].x = (double)x;
        cp[cpidx].y = (double)(1000 - y);
        std::cout << cp[cpidx].x << " " << cp[cpidx].y << std::endl;
        cpidx++;
        glutPostRedisplay();
        break;
    default:
        break;
    }
}
void my_keyboard(unsigned char key, int x, int y)
{

    switch (key)
    {

    case 'l':
        glutIdleFunc(spinDisplay_left);
        break;
    case 's':
        glutIdleFunc(NULL);
        break;

    default:
        break;
    }
}
void my_mouse(int button, int state, int x, int y)
{
    switch (button)
    {
    case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN)
            //  spinDisplay_left();
            glutIdleFunc(spinDisplay_left);
        break;
    case GLUT_MIDDLE_BUTTON:
    case GLUT_RIGHT_BUTTON:
        break;
    default:
        break;
    }
}
int main()
{
    glutInitDisplayMode (GLUT_SINGLE| GLUT_RGB);
    glutInitWindowSize (1600, 1000);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("My Project");
    init();
    glutDisplayFunc(display);
    glutSpecialFunc(spe_key);
    glutMouseFunc(my_mouse);
    glutKeyboardFunc(my_keyboard);
    glutMainLoop();

    for (int j=0;j<200;j++){
        if (cp[j].y == cloud_move1){
            score+=1;
        }
    }
    std::cout << score << std::endl;
    return 0;   /* ANSI C requires main to return int. */
}

