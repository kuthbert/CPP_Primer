/***********************************************************************************************
 * File name		: SalariedEmployee.cpp
 * Description		: Implement the class "SalariedEmployee".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 24, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ***********************************************************************************************/

#include "SalariedEmployee.h"


SalariedEmployee::~SalariedEmployee(void)
{
	/* empty */
}

Money SalariedEmployee::GetSalary(void) const
{
	return salary;
}

void SalariedEmployee::SetSalary(Money sal)
{
	salary = sal;
}

void SalariedEmployee::FormattedDisplay(ostream& os)
{
	os << "------Salaried Employee-----"				<< endl;
	Employee::FormattedDisplay(os);
	os << "Salary                    : " << salary		<< endl;
	os << "===========================================" << endl;
}

ostream& operator<<(ostream& os, SalariedEmployee& sempl)
{
	os << ((Employee&) sempl)	<< endl
	   << sempl.GetSalary()		<< endl;
	return os;
}