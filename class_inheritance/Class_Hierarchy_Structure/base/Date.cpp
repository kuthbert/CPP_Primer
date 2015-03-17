/********************************************************************************************
 * File name		: Date.cpp
 * Description		: Implement new base class "Date".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 17, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ********************************************************************************************/


#include "Date.h"
#include <iostream>

const int Date::dys[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

Date::Date(int yr, int mo, int da)
{
	year = yr;
	month = mo;
	day = da;
}

Date::Date(const Date& dt)
{
	if (this != NULL)
	{
		this->year = dt.year;
		this->month = dt.month;
		this->day = dt.day;
	}
}

Date::~Date(void)
{
	/* empty */
}

Date& Date::operator=(const Date& dt)
{
	ndays = dt.ndays;
	return *this;
}

