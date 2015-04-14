/***********************************************************************************************
 * File name		: SalariedEmployee.h
 * Description		: Define a class "SalariedEmployee".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 24, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ***********************************************************************************************/


#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

	#include "Employee.h"
	#include "Money.h"

	class SalariedEmployee : public Employee
	{
	private:
		Money salary;
	protected:
	public:
		SalariedEmployee(const string& nm="") : Employee(nm)
		{
			/* empty */
		}
		virtual ~SalariedEmployee(void);

		Money GetSalary(void) const;
		void SetSalary(Money sal);

		virtual void FormattedDisplay(ostream& os);
	};

	ostream& operator<<(ostream& os, SalariedEmployee& sempl);

#endif	/*  SALARIEDEMPLOYEE_H  */