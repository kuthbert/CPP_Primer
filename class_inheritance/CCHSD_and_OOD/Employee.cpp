/***********************************************************************************************
 * File name		: Employee.cpp
 * Description		: Implement the class "Employee".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 24, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ***********************************************************************************************/


#include "Employee.h"


Employee::~Employee(void)
{
	/* empty */
}

Date Employee::GetDateHired(void) const
{
	return datehired;
}

void Employee::SetDateHired(Date dt)
{
	datehired = dt;
}

void Employee::FormattedDisplay(ostream& os)
{
	Person::FormattedDisplay(os);
	os << "Date hired                : " << datehired	<< endl;
	return;
}

ostream& operator<<(ostream& os, Employee& empl)
{
	os << ((Person&)empl) <<endl;
	os << empl.GetDateHired() <<endl;

	return os;
}