/****************************************************************************************
 * File name		: friend_bridge.h
 * Description		: Use common friend function to bridge between 2 classes.
 * Creator			: XU ZAN
 * Creation date	: Tue.	Febb. 10, 2015
 * Coppyright(C)	2015	All rights reserved.
 *
 ****************************************************************************************/


#ifndef FRIEND_BRIDGE_H
#define FRIEND_BRIDGE_H

	#include "Window.h"
	#include "Screen.h"
	#include "Date.h"
	#include "Time.h"

	bool is_equal(const Screen& srn, const Window& wnd);
	
	void DisplayDateTime(const Date& dt, const Time& tm);

#endif	/*  FRIEND_BRIDGE_H  */