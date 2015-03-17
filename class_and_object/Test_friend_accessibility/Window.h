/******************************************************************************************
 * File name		: Window.h
 * Description		: Demonstrate how to use friend functions.
 * Creator			: XU ZAN
 * Creation date	: Tue.	Feb. 10, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ******************************************************************************************/


#ifndef WINDOW_H
#define WINDOW_H

	class Screen;	/* A forward reference is to tell the compiler
					 * that the class Screen is defined later, or in
					 * other header file.
					 *
					 * Note : Here do not use #include "Screen.h", 
					 * Because it will be isolated by the header-guard.
					 */

	class Window
	{
	public:
		Window(void);
		Window(int x, int y);
		~Window(void);

		friend  bool is_equal(const Screen&, const Window&);
	private:
		int iCoordinate_X;
		int iCoordinate_Y;
	};

#endif	/*  WINDOW_H  */