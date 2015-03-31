/***********************************************************************************************
 * File name		: WagedEmployee.cpp
 * Description		: Implement the class "WagedEmployee".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 24, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ***********************************************************************************************/

#include "WagedEmployee.h"


WagedEmployee::~WagedEmployee(void)
{
	/* empty */
}

Money WagedEmployee::GetHourlyWage(void) const
{
	return hourly_wage;
}

void WagedEmployee::SetHourlyWage(Money wage)
{
	hourly_wage = wage;
}

void WagedEmployee::FormattedDisplay(ostream& os)
{
	os << "------Waged Employee--------"				<< endl;
	Employee::FormattedDisplay(os);
	os << "Hourly wage               : " << hourly_wage	<< endl;
	os << "===========================================" << endl;
}

ostream& operator<<(ostream& os, WagedEmployee& wempl)
{
	os << ((Employee&) wempl)		<< endl
	   << wempl.GetHourlyWage()		<< endl;

	return os;
}