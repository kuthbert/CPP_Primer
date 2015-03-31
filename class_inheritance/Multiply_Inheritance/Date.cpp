 /***********************************************************************************************
 * File name		: Date.cpp
 * Description		: Implement a class "Date".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 24, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ***********************************************************************************************/


#include "Date.h"
#include <ctime>

const int Date::DaysOfEachMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

Date::Date(int yr, int mo, int da)
{
	if ( (yr<1) || (mo<1) || (mo>12) || (da<1) || (da>31) )
	{
		std::cout<<"The date parameters are wrong."<<std::endl;
		year = 0;
		month = 0;
		day = 0;
		return;
	}
	if (IsLeapYear(yr))
	{
		if ( (mo==2) && (da>29) )
		{
			std::cout<<"The day parameter of Feb. in leap year is wrong."<<std::endl;
			year = 0;
			month = 0;
			day = 0;
			return;
		}
	}
	else
	{
		if ( (mo==2) && (da>28) )
		{
			std::cout<<"The day parameter of Feb. in non-leap year is wrong."<<std::endl;
			year = 0;
			month = 0;
			day = 0;
			return;
		}
	}
	if ( (da==31) &&
		 ((mo==4) || (mo==6) || (mo==9) || (mo==11)) )
	{
		std::cout<<"The day parameter in small month is wrong."<<std::endl;
		year = 0;
		month = 0;
		day = 0;
		return;
	}
	TotalDays = ComputeTotalDays(yr, mo, da);
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
		this->TotalDays = dt.TotalDays;
	}
}

Date::Date(void)
/* Get the calendar of today
 */
{
	std::time_t today =	std::time(&today);
	struct std::tm *today_tm = std::localtime(&today);
	this->year = today_tm->tm_year+1900;
	this->month = today_tm->tm_mon+1;
	this->day = today_tm->tm_mday;
	this->TotalDays = ComputeTotalDays(this->year, 
									   this->month, 
									   this->day);
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
	this->TotalDays = dt.TotalDays;

	return *this;
}

void Date::SetDate(int yr, int mo, int da)
{
	if ( (yr<1) || (mo<1) || (mo>12) || (da<1) || (da>31) )
	{
		std::cout<<"The date parameters are wrong."<<std::endl;
		year = 0;
		month = 0;
		day = 0;
		return;
	}
	if (IsLeapYear(yr))
	{
		if ( (mo==2) && (da>29) )
		{
			std::cout<<"The day parameter of Feb. in leap year is wrong."<<std::endl;
			year = 0;
			month = 0;
			day = 0;
			return;
		}
	}
	else
	{
		if ( (mo==2) && (da>28) )
		{
			std::cout<<"The day parameter of Feb. in non-leap year is wrong."<<std::endl;
			year = 0;
			month = 0;
			day = 0;
			return;
		}
	}
	if ( (da==31) &&
		 ((mo==4) || (mo==6) || (mo==9) || (mo==11)) )
	{
		std::cout<<"The day parameter in small month is wrong."<<std::endl;
		year = 0;
		month = 0;
		day = 0;
		return;
	}
	TotalDays = ComputeTotalDays(yr, mo, da);
	year = yr;
	month = mo;
	day = da;
}

void Date::SetYear(int yr)
{
	if (year < 1)
	{
		std::cout<<"The year parameter you assigned is wrong."<<std::endl;
		return;
	}
	if ((month==2) && (day==29))
	{
		if (!IsLeapYear(yr))
		{
			std::cout<<"The year parameter does not match with Feb. 29 (leap year)."<<std::endl;
			return;
		}
	}
	year = yr;
	TotalDays = ComputeTotalDays(yr, month, day);
}

void Date::SetMonth(int mo)
{
	if ((mo<1) || (mo>12))
	{
		std::cout<<"The month parameter you set is wrong."<<std::endl;
		return;
	}
	if (mo == 2)
	{
		if (IsLeapYear(this->year))
		{
			if (this->day > 29)
			{
				std::cout<<"The month(=2) parameter you set doesn't match with current parameters of both year and day."<<std::endl;
				return;
			}
		}
		else
		{
			if (this->day > 28)
			{
				std::cout<<"The month(=2) parameter you set doesn't match with current parameters of both year and day."<<std::endl;
				return;
			}
		}
	}
	else if (this->day > DaysOfEachMonth[mo-1])
	{
		std::cout<<"The month parameter you set doesn't match with current corresponding day."<<std::endl;
		return;
	}
	month = mo;
	TotalDays = ComputeTotalDays(year, mo, day);
}

void Date::SetDay(int da)
{
	if ( (da<1) || (da>31) )
	{
		std::cout<<"The day parameter you set is wrong."<<std::endl;
		return;
	}
	if (this->month == 2)
	{
		if (IsLeapYear(this->year))
		{
			if (da > 29)
			{
				std::cout<<"The day parameter you set for Feb. of leap year is wrong."<<std::endl;
				return;
			}
		}
		else
		{
			if (da > 28)
			{
				std::cout<<"The day parameter you set for Feb. is wrong."<<std::endl;
				return;
			}
		}
	}
	if (da > DaysOfEachMonth[this->month-1])
	{
		std::cout<<"The day parameter for "<<this->month<<" month is wrong."<<std::endl;
		return;
	}
	day = da;
	TotalDays = ComputeTotalDays(year, month, da);
}

void Date::GetDate(int &yr, int &mo, int &da) const
{
	yr = this->year;
	mo = this->month;
	da = this->day;
}

int Date::GetYear(void) const
{
	return year;
}

int Date::GetMonth(void) const
{
	return month;
}

int Date::GetDay(void) const
{
	return day;
}

void Date::Display(std::ostream& os) const
{
	int iYear = 0, iMonth = 0, iDay = 0;
	GetDate(iYear, iMonth, iDay);
	os <<year<<"/"<<month<<"/"<<day;
}

bool Date::IsLeapYear(int yr) const
{
	return (((yr%4)==0) && ((yr%1000)!=0));
}

bool Date::IsLeapYear(void) const
{
	return (((year%4)==0) && ((year%1000)!=0));
}

long ComputeTotalDays(int year, int month, int day)
{
	long lTotalDays = 0;
	
	lTotalDays = (year-1)*365 + (year-1)/4 - (year-1)/1000;
	for (int i=1; i<=month; i++)
	{
		switch (i)
		{
		case 1:		lTotalDays += 31;	break;
		case 2:
			if (IsLeapYear(year))
				lTotalDays += 29;
			else
				lTotalDays += 28;
			break;
		case 3:		lTotalDays += 31;	break;
		case 4:		lTotalDays += 30;	break;
		case 5:		lTotalDays += 31;	break;
		case 6:		lTotalDays += 30;	break;
		case 7:		lTotalDays += 31;	break;
		case 8:		lTotalDays += 31;	break;
		case 9:		lTotalDays += 30;	break;
		case 10:	lTotalDays += 31;	break;
		case 11:	lTotalDays += 30;	break;
		case 12:	/* lTotalDays += 31; */		break;
		default:						break;
		}
	}
	lTotalDays += day;

	return lTotalDays;
}

bool IsLeapYear(int year)
{
	return (((year%4)==0) && ((year%1000)!=0));
}