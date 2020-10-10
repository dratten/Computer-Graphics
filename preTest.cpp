//------PRELIMINARY LAB----------//
//110855	Joel Odhiambo	Group B
//111759	Trevor Ikky	Group B
//111758	Asmaa Hargura	Group B
//110740	Dalton Mwandaware	Group B
#include <Windows.h>
#include <GL\glew.h>
#include<GL\glut.h>
#include <GL\freeglut.h>
#include <iostream>

using namespace std;

void init()
{
	glClearColor(1.0, 1.0, 1.0,1.0);//window color is white
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluOrtho2D(0.0, 200.0, 0.0, 200.0);//Define the cartesian(x min, x max,y min, y max)
	
}

void squares()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.5, 0.0);//Drawing a red line
	glPointSize(5.0);//Set the width of the line
	
	//Start by drawing inner square
	glBegin(GL_LINES);
	glVertex2i(35.0, 135.0);
	glVertex2i(135.0, 135.0);
	glVertex2i(135.0, 135.0);
	glVertex2i(135.0, 35.0);
	glVertex2i(135.0, 35.0);
	glVertex2i(35.0, 35.0);
	glVertex2i(35.0, 35.0);
	glVertex2i(35.0, 135.0);

	glEnd();
	
	//Draw outer square
	glBegin(GL_LINES);
	glVertex2i(20.0, 150.0);
	glVertex2i(150.0, 150.0);
	glVertex2i(150.0, 150.0);
	glVertex2i(150.0, 20.0);
	glVertex2i(150.0, 20.0);
	glVertex2i(20.0, 20.0);
	glVertex2i(20.0, 20.0);
	glVertex2i(20.0, 150.0);
	

	glEnd();
	glFlush();//Allows fast execution of the statements
}

void circles()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glLineWidth(5.0);
	int i;
	int x = 60;// Midpoint of circle
	int y = 60;//Midpoint of circle
	int radius = 50;
	int lineAmount = 100; //# of triangles used to draw circle
	GLfloat twicePi = 2.0f * 3.14159265358979323846;

	glBegin(GL_LINE_LOOP);//Circle 1
	for (i = 0; i <= lineAmount; i++) {
		glVertex2f(
			x + (radius * cos(i * twicePi / lineAmount)),
			y + (radius * sin(i * twicePi / lineAmount))
		);
	}
	glEnd();
	glBegin(GL_LINE_LOOP);//Circle 2
	for (i = 0; i <= lineAmount; i++) {
		x = 130;
		y = 60;
		radius = 50;
		glVertex2f(
			x + (radius * cos(i * twicePi / lineAmount)),
			y + (radius * sin(i * twicePi / lineAmount))
		);
	}
	glEnd();
	glBegin(GL_LINE_LOOP);//Circle 3
	for (i = 0; i <= lineAmount; i++) {
		x = 90;
		y = 130;
		radius = 50;
		glVertex2f(
			x + (radius * cos(i * twicePi / lineAmount)),
			y + (radius * sin(i * twicePi / lineAmount))
		);
	}
	glEnd();
	glFlush();//Allows fast execution of the statements
}




int main(int argc, char* argv[]) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(50,100);//top left
	glutInitWindowSize(500, 500);
	glutCreateWindow("Preliminary Lab");
	init();
	glutDisplayFunc(squares);
	
	
	glutMainLoop();
	return 0;
}
