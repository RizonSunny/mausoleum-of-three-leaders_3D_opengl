
#include<bits/stdc++.h>
using namespace std;
#include <stdlib.h>
#include<Windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include<math.h>

#include<stdio.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/GLAUX.h>

double a=0.0,b=10.0,c=70.0;
GLfloat	l_t=0;

GLuint texture[50];
void LoadGLTextures()
{
	glPushMatrix();
	AUX_RGBImageRec* TextureImage;

	glGenTextures(6,texture);

	if (TextureImage = auxDIBImageLoad("D:\\4-2\\Graphics\\3D\\Lab 06\\Lab-06 3D Quad Draw\\bin\\Debug\\floor2.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[0]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}

	if (TextureImage = auxDIBImageLoad("D:\\4-2\\Graphics\\3D\\Lab 06\\Lab-06 3D Quad Draw\\bin\\Debug\\grave_side.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[1]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}
	if (TextureImage = auxDIBImageLoad("D:\\4-2\\Graphics\\3D\\Lab 06\\Lab-06 3D Quad Draw\\bin\\Debug\\grave_side_long.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[2]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}
	if (TextureImage = auxDIBImageLoad("D:\\4-2\\Graphics\\3D\\Lab 06\\Lab-06 3D Quad Draw\\bin\\Debug\\grave_up.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[3]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}
	if (TextureImage = auxDIBImageLoad("D:\\4-2\\Graphics\\3D\\Lab 06\\Lab-06 3D Quad Draw\\bin\\Debug\\stairs.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[4]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}
	if (TextureImage = auxDIBImageLoad("D:\\4-2\\Graphics\\3D\\Lab 06\\Lab-06 3D Quad Draw\\bin\\Debug\\grass.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[5]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}

}
void quad()
{

    glBindTexture(GL_TEXTURE_2D, texture[0]);
        glBegin(GL_QUADS);

            glTexCoord2f(0.0f,1.0f); glVertex3f(-1.0f,1.0f,8.0f);
            glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f,1.0f,1.0f);
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,-1.0f,1.0f);
            glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f,-1.0f,8.0f);

            glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,1.0f,8.0f);
            glTexCoord2f(1.0f,1.0f); glVertex3f(1.0f,1.0f,1.0f);
            glTexCoord2f(1.0f,0.0f); glVertex3f(1.0f,-1.0f,1.0f);
            glTexCoord2f(0.0f,0.0f); glVertex3f(1.0f,-1.0f,8.0f);
        glEnd();

    glBindTexture(GL_TEXTURE_2D, texture[1]);
        glBegin(GL_QUADS);
            glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,1.0f,8.0f);
            glTexCoord2f(1.0f,1.0f); glVertex3f(1.0f,1.0f,1.0f);
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,1.0f,1.0f);
            glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f,1.0f,8.0f);

            glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,-1.0f,8.0f);
            glTexCoord2f(1.0f,1.0f); glVertex3f(1.0f,-1.0f,1.0f);
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,-1.0f,1.0f);
            glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f,-1.0f,8.0f);
        glEnd();

    glBindTexture(GL_TEXTURE_2D, texture[2]);
        glBegin(GL_QUADS);

            glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,1.0f,1.0f);
            glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f,1.0f,1.0f);
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,-1.0f,1.0f);
            glTexCoord2f(0.0f,0.0f); glVertex3f(1.0f,-1.0f,1.0f);

            glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,1.0f,8.0f);
            glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f,1.0f,8.0f);
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,-1.0f,8.0f);
            glTexCoord2f(0.0f,0.0f); glVertex3f(1.0f,-1.0f,8.0f);
    glEnd();
}
void init(void)
{
    LoadGLTextures();
    glClearColor (.5294, .8078, .980, 0);
}

void field()
{

    glBindTexture(GL_TEXTURE_2D, texture[5]);
    glBegin(GL_POLYGON);

    glTexCoord2f(0.0f,1.0f);glVertex3f(70.0f,-5.0f,-100.0f);
    glTexCoord2f(1.0f,1.0f);glVertex3f(-70.0f,-5.0f,-100.0f);
    glTexCoord2f(1.0f,0.0f);glVertex3f(-70.0f,-5.0f,100.0f);
    glTexCoord2f(0.0f,0.0f);glVertex3f(70.0f,-5.0f,100.0f);
    glEnd();

}

void roof(int x, int y, int z)
{
    int x1,x2f,x3,y1,y2f,y3,x2b,y2b,z1,z2f,z2b,z3;
    x1=x+5;
    y1=y;
    z1=z;
    x3=x-5;
    y3=y;
    z3=z;
    x2f=x;
    y2f=y+25;
    z2f=z+8;

    x2b=x;
    y2b=y+8;
    z2b=z-5;

    glBegin(GL_LINE_STRIP);
    for( float i = 0 ; i < 1 ; i += 0.0001 )
    {
        float tempx=(1-i)*(1-i)*x1+2*(1-i)*i*x2f+i*i*x3;
        float tempy=(1-i)*(1-i)*y1+2*(1-i)*i*y2f+i*i*y3;
        float tempz=(1-i)*(1-i)*z1+2*(1-i)*i*z2f+i*i*z3;


       glColor3f(.933f,.87f,.5f);
        glPointSize(100);
        glVertex3f( tempx, tempy, tempz );

         glColor3f(.721f,.525f,.04f);
        glPointSize(5);
        glVertex3f( x2b, y2b, z2b );
    }
    glEnd();

    glColor3f(1.0f,1.0f,1.0f);

}

void roof_coto(int x, int y, int z)
{
    int x1,x2f,x3,y1,y2f,y3,x2b,y2b,z1,z2f,z2b,z3;

    x1=x+5;
    y1=y;
    z1=z;
    x3=x-5;
    y3=y;
    z3=z;

    x2f=x;
    y2f=y+20;
    z2f=z;

    x2b=x;
    y2b=y+8;
    z2b=z-5;

    glBegin(GL_LINE_STRIP);
    for( float i = 0 ; i < 1 ; i += 0.0001 )
    {
        float tempx=(1-i)*(1-i)*x1+2*(1-i)*i*x2f+i*i*x3;
        float tempy=(1-i)*(1-i)*y1+2*(1-i)*i*y2f+i*i*y3;
        float tempz=(1-i)*(1-i)*z1+2*(1-i)*i*z2f+i*i*z3;

        glColor3f(.933f,.87f,.5f);
        glPointSize(100);
        glVertex3f( tempx, tempy, tempz );
        glColor3f(.74f,.71f,.0419f);
        glPointSize(5);
        glVertex3f( x2b, y2b, z2b );
    }
    glEnd();

    glColor3f(1.0f,1.0f,1.0f);

}

void roof_all()
{
    /// front 1 2 3
    glPushMatrix();
    glTranslatef(-10,0,0);
    glRotatef(0,0,1,0);
    roof(0,0,0);
    glPopMatrix();

    roof(0,0,0);
    glPushMatrix();
    glTranslatef(10,0,0);
    glRotatef(0,0,1,0);
    roof(0,0,0);
    glPopMatrix();

/// middle 1 2 3 4 5 6

    glPushMatrix();
    glTranslatef(-15,0,-5);
    glRotatef(-90,0,1,0);
    roof(0,0,0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-5,0,-5);
    glRotatef(-90,0,1,0);
    roof_coto(0,0,0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-5,0,-5);
    glRotatef(90,0,1,0);
    roof_coto(0,0,0);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(5,0,-5);
    glRotatef(90,0,1,0);
    roof_coto(0,0,0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5,0,-5);
    glRotatef(-90,0,1,0);
    roof_coto(0,0,0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(15,0,-5);
    glRotatef(90,0,1,0);
    roof(0,0,0);
    glPopMatrix();

/// back 1 2 3

    glPushMatrix();
    glTranslatef(-10,0,-10);
    glRotatef(180,0,1,0);
    roof(0,0,0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0,-10);
    glRotatef(180,0,1,0);
    roof(0,0,0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(10,0,-10);
    glRotatef(180,0,1,0);
    roof(0,0,0);
    glPopMatrix();
}

void base()
{

    glBindTexture(GL_TEXTURE_2D, texture[0]);
    glBegin(GL_POLYGON);

    glTexCoord2f(0.0f,1.0f);glVertex3f(20.0f,0.0f,-20.0f);
    glTexCoord2f(1.0f,1.0f);glVertex3f(-20.0f,0.0f,-20.0f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-20.0f,0.0f,10.0f);
    glTexCoord2f(0.0f,0.0f);glVertex3f(20.0f,0.0f,10.0f);
    glEnd();

}


void stair()
{
        glBindTexture(GL_TEXTURE_2D, texture[4]);
    glBegin(GL_POLYGON);

    glTexCoord2f(0.0f,1.0f);glVertex3f(20.0f,0.0f,10.0f);
    glTexCoord2f(1.0f,1.0f);glVertex3f(-20.0f,0.0f,10.0f);
    glTexCoord2f(1.0f,0.0f);glVertex3f(-25.0f,-5.0f,15.0f);
    glTexCoord2f(0.0f,0.0f);glVertex3f(25.0f,-5.0f,15.0f);

    glEnd();

    glBegin(GL_POLYGON);

    glTexCoord2f(0.0f,1.0f); glVertex3f(20.0f,0.0f,-20.0f);
    glTexCoord2f(1.0f,1.0f);glVertex3f(20.0f,0.0f,10.0f);
    glTexCoord2f(1.0f,0.0f);glVertex3f(25.0f,-5.0f,15.0f);
    glTexCoord2f(0.0f,0.0f);glVertex3f(25.0f,-5.0f,-25.0f);

    glEnd();

    glBegin(GL_POLYGON);

    glTexCoord2f(0.0f,1.0f);glVertex3f(-20.0f,0.0f,-20.0f);
    glTexCoord2f(1.0f,1.0f);glVertex3f(20.0f,0.0f,-20.0f);
    glTexCoord2f(1.0f,0.0f);glVertex3f(25.0f,-5.0f,-25.0f);
    glTexCoord2f(0.0f,0.0f);glVertex3f(-25.0f,-5.0f,-25.0f);
    glEnd();

    glBegin(GL_POLYGON);

    glTexCoord2f(0.0f,1.0f);glVertex3f(-20.0f,0.0f,10.0f);
    glTexCoord2f(1.0f,1.0f);glVertex3f(-20.0f,0.0f,-20.0f);
    glTexCoord2f(1.0f,0.0f);glVertex3f(-25.0f,-5.0f,-25.0f);
    glTexCoord2f(0.0f,0.0f);glVertex3f(-25.0f,-5.0f,15.0f);
 glEnd();

}

void railling()
{
    for(float i=-15.25;i<=15.25;i+=.25)
    {
        glBegin(GL_LINE_STRIP);
        glLineWidth(4);
        glColor3f(0.0f,0.0f,0.0f);
        glVertex3f(i,1.0f,.25);
        glVertex3f(i,0.0f,.25);
        glEnd();
    }

    glBegin(GL_LINE_STRIP);
    glLineWidth(4);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex3f(-15.25f,1.0f,.25f);
    glVertex3f(-15.25f,0.0f,.25f);
    glVertex3f(15.25f,0.0f,.25f);
    glVertex3f(15.25f,1.0f,.25f);
    glVertex3f(-15.25f,1.0f,.25f);
    glEnd();

    for(float i=-10.25;i<=.25;i+=.25)
    {

        glBegin(GL_LINE_STRIP);
        glLineWidth(4);
        glColor3f(0.0f,0.0f,0.0f);
        glVertex3f(-15.25f,1.0f,i);
        glVertex3f(-15.25f,0.0f,i);
        glEnd();
    }
    glBegin(GL_LINE_STRIP);
    glLineWidth(4);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex3f(-15.25f,1.0f,0.25f);
    glVertex3f(-15.25f,0.0f,0.25f);
    glVertex3f(-15.25f,0.0f,-10.25f);
    glVertex3f(-15.25f,1.0f,-10.25f);
    glVertex3f(-15.25f,1.0f,0.25f);
    glEnd();


    for(float i=-10.25;i<=.25;i+=.25)
    {

        glBegin(GL_LINE_STRIP);
        glLineWidth(5);
        glColor3f(0.0f,0.0f,0.0f);
        glVertex3f(15.25f,1.0f,i);
        glVertex3f(15.25f,0.0f,i);
        glEnd();
    }
    glBegin(GL_LINE_STRIP);
    glLineWidth(4);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex3f(15.25f,1.0f,0.25f);
    glVertex3f(15.25f,0.0f,0.25f);
    glVertex3f(15.25f,0.0f,-10.25f);
    glVertex3f(15.25f,1.0f,-10.25f);
    glVertex3f(15.25f,1.0f,0.25f);
    glEnd();


    for(float i=-15.25;i<=15.25;i+=.25)
    {

        glBegin(GL_LINE_STRIP);
        glLineWidth(5);
        glColor3f(0.0f,0.0f,0.0f);
        glVertex3f(i,1.0f,-10.25);
        glVertex3f(i,0.0f,-10.25);
        glEnd();
    }
    glBegin(GL_LINE_STRIP);
    glLineWidth(4);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex3f(-15.25f,1.0f,-10.25f);
    glVertex3f(-15.25f,0.0f,-10.25f);
    glVertex3f(15.25f,0.0f,-10.25f);
    glVertex3f(15.25f,1.0f,-10.25f);
    glVertex3f(-15.25f,1.0f,-10.25f);
    glEnd();
}

void grave()
{
    glBindTexture(GL_TEXTURE_2D, texture[1]);
    glBegin(GL_POLYGON);

    glTexCoord2f(0.0f,1.0f);glVertex3f(.75f,.75f,0.0f);
    glTexCoord2f(1.0f,1.0f);glVertex3f(-.75f,.75f,0.0f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-.75f,0.0f,0.0f);
    glTexCoord2f(0.0f,0.0f);glVertex3f(.75f,0.0f,0.0f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, texture[2]);
    glBegin(GL_POLYGON);
    glTexCoord2f(0.0f,1.0f);glVertex3f(.75f,.75f,-4.0f);
    glTexCoord2f(1.0f,1.0f);glVertex3f(.75f,.75f,0.0f);
    glTexCoord2f(1.0f,0.0f);glVertex3f(.75f,0.0f,0.0f);
    glTexCoord2f(0.0f,0.0f);glVertex3f(.75f,0.0f,-4.0f);

    glEnd();
    glBegin(GL_POLYGON);

    glTexCoord2f(0.0f,1.0f);glVertex3f(-.75f,.75f,-4.0f);
    glTexCoord2f(1.0f,1.0f);glVertex3f(-.75f,.75f,0.0f);
    glTexCoord2f(1.0f,0.0f);glVertex3f(-.75f,0.0f,0.0f);
    glTexCoord2f(0.0f,0.0f);glVertex3f(-.75f,0.0f,-4.0f);
    glEnd();
    glBindTexture(GL_TEXTURE_2D, texture[3]);
    glBegin(GL_POLYGON);

    glTexCoord2f(0.0f,1.0f);glVertex3f(.75f,.75f,-4.0f);
    glTexCoord2f(1.0f,1.0f);glVertex3f(-.75f,.75f,-4.0f);
    glTexCoord2f(1.0f,0.0f);glVertex3f(-.75f,.75f,0.0f);
    glTexCoord2f(0.0f,0.0f);glVertex3f(.75f,.75f,0.0f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, texture[1]);
    glBegin(GL_POLYGON);

    glTexCoord2f(0.0f,1.0f);glVertex3f(-.75f,.75f,-4.0f);
    glTexCoord2f(1.0f,1.0f);glVertex3f(.75f,.75f,-4.0f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(.75f,0.0f,-4.0f);
    glTexCoord2f(0.0f,0.0f);glVertex3f(-.75f,0.0f,-4.0f);
    glEnd();

}


void grave_placing()
{
    glPushMatrix();
    glTranslated(0,0,-3);
    grave();
    glPopMatrix();

    glPushMatrix();
    glTranslated(10,0,-3);
    grave();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-10,0,-3);
    grave();
    glPopMatrix();


}
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT); /// GL_COLOR_BUFFER_BIT indicates that the buffer is currently enabled for color writing
    glMatrixMode(GL_PROJECTION);       // Specify which matrix is the current matrix mode
    glLoadIdentity();                  // Replace the current matrix with the identity matrix
    int w=glutGet(GLUT_WINDOW_WIDTH);
    int h=glutGet(GLUT_WINDOW_HEIGHT);
    gluPerspective(40,w/h,0.1,100);    // fovy specifies the field of view angle in degrees in y direction, aspect specifies aspect ratio that determines the field of view in the x direction, znear and zfar specifies the distance from viewer to the near and far clipping plane respectively (always positive)
    glMatrixMode(GL_MODELVIEW);       //  To allow transformation on 3D object

    glLoadIdentity();
    gluLookAt(                       //  eyex, eyey, eyez specify the position of the eye point, centerx, centery, centerz specify the position of reference point, upx, upy, upz specify the direction of up vector
        a,b,c,
        0,0,-5,
        0,1,0
    );

   // cout<<c<<endl;
    glPushMatrix();
    glRotatef(l_t,0.0f,1.0f,0.0f);

    glEnable(GL_TEXTURE_2D);
    base();
    grave_placing();
    stair();
    field();
    glDisable(GL_TEXTURE_2D);

    railling();
    roof_all();

    glPopMatrix();

    glutSwapBuffers();

}



void my_keyboard(unsigned char key, int p, int q)
{
    switch (key)
    {
    case 'p':  // pause

        glutIdleFunc(NULL);
        break;
    case 't':  //top view
        a=0.0,b=100.0,c=-8.0,l_t=0;
        glutPostRedisplay();
        glutIdleFunc(NULL);
        break;

    case 'v': //reset view
        a=0.0,b=10.0,c=70.0,l_t=0;
        glutPostRedisplay();
        glutIdleFunc(NULL);
        break;
    default:
        break;
    }
}

void spinDisplay_left(void)		//spin speed
{
    l_t =l_t-0.5;

    glutPostRedisplay();
}

void specialKeys(int key,int x,int y)
{
    if(key==GLUT_KEY_RIGHT)
    {
         if(b<28)b++;
    }
    else if(key==GLUT_KEY_LEFT)
    {
        if(b>-4)b--;
    }
    else if(key==GLUT_KEY_UP)
    {
            c--;
    }
    else if(key==GLUT_KEY_DOWN)
    {
        if(c<70)
            c++;
    }
    glutPostRedisplay();
}


void mouse(int button, int state, int s, int t)
{

    switch (button)
    {
    case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN)

           if(a==0.0 && b==100.0 && c==-8.0)
            {
            }
            else
            {
                glutIdleFunc(spinDisplay_left);
            }
        break;
    case GLUT_RIGHT_BUTTON:
        if (state == GLUT_DOWN)
            glutIdleFunc(NULL);
        break;
    default:
        break;
    }
}

int main()
{

    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (800, 800);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("mausoleum of three leaders");
    init();
    glEnable(GL_DEPTH_TEST);
    glutSpecialFunc(specialKeys);
    glutDisplayFunc(display);
    glutKeyboardFunc(my_keyboard);
    glutMouseFunc(mouse);
    glutMainLoop();
    return 0;
}
