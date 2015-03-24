/************************************************************************
 * File name		: SpecialDate.cpp
 * Description		: Implement the new derived class "SpecialDate".
 * Creator			: Frederick Hsu
 * Creation date	: Fri.	March 20, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ************************************************************************/


#include "SpecialDate.h"
#include <iostream>


char* SpecialDate::mos[] = {"January",
							"February",
							"March",
							"April",
							"May",
							"June",
							"July",
							"August",
							"September",
							"October",
							"November",
							"December"};

SpecialDate::~SpecialDate(void)
{
	/* empty */
}

void SpecialDate::Display(void) const
{
	if (!IsNullDate())
	{
		std::cout<<mos[GetMonth()-1]<<" "<<GetDay()
				 <<", "<<GetYear()<<std::endl;
	}
}

bool SpecialDate::IsNullDate(void) const
{
	bool bResult = false;
	if (ndays == 0)
	{
		bResult = true;
	}
	else
	{
		bResult = false;
	}
	return bResult;
}