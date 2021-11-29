/*
 * TestWindow.h
 *
 *  Created on: 29 нояб. 2021 г.
 *      Author: unyuu
 */

#ifndef TESTWINDOW_H_
#define TESTWINDOW_H_

#include "Window.h"
#include <GL/gl.h>
#include <GL/glu.h>

class TestWindow: public Window
{
public:
	static constexpr int DEFAULT_WIDTH = 2400;
	static constexpr int DEFAULT_HEIGHT = 1600;
protected:
	virtual void setup() override;
	virtual void render() override;

	double _angle = 0.0;

	virtual void update() override;

public:
	TestWindow(): Window(DEFAULT_WIDTH, DEFAULT_HEIGHT) {}
	virtual ~TestWindow() = default;

};

#endif /* TESTWINDOW_H_ */
