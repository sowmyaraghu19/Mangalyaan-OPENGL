#include<GL/glut.h>
#include<GL/glu.h>
#include<GL/gl.h>
#include<windows.h>
#include<math.h>
#include<iostream>
#include<time.h>
void earth();
void orbit1();
void orbit2();
void orbit3();
void halfmars();
void satellite();
void marsorbit();
int iflag=0,flagr=1,a=1,b=1,flags=1,t,maxflag=0,flag_to_launch=0,launchy=0,bflag=0,scalex=-60,dismantlex=0,dismantley=0;
float pathx,pathy,rpathx,rpathy;
/*flagr=flag for rocket. flagr=1 means rocket in 1st orbit. flagr=2 means rocket in 2nd orbit.
flags=flag for satellite. flags=2 means splitting initiates.
flags=3 rocket is successfully split and satellite is in motion
flags=4 rocket is launched to mars
*/

void drawstring(int x, int y, char *s)
{
char *c;
glColor3f(1,1,1);
glRasterPos2i(x, y);
for (c = s; *c != '\0'; *c++)
glutBitmapCharacter(GLUT_BITMAP_8_BY_13, *c);
}
void stars()
{

    glClear(GL_COLOR_BUFFER_BIT);
    //glLoadIdentity();
glColor3f(1.0,1.0,1.0);
glPointSize(2.0);
drawstring(20,475,"Project by Sowmya 1DT18CS101 and Srilakshmi 1DT18CS103");
drawstring(20,458,"Press 'q' to exit");
glBegin(GL_POINTS);
glVertex2f(50,20);

glVertex2i(70,100);
glVertex2i(80,10);
glVertex2i(65,150);
glVertex2i(67,80);
glVertex2i(105,33);
glEnd();
glPointSize(3.0);
glBegin(GL_POINTS);
glVertex2i(450,300);
glVertex2i(380,110);
glVertex2i(175,63);
glVertex2i(113,125);
glVertex2i(70,10);
glVertex2i(160,330);
glVertex2i(490,430);
glVertex2i(82,65);
glVertex2i(160,440);
glVertex2i(440,490);
glVertex2i(62,90);
glEnd();
glPointSize(0.7);
glBegin(GL_POINTS);
glVertex2i(450,322);
glVertex2i(420,366);
glVertex2i(455,400);
glVertex2i(60,20);
glVertex2i(111,120);
glVertex2i(451,200);
glVertex2i(280,30);
glVertex2i(220,20);
glVertex2i(132,378);
glVertex2i(173,340);
glVertex2i(325,420);
glEnd();
glPointSize(1.2);
glBegin(GL_POINTS);
glVertex2i(180,360);
glVertex2i(383,120);
glVertex2i(200,22);
glVertex2i(342,11);
glVertex2i(330,332);
glVertex2i(283,40);
glVertex2i(210,418);
glVertex2i(256,12);
glVertex2i(288,232);
glEnd();
glPointSize(1.5);
glBegin(GL_POINTS);
glVertex2i(247,36);
glVertex2i(229,342);
glVertex2i(257,47);
glVertex2i(290,63);
glVertex2i(232,72);
glVertex2i(243,143);
glVertex2i(100,200);
glEnd();
glPointSize(2.5);
glBegin(GL_POINTS);
glVertex2i(90,250);
glVertex2i(80,225);
glVertex2i(50,333);
glVertex2i(60,350);
glVertex2i(243,143);
glVertex2f(243,143);
glEnd();

}

void earth()
{
    float theetha;
    glColor3f(0.0,0.3,1.0);
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++)
    {
        theetha=i*3.142/180;
        glVertex2f(180+50*cos(theetha),250+50*sin(theetha));
    }
    glEnd();
    glColor3f(0,1,0.3);
    glBegin(GL_POLYGON);
    glVertex2f(150,290);
    glVertex2f(140,280);
    glVertex2f(145,270);
    glVertex2f(155,260);
    glVertex2f(165,265);
    glVertex2f(170,280);
    glVertex2f(170,298);
    glEnd();
    glColor3f(0,1,0.3);
    glPointSize(2.0);
    glBegin(GL_POLYGON);
    glVertex2f(205,250);
    glVertex2f(203,260);
    glVertex2f(204,265);
    glVertex2f(207,275);
    glVertex2f(215,285);
    glVertex2f(220,280);
    glVertex2f(227,265);
    glVertex2f(230,250);
    glVertex2f(215,245);
    glVertex2f(220,240);
    glVertex2f(227,235);
    glEnd();
    glColor3f(0,1,0.3);
    glBegin(GL_POLYGON);
    glVertex2f(140,220);
    glVertex2f(150,227);
    glVertex2f(165,230);
    glVertex2f(180,227);
    glVertex2f(195,217);
    glVertex2f(200,205);
    glVertex2f(170,202);
    glVertex2f(150,210);
    glVertex2f(185,200);
   // glVertex2f(170,298);
    glEnd();
    glFlush();

}
void halfmars()
{
        float theetha;
   //glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++)
    {
        theetha=i*3.142/180;
        glVertex2f(530+50*cos(theetha),250+50*sin(theetha));
    }
    glEnd();
    //glutSwapBuffers();


  //  glutSwapBuffers();
   // glutSwapBuffers();

glFlush();
}
void marsorbit()
{
    glColor3f(1.0f, 1.0f, 1.0f);
glEnable(GL_LINE_SMOOTH);
//glLineWidth(5.0);
//glRasterPos2i(200,250);
glBegin(GL_LINE_LOOP);
for (GLfloat i = 0; i < 360; i++)
{
    float x = 610+cos(i*3.14/180.f) * 185.5;
    float y = 250+sin(i*3.14/180.f) * 100.5;
    glVertex2f(x, y);
}

glEnd();
glFlush();

}

void orbit3()
{
glColor3f(1.0f, 1.0f, 1.0f);
glEnable(GL_LINE_SMOOTH);
//glLineWidth(5.0);
//glRasterPos2i(200,250);
glBegin(GL_LINE_LOOP);
for (GLfloat i = 0; i < 360; i++)
{
    float x = 269+cos(i*3.14/180.f) * 190.5;
    float y = 250+sin(i*3.14/180.f) * 100.5;
    glVertex2f(x, y);
}

glEnd();
glFlush();
}

void orbit2()
{
glColor3f(1.0f, 1.0f, 1.0f);
glEnable(GL_LINE_SMOOTH);
//glLineWidth(5.0);
//glRasterPos2i(200,250);
glBegin(GL_LINE_LOOP);
for (GLfloat i = 0; i < 360; i++)
{
    float x = 229+cos(i*3.14/180.f) * 150.5;
    float y = 250+sin(i*3.14/180.f) * 90.5;
    glVertex2f(x, y);
}

glEnd();
glFlush();
}

void orbit1()
{
glColor3f(1.0f, 1.0f, 1.0f);
glEnable(GL_LINE_SMOOTH);
//glLineWidth(5.0);

//glRasterPos2i(200,250);
glBegin(GL_LINE_LOOP);
for (GLfloat i = 0; i < 360; i++)
{
    float x = 200+cos(i*3.14/180.f) * 120.5;
    float y = 250+sin(i*3.14/180.f) * 70.5;
    glVertex2f(x, y);
}

glEnd();
glFlush();
}

void keyboard(unsigned char key, int x, int y)
{
if (key == 'l' || key == 'L')
{
        flags=2;
}
if (key == 'Q' || key == 'q')
exit(0);

if(key=='s'||key=='S')
       {
        //scalex=71;
        //a=0;
       }
if(key=='m'||key=='M')
       {
        flags=4;
       }
if (key == 'g' || key=='G')
{
    flag_to_launch=1;
}

}


void loopr(int)
{
    glutPostRedisplay();
    //glutSwapBuffers();
    glutTimerFunc(2,loopr,0);
    if(flag_to_launch==1)
    {
        launchy+=1;
    }
    else if(bflag==1)
    {
    if(scalex<3)
        scalex+=1;
    else
        {
        //bflag=0;
        //iflag=1;
        scalex+=1;
        dismantlex+=1;
        dismantley+=1;
        }

    }
    else
    {
        if(a==360)
        a=1;
    if(a!=0)
    {
        if(flags==1)
        {
            pathx=230+cos(a*3.14/180.f) * 245.5;
            pathy = 200+sin(a*3.14/180.f) * 150.5;
        }
        else if(flags==2)
        {
            pathx=290+cos(a*3.14/180.f) * 285.5;
            pathy = 200+sin(a*3.14/180.f) * 180.5;

        }
        else{  //paths of satellite
            if(flags==3){
            pathx = 280+cos(a*3.14/180.f) * 300.5;
            pathy = 210+sin(a*3.14/180.f) * 180.5;
        }
        if(flags==4){
            if(maxflag==1)
            {
            pathx=330+cos(a*3.14/180.f) * 245.5;
            pathy = 200+sin(a*3.14/180.f) * 200.5;

            }
        else {
             pathx = 360+cos(a*3.14/180.f) * 380.5;
             pathy = 210+sin(a*3.14/180.f) * 210.5;
        }
             if(maxflag==0&&a==330)
             {
                maxflag=1;
                a=200;
               //  pathx = 610+cos(a*3.14/180.f) * 185.5;
               // pathy = 250+sin(a*3.14/180.f) * 100.5;
             }


        }
        }
    a+=1;
    }
    Sleep(30);
    }
}


void satellite()
{
    //glLoadIdentity();
    glScalef(0.5,0.5,0);
   glTranslatef(pathx+70,pathy+170,0.5);
    Sleep(10);
  //  glRotatef(340,0,0,1);
    int x,y,p,q;
    x=35;
    y=7;
    p=0;
    q=20;


    glColor3f(1.0f,0.7f,0.0f);    //square
    glBegin(GL_POLYGON);
    glVertex2f(x+50,y+100);
    glVertex2f(x+80,y+100);
    glVertex2f(x+80,y+140);
    glVertex2f(x+50,y+140);
    glEnd();

    glColor3f(1.0f,1.0f,1.0f);  //left link
    glBegin(GL_LINE_LOOP);
    glVertex2f(80,125);
    glVertex2f(x+50,y+100);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(80,125);
    glVertex2f(x+50,y+140);
    glEnd();

    glBegin(GL_LINE_LOOP);   //right link
    glVertex2f(121,125);
    glVertex2f(x+80,y+100);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(121,125);
    glVertex2f(x+80,y+140);
    glEnd();

    glColor3f(0.0f,0.0f,1.0f); //left plate
    glBegin(GL_POLYGON);
    glVertex2f(p+30,q+90);
    glVertex2f(p+80,q+90);
    glVertex2f(p+80,q+120);
    glVertex2f(p+30,q+120);
    glEnd();

    p=110;
    glBegin(GL_POLYGON);     //right plate
    glVertex2f(p+10,q+90);
    glVertex2f(p+60,q+90);
    glVertex2f(p+60,q+120);
    glVertex2f(p+10,q+120);
    glEnd();

    glColor3f(1.0f,1.0f,1.0f);  //right plate lines
    glBegin(GL_LINE_LOOP);
    glVertex2f(p+45,q+90);
    glVertex2f(p+45,q+120);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(p+25,q+90);
    glVertex2f(p+25,q+120);
    glEnd();

    p=0;
    glBegin(GL_LINE_LOOP);    //left plate lines
    glVertex2f(p+65,q+90);
    glVertex2f(p+65,q+120);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(p+45,q+90);
    glVertex2f(p+45,q+120);
    glEnd();
    //glutSwapBuffers();
    //glutPostRedisplay();
    //glutTimerFunc(2000,movesatellite,pos);
    glFlush();

}



void staticfns()
{
    stars();
    earth();
    if(flags==1)
    {orbit1();
    drawstring(170,415,"Press 'l' to go to the next ellipse");
    }
if(flags==2)
{

        drawstring(200,415,"Press 'm' to go to Mars");
         orbit2();
    }
    if(flags==4)
    {
    orbit3();
    drawstring(140,415,"Observe the intersecting point of the two orbits");
    }
    marsorbit();
    halfmars();
}

void rocket_on_ground()
{
    int x=15,y=230;
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glClearColor(0.0f,1.0f,1.0f,1.0f);
    glColor3f(0.0f,1.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0,0);
    glVertex2f(500,0);
    glVertex2f(500,100);
    glVertex2f(0,100);
    glEnd();


    glScalef(4,4,4);
    glTranslatef(0,launchy,0);


    glColor3f(1.0,1.0,1.0);  //bonnet
glBegin(GL_POLYGON);
glVertex2f(80-x,280-y);
glVertex2f(75-x,290.0-y);
glVertex2f(70-x,280-y);
glEnd();
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);    //main body top white
glVertex2f(70-x,270.0-y);
glVertex2f(70-x,280.0-y);
glVertex2f(80-x,280.0-y);
glVertex2f(80-x,270.0-y);
glEnd();
glColor3f(1.0,0.5,0.0);
glBegin(GL_LINE_LOOP);    //orange of flag
glVertex2f(72.5-x,278.0-y);
glVertex2f(78-x,278.0-y);
glEnd();
glColor3f(0.0,1.0,0.0);
glBegin(GL_LINE_LOOP);    //green of flag
glVertex2f(72.5-x,276.0-y);
glVertex2f(78-x,276.0-y);
glEnd();
glColor3f(0.0,0.0,0.7);
    glPointSize(3.0);
glBegin(GL_POINTS);         //blue of flag
glVertex2f(75-x,277.0-y);
glEnd();
    glColor3f(1.0,0.25,0.0);
glBegin(GL_POLYGON);    //main body top red
glVertex2f(80-x,270.0-y);
glVertex2f(80-x,260.0-y);
glVertex2f(70-x,260.0-y);
glVertex2f(70-x,270.0-y);
glEnd();
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);    //main body white
glVertex2f(70-x,260.0-y);
glVertex2f(70-x,250.0-y);
glVertex2f(80-x,250.0-y);
glVertex2f(80-x,260.0-y);
glEnd();
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON); // left exhaust vent
glVertex2f(68-x,250-y);
glVertex2f(70-x,260-y);
glVertex2f(70-x,250-y);
glVertex2f(68-x,260-y);
glEnd();
glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON); // right exhaust vent
glVertex2f(82-x,250-y);
glVertex2f(80-x,260-y);
glVertex2f(80-x,250-y);
glVertex2f(82-x,260-y);
glEnd();

glColor3f(0.556863 ,0.137255  ,0.419608);
glBegin(GL_POLYGON);//bottom_2_exhaust
glVertex2f(70-x,250-y);
glVertex2f(73-x,245-y);
glVertex2f(75-x,250-y);
glEnd();
glBegin(GL_POLYGON);//bottom_3_exhaust
glVertex2f(75-x,250-y);
glVertex2f(77-x,245-y);
glVertex2f(80-x,250-y);
glEnd();
glBegin(GL_POLYGON);//bottom_1_exhaust
glVertex2f(68-x,250-y);
glVertex2f(69-x,245-y);
glVertex2f(70-x,250-y);
glEnd();
glBegin(GL_POLYGON);//bottom_4_exhaust
glVertex2f(80-x,250-y);
glVertex2f(81-x,245-y);
glVertex2f(82-x,250-y);
glEnd();
    //iflag=1;
    //glutSwapBuffers();
    Sleep(30);
    if(launchy==70)
    {
        //glClearColor(0,0,0,1);
            bflag=1;
            flag_to_launch=0;
    }
    glFlush();

}
void convert_r_to_s()
{
    glClear(GL_COLOR_BUFFER_BIT);
    //glLoadIdentity();
    int x=15,y=200;
    glClearColor(0,0,0,1);
    stars();
    //glTranslatef(-20,-200,0);
    //earth();
    //orbit1();
    //halfmars();
    //marsorbit();
    if(scalex>=3 && scalex<120)
{
    glTranslatef(1,1,0);
    satellite();
            glTranslatef(-1,-1,0);
    glScalef(4,4,0);
    glRotatef(335,0,0,1);
    glTranslatef(x+dismantlex-65,y+dismantley-240,0);
    glColor3f(1.0,1.0,1.0);  //bonnet
glBegin(GL_POLYGON);
glVertex2f(80-x,280-y);
glVertex2f(75-x,290.0-y);
glVertex2f(70-x,280-y);
glEnd();

glTranslatef(-(x+dismantlex-65),-(y+dismantley-240),0);
glTranslatef(x-dismantlex-65,y-240,0);

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);    //main body top white
glVertex2f(70-x,270.0-y);
glVertex2f(70-x,280.0-y);
glVertex2f(80-x,280.0-y);
glVertex2f(80-x,270.0-y);
glEnd();
glColor3f(1.0,0.5,0.0);
glBegin(GL_LINE_LOOP);    //orange of flag
glVertex2f(72.5-x,278.0-y);
glVertex2f(78-x,278.0-y);
glEnd();
glColor3f(0.0,1.0,0.0);
glBegin(GL_LINE_LOOP);    //green of flag
glVertex2f(72.5-x,276.0-y);
glVertex2f(78-x,276.0-y);
glEnd();
glColor3f(0.0,0.0,0.7);
    glPointSize(3.0);
glBegin(GL_POINTS);         //blue of flag
glVertex2f(75-x,277.0-y);
glEnd();

glTranslatef(-(x-dismantlex-65),-(y-240),0);
glTranslatef(x+dismantlex-65,y-240,0);

    glColor3f(1.0,0.25,0.0);
glBegin(GL_POLYGON);    //main body top red
glVertex2f(80-x,270.0-y);
glVertex2f(80-x,260.0-y);
glVertex2f(70-x,260.0-y);
glVertex2f(70-x,270.0-y);
glEnd();

glTranslatef(-(x+dismantlex-65),-(y-240),0);
glTranslatef(x-dismantlex-65,y-dismantley-240,0);

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);    //main body white
glVertex2f(70-x,260.0-y);
glVertex2f(70-x,250.0-y);
glVertex2f(80-x,250.0-y);
glVertex2f(80-x,260.0-y);
glEnd();
glColor3f(0.556863 ,0.137255  ,0.419608);
glBegin(GL_POLYGON);//bottom_2_exhaust
glVertex2f(70-x,250-y);
glVertex2f(73-x,245-y);
glVertex2f(75-x,250-y);
glEnd();
glBegin(GL_POLYGON);//bottom_3_exhaust
glVertex2f(75-x,250-y);
glVertex2f(77-x,245-y);
glVertex2f(80-x,250-y);
glEnd();

glTranslatef(-(x-dismantlex-65),-(y-dismantley-240),0);
glTranslatef(x-dismantlex-65,y-240,0);

    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON); // left exhaust vent
glVertex2f(68-x,250-y);
glVertex2f(70-x,260-y);
glVertex2f(70-x,250-y);
glVertex2f(68-x,260-y);
glEnd();
glColor3f(0.556863 ,0.137255  ,0.419608);
glBegin(GL_POLYGON);//bottom_1_exhaust
glVertex2f(68-x,250-y);
glVertex2f(69-x,245-y);
glVertex2f(70-x,250-y);
glEnd();

glTranslatef(-(x-dismantlex-65),-(y-240),0);
glTranslatef(x+dismantlex-65,y-240,0);

glColor3f(0.556863 ,0.137255  ,0.419608);
glBegin(GL_POLYGON);//bottom_4_exhaust
glVertex2f(80-x,250-y);
glVertex2f(81-x,245-y);
glVertex2f(82-x,250-y);
glEnd();
glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON); // right exhaust vent
glVertex2f(82-x,250-y);
glVertex2f(80-x,260-y);
glVertex2f(80-x,250-y);
glVertex2f(82-x,260-y);
glEnd();
glTranslatef(-(x+dismantlex-65),-(y-240),0);

Sleep(30);

}
else if(scalex<3){
    glTranslatef(x+scalex+130,y+scalex-10,0);
    glScalef(2,2,0);
    //glTranslatef(x,y+scalex,0);
    //Sleep(30);
    glRotatef(335,0,0,1);
    glColor3f(1.0,1.0,1.0);  //bonnet
glBegin(GL_POLYGON);
glVertex2f(80-x,280-y);
glVertex2f(75-x,290.0-y);
glVertex2f(70-x,280-y);
glEnd();
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);    //main body top white
glVertex2f(70-x,270.0-y);
glVertex2f(70-x,280.0-y);
glVertex2f(80-x,280.0-y);
glVertex2f(80-x,270.0-y);
glEnd();
glColor3f(1.0,0.5,0.0);
glBegin(GL_LINE_LOOP);    //orange of flag
glVertex2f(72.5-x,278.0-y);
glVertex2f(78-x,278.0-y);
glEnd();
glColor3f(0.0,1.0,0.0);
glBegin(GL_LINE_LOOP);    //green of flag
glVertex2f(72.5-x,276.0-y);
glVertex2f(78-x,276.0-y);
glEnd();
glColor3f(0.0,0.0,0.7);
    glPointSize(3.0);
glBegin(GL_POINTS);         //blue of flag
glVertex2f(75-x,277.0-y);
glEnd();
    glColor3f(1.0,0.25,0.0);
glBegin(GL_POLYGON);    //main body top red
glVertex2f(80-x,270.0-y);
glVertex2f(80-x,260.0-y);
glVertex2f(70-x,260.0-y);
glVertex2f(70-x,270.0-y);
glEnd();
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);    //main body white
glVertex2f(70-x,260.0-y);
glVertex2f(70-x,250.0-y);
glVertex2f(80-x,250.0-y);
glVertex2f(80-x,260.0-y);
glEnd();
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON); // left exhaust vent
glVertex2f(68-x,250-y);
glVertex2f(70-x,260-y);
glVertex2f(70-x,250-y);
glVertex2f(68-x,260-y);
glEnd();
glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON); // right exhaust vent
glVertex2f(82-x,250-y);
glVertex2f(80-x,260-y);
glVertex2f(80-x,250-y);
glVertex2f(82-x,260-y);
glEnd();

glColor3f(0.556863 ,0.137255  ,0.419608);
glBegin(GL_POLYGON);//bottom_2_exhaust
glVertex2f(70-x,250-y);
glVertex2f(73-x,245-y);
glVertex2f(75-x,250-y);
glEnd();
glBegin(GL_POLYGON);//bottom_3_exhaust
glVertex2f(75-x,250-y);
glVertex2f(77-x,245-y);
glVertex2f(80-x,250-y);
glEnd();
glBegin(GL_POLYGON);//bottom_1_exhaust
glVertex2f(68-x,250-y);
glVertex2f(69-x,245-y);
glVertex2f(70-x,250-y);
glEnd();
glBegin(GL_POLYGON);//bottom_4_exhaust
glVertex2f(80-x,250-y);
glVertex2f(81-x,245-y);
glVertex2f(82-x,250-y);
glEnd();
Sleep(30);
}
else{
iflag=1;
bflag=0;
}

    glFlush();
}


void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    if(iflag==0 && bflag==0)
    {
        rocket_on_ground();
        //launch_rocket();
    }
    else if(bflag==1)
    {
        convert_r_to_s();
    }
    else
    {
    glClearColor(0,0,0,1);
    staticfns();
    if(flags==4 && maxflag==1)
    {
         glClear(GL_COLOR_BUFFER_BIT);
         glLoadIdentity();
         stars();
         drawstring(50,415,"India's first Mars mission 'Mangalyaan' was a huge success in the very first try.");
         drawstring(240,400,"Thank you!");
         glColor3f(0.8,0.2,0.0);
         float theetha;
        glBegin(GL_POLYGON);
        for(int i=0;i<360;i++)
        {
            theetha=i*3.142/180;
            glVertex2f(250+45*cos(theetha),250+45*sin(theetha));
        }
        glEnd();
        glColor3f(1,0,0.0);
        glBegin(GL_POLYGON);
        for(int i=0;i<360;i++)
        {
            theetha=i*3.142/180;
            glVertex2f(235+5*cos(theetha),250+5*sin(theetha));
        }
        glEnd();
        glColor3f(1,0,0.0);
        glBegin(GL_POLYGON);
        for(int i=0;i<360;i++)
        {
            theetha=i*3.142/180;
            glVertex2f(230+3*cos(theetha),260+3*sin(theetha));
        }
        glEnd();
        glColor3f(1,0,0.0);
        glBegin(GL_POLYGON);
        for(int i=0;i<360;i++)
        {
            theetha=i*3.142/180;
            glVertex2f(270+3*cos(theetha),220+3*sin(theetha));
        }
        glEnd();
        glColor3f(1,0,0.0);
        glBegin(GL_POLYGON);
        for(int i=0;i<360;i++)
        {
            theetha=i*3.142/180;
            glVertex2f(250+2*cos(theetha),270+2*sin(theetha));
        }
        glEnd();
        glColor3f(1,0,0.0);
        glBegin(GL_POLYGON);
        for(int i=0;i<360;i++)
        {
            theetha=i*3.142/180;
            glVertex2f(260+4*cos(theetha),230+4*sin(theetha));
        }
        glEnd();
        glColor3f(1,0,0.0);
        glBegin(GL_POLYGON);
        for(int i=0;i<360;i++)
        {
            theetha=i*3.142/180;
            glVertex2f(270+3*cos(theetha),280+3*sin(theetha));
        }
        glEnd();
        satellite();
        glFlush();

    }
    else
        satellite();
    }


     glutSwapBuffers();
}

void reshape (int w, int h)
{
   glViewport (0, 0, (GLsizei) w, (GLsizei) h);
   glMatrixMode (GL_PROJECTION);
   glLoadIdentity ();
   gluOrtho2D(0.0,500.0,0.0,500.0);
   glMatrixMode(GL_MODELVIEW);

}

void myInit()
{
    glClearColor(0,0,0,1);
    //glMatrixMode(GL_PROJECTION);
    //glLoadIdentity();
    //gluOrtho2D(0.0,500.0,0.0,650.0);
    //glMatrixMode(GL_MODELVIEW);
    glShadeModel(GL_FLAT);
}


int main(int argc,char *argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800,600);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Mangalyaan");
    myInit();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(0,loopr,0);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
