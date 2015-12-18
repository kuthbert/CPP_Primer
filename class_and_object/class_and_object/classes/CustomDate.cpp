/****************************************************************************************************
 * File name		: CustomDate.cpp
 * Description		: Implement the class "CustomDate".
 * Creator			: XU ZAN
 * Creation date	: Fri. Feb. 06, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ****************************************************************************************************/


#include "CustomDate.h"
#include <iostream>

CustomDate::CustomDate(void)
{
	da = 0;
	yr = 1900;
}

CustomDate::CustomDate(int y, int d)
{
	yr = y;
	da = d;
}

CustomDate::~CustomDate(void)
{
}




void CustomDate::display(void) const
{
	std::cout<<yr<<'-'<<da<<std::endl;
}

int CustomDate::getday(void) const
{
	return da;
}

void CustomDate::setday(int d)
{
	da = d;
	return;
}