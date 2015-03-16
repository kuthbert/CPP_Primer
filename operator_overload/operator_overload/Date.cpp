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

Date::Date(const Date& dt)
{
	yr = dt.yr;
	mo = dt.mo;
	da = dt.da;
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

	Date Date::operator-(int n)
	{
		return *this + (-n);
	}

	Date operator+(int n, Date& dt)
	{
		return (dt + n);
	}

	int Date::operator==(Date& dt) const
	/* Overloaded equality operator definition.
	 */
	{
		return ((this->yr == dt.yr) && 
				(this->mo == dt.mo) && 
				(this->da == dt.da));
	}

	Date Date::operator=(const Date& dt)
	{
		if (this != NULL)
		{
			this->yr = dt.yr;
			this->mo = dt.mo;
			this->da = dt.da;
		}
		return *this;
	}

	int Date::operator<(Date& dt) const
	/* Overloaded less-than operator definition.
	 */
	{
		if (this->yr == dt.yr)
		{
			if (this->mo == dt.mo)
			{
				return ((this->da) < (dt.da));
			}
			else
			{
				return ((this->mo) < (dt.mo));
			}
		}
		else
		{
			return ((this->yr) < (dt.yr));
		}
	}

	int Date::operator<=(Date& dt) const
	{
		return	(
					((this->yr)<=(dt.yr))?
					(
						((this->mo)<=(dt.mo))?
						(
							((this->da)<=(dt.da))?
							(1):
							(-1)
						):
						(-1)
					):
					(-1)
				);
	}

	int Date::operator!=(Date& dt) const
	{
		return !(*this == dt);
	}

	Date Date::operator+=(int n)
	{
		*this = *this + n;
		return *this;
	}

	Date Date::operator-=(int n)
	{
		return *this - n;
	}

	Date operator+=(int n, Date& dt)
	{
		return dt + n;
	}

	Date Date::operator++()		// prefix ++ operator
	{
		*this = *this + 1;
		return *this;
	}

	Date Date::operator++(int)	// postfix ++ operator
	{
		Date dt = *this;
		*this = *this + 1;
		return dt;
	}

	Date Date::operator--()	// --object
	{
		*this = *this - 1;
		return *this;
	}

	Date Date::operator--(int)	// object--
	{
		Date dt = *this;
		*this = *this - 1;
		return dt;
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
