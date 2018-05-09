//============================================================================
// Name        : UI.cpp
// Author      : Jaime Garcia Coronel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include "stdafx.h"
#include "DemoOpenGL.h"

using namespace std;

int g_window_width = 1980;
int g_window_height = 1024;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}

int InitOpenGL(void)
{
	GLFWwindow* window;

		if (!glfwInit())
			return -1;
		glfwWindowHint(GLFW_SAMPLES, 4);									// 4x antialiasing
		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);						// We want OpenGL 4.5
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 5);
		glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE); 		// We don't want the old OpenGL

																// Open a window and create its OpenGL context
		window = glfwCreateWindow(g_window_width, g_window_height, "PCAN OpenGL UI Demo", NULL, NULL);
		if (window == NULL) {
			fprintf(stderr, "Failed to open GLFW window \n");
			getchar();
			glfwTerminate();
			return -1;
		}
		glfwMakeContextCurrent(window);

		// Initialize GLEW
			glewExperimental = true; // Needed for core profile
			if (glewInit() != GLEW_OK) {
				fprintf(stderr, "Failed to initialize GLEW\n");
				getchar();
				glfwTerminate();
				return -1;
			}

			// Ensure we can capture the escape key being pressed below
			glfwSetInputMode(window, GLFW_STICKY_KEYS, GL_TRUE);

			// Dark blue background
			glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
			glEnable(GL_DEPTH_TEST);
			glDepthFunc(GL_LESS);

			// Setup scene
			GlSetupScene(window, g_window_width, g_window_height);

			do {
				//GlRender();
			} // Check if the ESC key was pressed or the window was closed
			while (glfwGetKey(window, GLFW_KEY_ESCAPE) != GLFW_PRESS && glfwWindowShouldClose(window) == 0);

			// Close OpenGL window and terminate GLFW
			glfwTerminate();

			return 0;

}
