/***********************************************************************************************
 * File name		: WagedEmployee.h
 * Description		: Define a class "WagedEmployee".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 24, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ***********************************************************************************************/


#ifndef WAGEDEMPLOYEE_H
#define WAGEDEMPLOYEE_H

	#include "Employee.h"
	#include "Money.h"

	class WagedEmployee : public Employee
	{
	private:
		Money hourly_wage;
	protected:
	public:
		WagedEmployee(const string& nm="") : Employee(nm)
		{
			/* empty */
		}
		virtual ~WagedEmployee(void);

		Money GetHourlyWage(void) const;
		void SetHourlyWage(Money wage);

		virtual void FormattedDisplay(ostream& os);
	};

	ostream& operator<<(ostream& os, WagedEmployee& wempl);

#endif	/*  WAGEDEMPLOYEE_H  */