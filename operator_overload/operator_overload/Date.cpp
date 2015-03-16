/*******************************************************************************************
 * File name		: Date.cpp
 * Description		: Implement the new class "Date", to study the operator-overload feature.
 * Creator			: Frederick Hsu
 * Creation date	: Thur.	March 12, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *******************************************************************************************/


#include "Date.h"
#include <iostream>


int Date::dys[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

Date::Date(int y, int m, int d)
{
	yr = y;
	mo = m;
	da = d;
}


Date::~Date(void)
{
	/* Insert your code here */
}

void Date::display(void) const
{
	std::cout<<yr<<"/"<<mo<<"/"<<da<<std::endl;
}

#if !defined (OPERATOR_OVERLOAD_OUTSIDE_CLASS)
	Date Date::operator +(int n) const
	{
		Date dt = *this;
		n += dt.da;

		while (n > dys[(dt.mo)-1])
		{
			n -= dys[(dt.mo)-1];
			if (++(dt.mo) == 13)
			{
				dt.mo = 1;
				(dt.yr)++;
			}
		}
		dt.da = n;

		return dt;
	}

	Date operator+(int n, Date& dt)
	{
		return (dt + n);
	}
#else
	Date operator+(int n, Date& dt)
	{
		Date objDate = dt;
		n += objDate.da;
		while ( n > Date::dys[(objDate.mo)-1] )
		{
			n -= Date::dys[(objDate.mo)-1];
			if (++(objDate.mo) == 13)
			{
				objDate.mo = 1;
				(objDate.yr)++;
			}
		}
		objDate.da = n;
		return objDate;
	}

	Date operator+(Date& dt, int n)
	{
		return (n+dt);
	}
#endif	/* OPERATOR_OVERLOAD_OUTSIDE_CLASS */
