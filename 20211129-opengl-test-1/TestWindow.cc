/*
 * TestWindow.cc
 *
 *  Created on: 29 нояб. 2021 г.
 *      Author: unyuu
 */

#include "TestWindow.h"

void TestWindow::setup()
{
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glClearColor(1.0f, 0.75f, 0.3f, 1.0f);

	glPointSize(16.0f);
	glLineWidth(16.0f);

	glMatrixMode(GL_PROJECTION);
	double ratio = double(width()) / double(height());
//	gluOrtho2D(-ratio, ratio, -1.0, 1.0);
	gluPerspective(45.0, ratio, 0.1, 20.0);
	glMatrixMode(GL_MODELVIEW);
}

void TestWindow::render()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glLoadIdentity();

	gluLookAt(3.0, 3.0, 2.0, // откуда
	          0.0, 0.0, 0.0, // куда
	          0.0, 0.0, 1.0);// где верх

//	glTranslated(0.3, 0.0, 0.0);  // <-- умножение на матрицу п.переноса
//	glScaled(1.3, 0.25, 1.0);  // <-- умножение на матрицу масштабирования
	glRotated(_angle, 0.0, 0.0, 1.0);

	glBegin(GL_QUADS);
	glColor3d(1.0, 0.0, 0.0);
	glNormal3d( 0.0,  0.0, -1.0);
	glVertex3d( 1.0,  1.0, -1.0);
	glVertex3d(-1.0,  1.0, -1.0);
	glVertex3d(-1.0, -1.0, -1.0);
	glVertex3d( 1.0, -1.0, -1.0);
	glColor3d(0.0, 1.0, 1.0);
	glNormal3d( 0.0,  0.0,  1.0);
	glVertex3d( 1.0,  1.0,  1.0);
	glVertex3d(-1.0,  1.0,  1.0);
	glVertex3d(-1.0, -1.0,  1.0);
	glVertex3d( 1.0, -1.0,  1.0);
	glColor3d(0.0, 1.0, 0.0);
	glNormal3d( 0.0, -1.0,  0.0);
	glVertex3d( 1.0, -1.0,  1.0);
	glVertex3d(-1.0, -1.0,  1.0);
	glVertex3d(-1.0, -1.0, -1.0);
	glVertex3d( 1.0, -1.0, -1.0);
	glColor3d(1.0, 0.0, 1.0);
	glNormal3d( 0.0,  1.0,  0.0);
	glVertex3d( 1.0,  1.0,  1.0);
	glVertex3d(-1.0,  1.0,  1.0);
	glVertex3d(-1.0,  1.0, -1.0);
	glVertex3d( 1.0,  1.0, -1.0);
	glColor3d(0.0, 0.0, 1.0);
	glNormal3d( 1.0,  0.0,  0.0);
	glVertex3d( 1.0, -1.0,  1.0);
	glVertex3d( 1.0, -1.0, -1.0);
	glVertex3d( 1.0,  1.0, -1.0);
	glVertex3d( 1.0,  1.0,  1.0);
	glColor3d(1.0, 1.0, 0.0);
	glNormal3d(-1.0,  0.0,  0.0);
	glVertex3d(-1.0, -1.0,  1.0);
	glVertex3d(-1.0, -1.0, -1.0);
	glVertex3d(-1.0,  1.0, -1.0);
	glVertex3d(-1.0,  1.0,  1.0);
	glEnd();



}

void TestWindow::update()
{
	_angle += 0.5;
	if (_angle >= 360.0) _angle -= 360.0;
}
