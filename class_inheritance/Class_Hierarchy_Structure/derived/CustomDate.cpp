/*********************************************************************************************************************
 * File name		: CustomDate.cpp
 * Description		: Implement the class "CustomDate" derived from base class "Date".
 * Creator			: Frederick Hsu
 * Creation date	: Mon.	March 23, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *********************************************************************************************************************/


#include "CustomDate.h"
#include <iostream>

CustomDate::CustomDate(int yr, int da)
/* Argument "da" is the nth day of one year.
 */
{
	if ( (yr<1) || 
		 (da<1) || 
		 (da>(IsLeapYear(yr)?366:365)) )
	{
		return;		// Error
	}
	int mo = 0;
	for (mo=1; mo<=12; mo++)
	{
		/* "dys" is inherited from the protected static data member of base class "Date".
		 *
		 * The protected data member of base class can be inherited to the derived class.
		 *
		 */
		int dy = dys[mo-1];		
		if ( (mo==2) && (IsLeapYear(yr)) )
		{
			dy += 1;	// 29 day
		}
		if (da < dy)
		{
			break;
		}
		da -= dy;
	}
	SetDate(yr, mo, da);
}

CustomDate::~CustomDate(void)
{
	/* empty */
}

int CustomDate::GetDay(void) const
{
	int year = 0, month = 0, day = 0;
	GetDate(year, month, day);
	int yDays = 0;
	for (int m=1; m<month; m++)
	{
		yDays += dys[m-1];
		if ( (m == 2) && (IsLeapYear(year)) )
		{
			yDays++;		// 29 days in Feb. of leap year
		}
	}
	return (yDays + day);
}

void CustomDate::Display(void) const
{
	std::cout<<GetDay()<<"-"<<GetYear()<<std::endl;
}