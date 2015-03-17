/**********************************************************************************************
 * File name		: Date.cpp
 * Description		: Implement the class "Date".
 * Creator			: XU ZAN
 * Creation date	: Mon. Feb. 09, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **********************************************************************************************/


#include "Date.h"
#include <iostream>

using namespace std;

static int iDaysOfEachMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

Date::Date(void)
{
	yr = 0;
	mo = 0;
	da = 0;
}

Date::Date(int y, int m, int d)
{
	yr = y;
	mo = m;
	da = d;
}

Date::~Date(void)
{
	// To do
}

Date::Date(const CustomDate& cd)
{
#if 0
	yr = cd.year;
	da = cd.day;
#else
	yr = cd.getYear();
	da = cd.getDay();
#endif
	for (mo=0; mo<11; mo++)
	{
		if (da > iDaysOfEachMonth[mo])
		{
			da -= iDaysOfEachMonth[mo];
		}
		else
		{
			break;
		}
	}
	mo++;
}

void Date::display(void) const
{
	cout<<yr<<"/"<<mo<<"/"<<da<<endl;
	return;
}

Date::operator CustomDate(void) const
{
	CustomDate cd(yr, 0);
	for (int i=0; i<mo-1; i++)
	{
		cd.day += iDaysOfEachMonth[i];
	}
	cd.day += da;

	return cd;
}