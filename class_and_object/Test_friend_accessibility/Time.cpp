/**********************************************************************************************
 * File name		: Time.cpp
 * Description		: Implement the class "Time".
 * Creator			: XU ZAN
 * Creation date	: Mon. Feb. 09, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **********************************************************************************************/

#include "Time.h"

Time::Time(void)
{
	hr = 0;
	min = 0;
	sec = 0;
}

		
Time::Time(int h, int m, int s)
{
	hr = h;
	min = m;
	sec = s;
}
		
Time::~Time(void)
{
	// To do
}