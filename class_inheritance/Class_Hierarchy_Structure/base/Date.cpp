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

int Date::dys[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

Date::Date(int yr, int mo, int da)
{
	if ( (yr<1) || (mo<1) || (mo>12) || (da<1) || (da>31) )
	{
		std::cout<<"The date parameters are wrong"<<std::endl;
		year = 0;
		month = 0;
		day = 0;
		return;
	}
	if ( ((yr%4)==0) && ((yr%1000)!=0) )	// Leap year
	{
		if ( (mo == 2) && (da>29) )
		{
			std::cout<<"The day of Feb. in leap year is wrong"<<std::endl;
			year = 0;
			month = 0;
			day = 0;
			return;
		}
	}
	else
	{
		if ((mo==2) && (da>28))
		{
			std::cout<<"The day of Feb. in non-leap year is wrong"<<std::endl;
			year = 0;
			month = 0;
			day = 0;
			return;
		}
	}
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
	this->year = dt.year;
	this->month = dt.month;
	this->day = dt.day;
	return *this;
}

Date Date::operator+(int n) const
{
	Date dt = *this;
	for (int i=0; i<n; i++)
	{
		dt.day++;
		if ( ((dt.year%4)==0) && ((dt.year%1000)!=0) )	// Leap year
		{
			if (dt.month==2)
			{
				if (dt.day>29)
				{
					dt.month++;
					dt.day = 1;		// Restore to 1st day of next month
				}
			}
			else
			{
				if (dt.day > dys[dt.month-1])
				{
					dt.month++;
					if (dt.month > 13)
					{
						dt.year++;
						dt.month = 1;	// Restore to Jan. of next year
					}
					dt.day = 1;		// Restore to 1st day of next month
				}
			}
		}
		else
		{
			if (dt.day > dys[dt.month-1])
			{
				dt.month++;
				if (dt.month > 12)
				{
					dt.year++;
					dt.month = 1;
				}
				dt.day = 1;
			}
		}
	}
	return dt;
}

void Date::Print(void) const
{
	std::cout<<year<<"/"<<month<<"/"<<day<<std::endl;
}


Date Date::operator-(int n) const
{
	Date dt = *this;
	for (int i=0; i<n; i++)
	{
		dt.day--;
		if (dt.day < 1)
		{
			dt.month--;
			if (dt.month < 1)
			{
				dt.year--;
				dt.month = 12;	// Restore to Dec of previous year
				dt.day = 31;	// Meanwhile restore to Dec. 31 of previous year
			}
			else if (dt.month == 2)
			{
				if ( ((dt.year%4)==0) && ((dt.year%1000)!=0) )	// Leap year
				{
					dt.day = 29;
				}
				else	// Non-leap year
				{
					dt.day = 28;
				}
			}
			else if ((dt.month==1) || 
					 (dt.month==3) ||
					 (dt.month==5) ||
					 (dt.month==7) ||
					 (dt.month==8) ||
					 (dt.month==10)||
					 (dt.month==12))	// Big month
			{
				dt.day = 31;
			}
			else if ((dt.month==4) ||
					 (dt.month==6) ||
					 (dt.month==9) ||
					 (dt.month==11))	// Small month
			{
				dt.day = 30;
			}
		}
	}
	return dt;
}


Date Date::operator+=(int n)
{
	*this = *this + n;
	return *this;
}


Date Date::operator-=(int n)
{
	*this = *this - n;
	return *this;
}

Date Date::operator++(void)
{
	*this = *this + 1;
	return *this;
}


Date Date::operator++(int)
{
	Date dt = *this;
	*this = *this + 1;
	return dt;
}


Date Date::operator--(void)
{
	*this = *this - 1;
	return *this;
}

Date Date::operator--(int)
{
	Date dt = *this;
	*this = *this - 1;
	return dt;
}

#if 0
long int Date::operator-(const Date& dt) const
{
	return ndays - dt.ndays;
}

bool Date::operator==(const Date& dt)
{
	return ((ndays == dt.ndays) && 
			(year == dt.year) && 
			(month = dt.month) &&
			(day == dt.day));
}

bool Date::operator!=(const Date& dt)
{
	return !(*this == dt);
}

bool Date::operator<(const Date& dt)
{
	return	(ndays < dt.ndays) ||
			(
				(year < dt.year) ?
				(true) :
				(
					(month < dt.month) ?
					(true) :
					(
						(day < dt.day) ?
						(true) :
						(false)
					)
				)
			);
}

bool Date::operator>(const Date& dt)
{
	return	(ndays > dt.ndays) ||
			(
				(year > dt.year) ?
				(true) :
				(
					(month > dt.month) ?
					(true) :
					(
						(day > dt.day) ?
						(true) :
						(false)
					)
				)
			);
}

bool Date::operator<=(const Date& dt)
{
	return ((*this < dt) || (*this == dt));
}

bool Date::operator>=(const Date& dt)
{
	return ((*this > dt) || (*this == dt));
}

void Date::SetDate(int yr, int mo, int da)
{
	if ( (mo<1) || (mo>12) || (yr<1) || (da>31) || (da<1) )
	{
		std::cout<<"The date parameters are wrong."<<std::endl;
		ndays = 0;
		return;
	}
	year = yr;
	/* Compute days through last year */
	ndays = ((yr-1)*365) + ((yr-1)/4) - ((yr-1)/1000);
	for (int i=0; i<mo; i++)
	{
		int dy = dys[i];
		if ((i==1) && (IsLeapYear(yr)))
		{
			dy++;	// Feb's days 29 if leap year
			day = dy;
		}
		if (i<mo-1)
		{
			ndays += dy;
		}
		else if (da > dy)
		{
			ndays = 0;		// Invalid day
			std::cout<<"Invalid day."<<std::endl;
			return;
		}
	}
	ndays += da;	// Add in this month's days
}

void Date::SetMonth(int mo)
{
	month = mo;
}

void Date::SetYear(int yr)
{
	year = yr;
}

void Date::SetDay(int da)
{
	day = da;
}

void Date::GetDate(int &yr, int &mo, int &da) const
{
	yr = year;
	mo = month;
	da = day;
}

int Date::GetMonth(void) const
{
	return month;
}

int Date::GetDay(void) const
{
	return day;
}

int Date::GetYear(void) const
{
	return year;
}

void Date::Display(void) const
{
	/* empty */
}

bool Date::IsLeapYear(int yr) const
{
	return (((year%4)==0) && ((year%1000)!=0));
}

bool Date::IsLeapYear(void) const
{
	return IsLeapYear(GetYear());
}




Date operator+(int n, const Date& dt)
{
	return (dt + n);
}
#endif