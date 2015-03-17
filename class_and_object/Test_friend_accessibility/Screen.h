/*****************************************************************************************
 * File name		: Screen.h
 * Description		: 
 * Creator			: XU ZAN
 * Creation date	: Tue.	Feb. 10, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *****************************************************************************************/

#ifndef SCREEN_H
#define SCREEN_H

	class Window;	// Forward reference

	class Screen
	{
	public:
		Screen(void);
		Screen(int ht, int wd);
		~Screen(void);

		friend bool is_equal(const Screen&, const Window&);
	private:
		int height;
		int width;
	};


#endif	/*  SCREEN_H  */