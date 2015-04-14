/***********************************************************************************************
 * File name		: Contractor.cpp
 * Description		: Implement the class "Contractor".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 24, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ***********************************************************************************************/

#include "Contractor.h"


Contractor::~Contractor(void)
{
	/* empty */
}

Date Contractor::GetStartDate(void) const
{
	return start_date;
}

Date Contractor::GetEndDate(void) const
{
	return end_date;
}

Money Contractor::GetHourlyRate(void) const
{
	return hourly_rate;
}

void Contractor::SetStartDate(Date dt)
{
	start_date = dt;
}
	
void Contractor::SetEndDate(Date dt)
{
	end_date = dt;
}
		
void Contractor::SetHourlyRate(Money rate)
{
	hourly_rate = rate;
}

void Contractor::ReportCompensation(void)
{
}

void Contractor::FormattedDisplay(ostream& os)
{
	os << "------Contractor------------"				<< endl;
	Person::FormattedDisplay(os);
	os << "Start date                : " << start_date	<< endl;
	os << "End date                  : " << end_date	<< endl;
	os << "Hourly rate               : " << hourly_rate	<< endl;
	os << "===========================================" << endl;
	return;
}

ostream& operator<<(ostream& os, Contractor& cntr)
{
	os << ((Person&) cntr)			<< endl
	   << cntr.GetStartDate()		<< endl
	   << cntr.GetEndDate()			<< endl
	   << cntr.GetHourlyRate()		<< endl;
	return os;
}