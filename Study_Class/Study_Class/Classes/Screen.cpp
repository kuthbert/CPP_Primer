/*******************************************************************************************
 * File name		: Screen.cpp
 * Description		: Implement the class "Screen".
 * Creator			: XU ZAN
 * Creation date	: Thur.	Nov. 27, 2014
 * Copyright(C)		2014	All rights reserved.
 *
 *******************************************************************************************/

#include "Screen.h"

Screen::Screen(void)
{
	contents = "";
	cursor = 0;
	height = 0;
	width = 0;
}

Screen::Screen(index row, index col)
{
	height = row;
	width = col;
}

/*
char Screen::get(index r, index c) const
{
	index row = r*width;
	return contents[row + c];
}
 */



/* not declared as inline in the class declaration, 
 * but OK to make inline in definition.
 */
inline Screen::index Screen::get_cursor(void) const
{
	return cursor;
}


Screen& Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

Screen& Screen::move(index r, index c)
{
	index row = r*width;
	cursor = row + c;
	return *this;
}


void Screen::do_display(std::ostream &os) const
{
	++access_ctr;		// Kepp count of calls to any member function.
	os << contents;
}

Screen& Screen::display(std::ostream &os)
{
	do_display(os);
	return *this;
}

const Screen& Screen::display(std::ostream &os) const
{
	do_display(os);
	return *this;
}






/*
 * END OF FILE <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
 */