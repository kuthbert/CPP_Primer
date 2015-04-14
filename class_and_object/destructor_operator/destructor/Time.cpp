/**************************************************************************
 * File name		: Time.cpp
 * Description		: Implement the new class "Time".
 * Creator			: Frederique Hsu
 * Creation date	: Tue.	March 10, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **************************************************************************/


#include "Time.h"
#include <iostream>

Time::Time(int h, int m, int s)
{
	hr = h;
	min = m;
	sec = s;
}

Time::~Time(void)
{
	/* Insert your code here */
}

void Time::Display(void) const
{
	std::cout<<hr<<":"<<min<<":"<<sec<<std::endl;
}