/***********************************************************************************************
 * File name		: Employee.h
 * Description		: Define a class "Employee".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 24, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ***********************************************************************************************/

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

	#include "Person.h"
	#include "Date.h"

	class Employee : public Person
	{
	private:
	protected:
		Date datehired;
	public:
		Employee(const string& nm="") : Person(nm)
		{
			/* empty */
		}
		virtual ~Employee(void);

		Date GetDateHired(void) const;
		void SetDateHired(Date dt);

		virtual void FormattedDisplay(ostream& os) = 0;
	};

	ostream& operator<<(ostream& os, Employee& empl);

#endif	/*  EMPLOYEE_H  */