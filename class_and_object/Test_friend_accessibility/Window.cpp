/******************************************************************************************
 * File name		: Window.cpp
 * Description		: Demonstrate how to use friend functions.
 * Creator			: XU ZAN
 * Creation date	: Tue.	Feb. 10, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ******************************************************************************************/

#include "Window.h"

Window::Window(void)
{
	iCoordinate_X = 0;
	iCoordinate_Y = 0;
}

Window::Window(int x, int y)
{
	iCoordinate_X = x;
	iCoordinate_Y = y;
}


Window::~Window(void)
{
}