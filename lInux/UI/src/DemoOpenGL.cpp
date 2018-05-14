/*
 * DemoOpenGL.cpp
 *
 *  Created on: May 8, 2018
 *      Author: jaime
 */
#include "stdafx.h"
#include "DemoOpenGL.h"

void GlSetupScene(GLFWwindow *window_in, UINT64 window_width, UINT64 window_height)
{
	glfwMakeContextCurrent(window_in);
	glfwSwapInterval(0);
	glEnable(GL_DEPTH_TEST);
	glViewport(0, 0, window_width, window_height);


}


