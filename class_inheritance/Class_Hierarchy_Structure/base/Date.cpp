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

Date Date::operator+(int n) const
{
	Date dt = *this;
	dt.ndays += n;
	n += dt.day;

	while (n > dys[(dt.month)-1])
	{
		n -= dys[dt.month-1];
		if (++(dt.month) == 13)
		{
			(dt.month) = 1;
			(dt.year)++;
		}
	}
	dt.day = n;

	return dt;
}

Date Date::operator-(int n) const
{
	return (*this) + (-n);
}

Date Date::operator+=(int n)
{
	Date dt;
	dt = *this + n;
	return dt;
}

Date Date::operator-=(int n)
{
	return *this - n;
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
	year = yr;
	month = mo;
	day = da;
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