// wobbling-06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "glut.h"
#include <math.h>

void circle( double radius, double xc, double yc)
{
	int i;
	double angle = 2*3.1415/20;	// circle is drawn using 20 line.
	double x, y;

	glBegin(GL_LINE_LOOP);
	for(i=0;i<20;i++)
	{
		x = radius * cos (i *angle) + xc;
		y = radius * sin (i * angle) + yc;
		glVertex2f(x,y);	
	}
	glEnd();
}

void flag(void)
{
/* clear all pixels  */
	int x_r, y_r;
  glClear (GL_COLOR_BUFFER_BIT);

   glColor3f (0.0, 0.0, 1.0);
  glBegin(GL_POLYGON);	

	  glVertex2i (90, 350);
      glVertex2i (90, 450);
      glVertex2i (200+rand()%10,450+rand()%10);
      glVertex2i (200+rand()%10,350+rand()%10);

   glEnd();

   glColor3f (0.3, 0.0, 0.0);
   
   glLineWidth(10.0);
   glBegin(GL_LINES);

    glVertex2i (90, 460);
    glVertex2i (90, 150);
     glEnd();

   glLineWidth(3.0);
   glBegin(GL_LINES);
   glColor3f (1.0, 0.0, 0.0);
	
    glVertex2i (105, 430);

    glVertex2i (120, 430);

	glVertex2i (105+rand()%10,430+rand()%10);
	 glVertex2i (105+rand()%10,430+rand()%10);
	
     glEnd();
	 
   glLineWidth(3.0);
   glBegin(GL_LINES);

	 glVertex2i (105, 430);
   
    glVertex2i (105, 385);
    glEnd();
	

    glLineWidth(3.0);
    glBegin(GL_LINES);


	 glVertex2i (105, 410);
     glVertex2i (120, 410);
	
     glVertex2i (105+rand()%10,410+rand()%10);
	 glVertex2i (110+rand()%10,410+rand()%10);

   glEnd();

   
    glLineWidth(3.0);
    glBegin(GL_LINES);


	 glVertex2i (140, 430);
     glVertex2i (140, 420);

	 
   glEnd();

   
    glLineWidth(3.0);
    glBegin(GL_LINES);


	 glVertex2i (140, 430);
     glVertex2i (125, 430);
    
     glVertex2i (130+rand()%10,430+rand()%10);
	 glVertex2i (125+rand()%10,430+rand()%10);
	 
   glEnd();
       
    glLineWidth(3.0);
    glBegin(GL_LINES);


	 glVertex2i (125, 430);
     glVertex2i (125, 390);
    
	 
   glEnd();

   
    glLineWidth(3.0);
    glBegin(GL_LINES);


	 glVertex2i (125, 390);
     glVertex2i (140, 390);
     glVertex2i (125+rand()%10,390+rand()%10);
	 glVertex2i (125+rand()%10,390+rand()%10);
	 
	 
   glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);


	 glVertex2i (140, 390);
     glVertex2i (140, 400);

	 
     
   glEnd();

     glLineWidth(3.0);
    glBegin(GL_LINES);


	 glVertex2i (145, 430);
     glVertex2i (165, 430);
     
	 glVertex2i (145+rand()%10,430+rand()%10);
	 glVertex2i (155+rand()%10,430+rand()%10);
     glEnd();

     glLineWidth(3.0);
     glBegin(GL_LINES);
     glVertex2i (155, 430);
     glVertex2i (155, 385);
     
	 glVertex2i (155+rand()%10,430+rand()%10);
	 glVertex2i (155+rand()%10,430+rand()%10);

	  glEnd();

   
    glLineWidth(3.0);
    glBegin(GL_LINES);


	 glVertex2i (165, 385);
     glVertex2i (170, 430);
     	 
	 
   glEnd();

       glLineWidth(3.0);
    glBegin(GL_LINES);


	 glVertex2i (170, 430);
     glVertex2i (180, 430);
     
	 glVertex2i(170+rand()%10,430+rand()%10);
	 glVertex2i (170+rand()%10,430+rand()%10);

	 
   glEnd();
   
     glLineWidth(3.0);
    glBegin(GL_LINES);


	 glVertex2i (180, 430);
     glVertex2i (185, 385);
     
	 glVertex2i(170+rand()%10,430+rand()%10);
	 glVertex2i (170+rand()%10,430+rand()%10);

	 
   glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);


	 glVertex2i (165, 410);
     glVertex2i (185, 410);
     
	 glVertex2i(166+rand()%10,410+rand()%10);
	 glVertex2i (175+rand()%10,410+rand()%10);



	 
   glEnd();

   glBegin(GL_LINES);

	 glVertex2i (30, 230);
     glVertex2i (30, 210);

	 glVertex2i (40, 230);
     glVertex2i (40, 210);
       
     glVertex2i (10, 210);
     glVertex2i (60, 210);

	  glVertex2i (60, 210);
     glVertex2i (60, 190);

	  glVertex2i (60,190);
     glVertex2i (90, 190);



	 glVertex2i (10, 210);
     glVertex2i (10, 170);

	 
	 glVertex2i (10, 170);
     glVertex2i (90, 170);
     

	 glVertex2i (15, 210);
     glVertex2i (15, 80);
     glVertex2i (15, 80);
     glVertex2i (35, 80);

	 glVertex2i (35, 80);
     glVertex2i (35, 90);

	 glVertex2i (35, 90);
     glVertex2i (25, 90);

	 glVertex2i (25, 90);
     glVertex2i (25, 135);

	 glVertex2i (25,135);
     glVertex2i (45, 135);

	 glVertex2i (45, 135);
     glVertex2i (45,80);

	 glVertex2i (45, 80);
     glVertex2i (65, 80);

	 glVertex2i (65, 80);
     glVertex2i (65, 90);

	 glVertex2i (65, 90);
     glVertex2i (55, 90);
    
	 glVertex2i (55, 90);
     glVertex2i (55, 210);
     
     
    glEnd();
//	drawing teddy bear

	
	circle(20,35,250);		//head
    circle(5,20,270);		//ear
	circle(5, 50,270);	//ear
	circle(3,40,260);		//eye
	circle(3,30,260);		//eye
	circle(4,35,240);	//mouth
	circle(4,90,170);
	circle(4,90,190);
	

   

   glFlush ();
   glutPostRedisplay();
}



void init (void) 
{
/* select clearing color 	*/
   glClearColor (1.0, 1.4, 0.4, 0.4);

/* initialize viewing values  */
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glOrtho(0.0, 500.0, 0.0, 500.0, -100.0, 100.0);
}

/* 
 * Declare initial window size, position, and display mode
 * (single buffer and RGBA).  Open window with "First Choice Travel Agency"
 * in its title bar.  Call initialization routines.
 * Register callback function to display graphics.
 * Enter main loop and process events.
 */
int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize (1300, 900); 
   glutInitWindowPosition (10, 10);
   glutCreateWindow ("First Choice Travel Agency");
   init ();
   glutDisplayFunc(flag); 
   glutMainLoop();
   return 0;   /* ANSI C requires main to return int. */
}



