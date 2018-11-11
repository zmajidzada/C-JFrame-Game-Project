

#include "stdafx.h"
#include "glut.h" 



#define KEY_UP 101
#define KEY_DOWN 103
#define KEY_LEFT 100
#define KEY_RIGHT 102

float theta=0.0;

float sx=1;
float sy=1;
float tx=0;
float ty=0;


float ax=1;
float ay=1;
float yx=0;
float yy=0;


int frame=0;
int frame2=0;



void letter_Z()
{
	glColor3f (2.0, 3.0, 4.0);
 
    glLineWidth(10.0);  
   
   glBegin(GL_LINES);
   
	  
      
      glVertex2i(100, 300);
	  glVertex2i(200,300);

	  glVertex2i(200, 300);
	  glVertex2i(100,150);

	  glVertex2i(100, 150);
	  glVertex2i(200,150);
     
     
     

 glEnd();
}

void letter_M()
{

	glColor3f(0.5,0.5,0.5);

   if (frame>3)
	   frame=0;
   if (frame==1)
	   glColor3f(1.2,2.1,2.1);
   if (frame==2)
	   glColor3f(1.3,2.1,3.0);
   if (frame==3)
	   glColor3f(1.2,3.0,1.0);
 
    glLineWidth(10.0); 
   
   glBegin(GL_LINES);
   	

	  glVertex2i(250,150);
	  glVertex2i(250,300);

	  glVertex2i(250, 300);
	  glVertex2i(300,225);

	  glVertex2i(300,225);
	  glVertex2i(340,300);

	  
	  glVertex2i(340,300);
	  
	  glVertex2i(340,150);
     
     
       glEnd();
 
}

void display(void)
{
	glClear (GL_COLOR_BUFFER_BIT); 
	if (frame2==0)
	 glClearColor(0.2, 2.1, 1.2,1.0);
	if (frame2==1)
		 glClearColor(1.2,2.1,2.1,2.0);
	if (frame2==2)
		 glClearColor(0.0, 1.2,2.2,0.0);

	glPushMatrix(); 
		
		glScalef(sx,sy,1);
		glTranslatef(ty,tx,0.0); 	
		glTranslatef(320,100,0);
		
		glRotatef(ax,0,0,1.0);		
		
		glTranslatef(-1*320,-1*100,0);

		
		letter_Z();	
		letter_M();



	glPopMatrix(); 
	   glPushMatrix();
	//glRotatef(theta, 0, 0, 1.0);	// Rotation around origin.
	glTranslatef(75, 75 , 0);
	glRotatef(ax, 0, 0, 1);
	glTranslatef(-75, -75 , 0);
	letter_Z();	
		letter_M();

	//square();
  glPopMatrix();

   glFlush ();

	glFlush();

}


void init (void) 
{

	glClearColor (1.2, 2.1, 0.1, 0.0);
   


   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
 
	gluOrtho2D( 0,500,0,500);


}

void window_special_key(int key, int x, int y)
{
	switch (key) 
	{
	case KEY_LEFT: 
		{
		tx=tx - 1.50;
		ty=ty - 0;
		glutPostRedisplay();
		break;
		}
	case KEY_RIGHT:
		{
		tx=tx + 1.50;
		ty=ty + 0;		
		glutPostRedisplay();
		break;
		}
	case KEY_UP: 
		{
		ax=ax+1.50;
		frame++;

		glutPostRedisplay();
		break;
		}
	case KEY_DOWN:
		{

		ax=ax-1.50;
		frame2++;			
		glutPostRedisplay();		
		break;
		}
		   
	case 27: 
        {
		exit(0);
	    }
	}
}
static void Mouse(int button,int state,int mouseX,int mouseY)
{
	if(state==GLUT_DOWN)
	{
		if(button==GLUT_LEFT_BUTTON)
		{
					sx=sx+0.8;
		sy=sy+0.4;

				glutPostRedisplay();
		}
		else if(button==GLUT_RIGHT_BUTTON)
		{
		sx=sx-0.8;
		sy=sy-0.4;		
				glutPostRedisplay();
		}
	}
	
}


int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize (500, 500); 
   glutInitWindowPosition (100, 100);
   glutCreateWindow ("My Intitial");
   init ();
   glutDisplayFunc(display); 
   glutSpecialFunc(& window_special_key);
   glutMouseFunc(Mouse);
   printf("Up Key to Move Up, Down key to Move down");
   printf("Use Mouse to Rotate");
   glutMainLoop();
   return 0;  
}
