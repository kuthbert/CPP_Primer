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
	if ((da==31) && ((mo==4) || (mo==6) || (mo==9) || (mo==11)))
	{
		std::cout<<"The days in small month are wrong"<<std::endl;
		year = 0;
		month = 0;
		day = 0;
		return;
	}
	ndays = ComputeTotalDays(yr, mo, da);
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
		this->ndays = dt.ndays;
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
	this->ndays = dt.ndays;
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
	dt.ndays += n;
	return dt;
}

void Date::Print(void) const
{
	std::cout<<year<<"/"<<month<<"/"<<day<<std::endl;
	std::cout<<"Total days : "<<ndays<<std::endl;
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
	dt.ndays -= n;
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

bool Date::operator==(const Date& dt)
{
	return ((this->year == dt.year) && 
			(this->month == dt.month) &&
			(this->day == dt.day) && 
			(this->ndays == dt.ndays));
}

bool Date::operator!=(const Date& dt)
{
	return !(*this == dt);
}

bool Date::operator>(const Date& dt)
{
	bool bCompare = false;
	if (this->year > dt.year)
	{
		bCompare = true;
	}
	else if (this->year < dt.year)
	{
		bCompare = false;
	}
	else	// this->year == dt.year
	{
		if (this->month > dt.month)
		{
			bCompare = true;
		}
		else if (this->month < dt.month)
		{
			bCompare = false;
		}
		else	// this->month == dt.month
		{
			if (this->day > dt.day)
			{
				bCompare = true;
			}
			else if (this->day < dt.day)
			{
				bCompare = false;
			}
			else	// this->day == dt.day
			{
				bCompare = false;
			}
		}
	}
	if (this->ndays > dt.ndays)
	{
		bCompare = true;
	}
	else
	{
		bCompare = false;
	}
	return bCompare;
}

bool Date::operator<(const Date& dt)
{
	bool bCompareResult = false;
	if (this->year < dt.year)
	{
		bCompareResult = true;
	}
	else if (this->year > dt.year)
	{
		bCompareResult = false;
	}
	else	// this->year == dt.year
	{
		if (this->month < dt.month)
		{
			bCompareResult = true;
		}
		else if (this->month > dt.month)
		{
			bCompareResult = false;
		}
		else	// this->month == dt.month
		{
			if (this->day < dt.day)
			{
				bCompareResult = true;
			}
			else if (this->day > dt.day)
			{
				bCompareResult = false;
			}
			else	// this->day == dt.month
			{
				bCompareResult = false;
			}
		}
	}
	if (this->ndays < dt.ndays)
	{
		bCompareResult = true;
	}
	else
	{
		bCompareResult = false;
	}
	return bCompareResult;
}

bool Date::operator<=(const Date& dt)
{
	bool bCompare = false;
	if (this->month < dt.year)
	{
		bCompare = true;
	}
	else if (this->year == dt.year)
	{
		if (this->month < dt.month)
		{
			bCompare = true;
		}
		else if (this->month == dt.month)
		{
			if (this->day < dt.day)
			{
				bCompare = true;
			}
			else if (this->day == dt.day)
			{
				bCompare = true;
			}
			else	// this->day > dt.day
			{
				bCompare = false;
			}
		}
		else	// this->month > dt.month
		{
			bCompare = false;
		}
	}
	else	// this->year > dt.year
	{
		bCompare = false;
	}
	if (this->ndays <= dt.ndays)
	{
		bCompare = true;
	}
	else
	{
		bCompare = false;
	}
	return bCompare;
}

bool Date::operator>=(const Date& dt)
{
	bool bCompare = false;
	if (this->year > dt.year)
	{
		bCompare = true;
	}
	else if (this->year < dt.year)
	{
		bCompare = false;
	}
	else	// this->year == dt.year
	{
		if (this->month > dt.month)
		{
			bCompare = true;
		}
		else if (this->month < dt.month)
		{
			bCompare = false;
		}
		else	// this->month == dt.month
		{
			if (this->day > dt.day)
			{
				bCompare = true;
			}
			else if (this->day < dt.day)
			{
				bCompare = false;
			}
			else	// this->day == dt.day
			{
				bCompare = true;
			}
		}
	}
	if (this->ndays >= dt.ndays)
	{
		bCompare = true;
	}
	else
	{
		bCompare = false;
	}
	return bCompare;
}

long int Date::operator-(const Date& dt) const
{
	long int lDiffDays = 0;
	Date src = *this;
#if 1
	if (src == dt)
	{
		lDiffDays = 0;
	}
	else if (src < dt)
	{
		while (src != dt)
		{
			lDiffDays++;
			src++;
		}
		lDiffDays = (-1)*lDiffDays;
	}
	else if (src > dt)
	{
		while (src != dt)
		{
			lDiffDays++;
			src--;
		}
	}
#else
	lDiffDays = src.ndays - dt.ndays;
#endif
	return lDiffDays;
}


void Date::SetDate(int yr, int mo, int da)
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
	if ((da==31) && ((mo==4) || (mo==6) || (mo==9) || (mo==11)))
	{
		std::cout<<"The days in small month are wrong"<<std::endl;
		year = 0;
		month = 0;
		day = 0;
	}
	year = yr;
	month = mo;
	day = da;
	ndays = ComputeTotalDays(yr, mo, da);
}

void Date::SetMonth(int mo)
{
	if ((mo<1) || (mo>12))
	{
		std::cout<<"The month you set is wrong."<<std::endl;
		return;
	}
	if (mo == 2)
	{
		if (((this->year)%4==0) && ((this->year)%1000!=0))	// Leap year
		{
			if (this->day > 29)
			{
				std::cout<<"The month (exactly Feb.) doesn't match with its corresponding day"<<std::endl;
				return;
			}
		}
		else
		{
			if (this->day > 28)
			{
				std::cout<<"The month (exactly Feb.) doesn't match with its corresponding day"<<std::endl;
				return;
			}
		}
	}
	else if ( this->day > dys[mo-1] )
	{
		std::cout<<"The month you set does not match with corresponding day"<<std::endl;
		return;
	}
	month = mo;
	ndays = ComputeTotalDays(year, mo, day);
}

void Date::SetYear(int yr)
{
	if (yr < 1)
	{
		std::cout<<"The year you assigned is wrong."<<std::endl;
		return;
	}
	year = yr;
	ndays = ComputeTotalDays(yr, month, day);
}

void Date::SetDay(int da)
{
	if ( (da < 1) || (da > 31) )
	{
		std::cout<<"The day you set is wrong"<<std::endl;
		return;
	}
	if (this->month == 2)
	{
		if ( ((this->year)%4==0) && ((this->year)%1000!=0) )
		{
			if (da > 29)
			{
				std::cout<<"The day you set for Feb. of leap year is wrong"<<std::endl;
				return;
			}
		}
		else
		{
			if (da > 28)
			{
				std::cout<<"The day you set for Feb. is wrong"<<std::endl;
				return;
			}
		}
	}
	if (da > dys[this->month-1])
	{
		std::cout<<"The day you set for "<<this->month<<" month is wrong"<<std::endl;
		return;
	}
	day = da;
	ndays = ComputeTotalDays(year, month, da);
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
	std::cout<<day<<"/"<<month<<"/"<<year<<std::endl;
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

long ComputeTotalDays(int year, int month, int day)
{
	long lTotal = 0;
	lTotal = (year-1)*365 + (year-1)/4 - (year-1)/1000;
	for (int i=1; i<=month; i++)
	{
		switch (i)
		{
		case 1:		// Jan.
			lTotal += 31;
			break;
		case 2:		// Feb.
			if (((year%4)==0) && ((year%1000)!=0))
			{
				lTotal += 29;
			}
			else
			{
				lTotal += 28;
			}
			break;
		case 3:		// March
			lTotal += 31;
			break;
		case 4:		// April
			lTotal += 30;
			break;
		case 5:		// May
			lTotal += 31;
			break;
		case 6:		// June
			lTotal += 30;
			break;
		case 7:		// July
			lTotal += 31;
			break;
		case 8:		// Aug.
			lTotal += 31;
			break;
		case 9:		// Sep.
			lTotal += 30;
			break;
		case 10:	// Oct.
			lTotal += 31;
			break;
		case 11:	// Nov.
			lTotal += 30;
			break;
		case 12:	// Dec.
			// lTotal += 31;
			break;
		default:
			break;
		}
	}
	lTotal += day;
	return lTotal;
}