#ifndef STDAFX_H_INCLUDED
#define STDAFX_H_INCLUDED

// Generics
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <assert.h>
#include "STDTypes.h"

#if _WIN32
// Os dependant
#include <windows.h>
#include <mmsystem.h>

// DirectX includes
#include <d3d11.h>
#include <d3dx10.h>
#include <d3dx11.h>
#include <d3dcompiler.h>
#include <xnamath.h>
#endif

// OpenGL includes
#include "gl/glew.h"
#include "gl/glfw3.h"
#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"

// Libraries
#include "lodepng.h"

#endif 
