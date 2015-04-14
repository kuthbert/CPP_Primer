/*********************************************************************************
 * File name		: Employee.h
 * Description		: Define a new class "Employee".
 * Creator			: Frederique Hsu
 * Creation date	: Tue.	March 10, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *********************************************************************************/


#ifndef EMPLOYEE_H
#define EMPLOYEE_H

	#include "Date.h"

	class Employee
	{
	private:
		int empno;
		Date datehired;
	public:
		Employee(int en, Date& dh);
		~Employee(void);
	};

#endif	/*  EMPLOYEE_H  */