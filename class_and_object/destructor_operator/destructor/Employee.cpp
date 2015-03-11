/*********************************************************************************
 * File name		: Employee.cpp
 * Description		: Implement the new class "Employee".
 * Creator			: Frederique Hsu
 * Creation date	: Tue.	March 10, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *********************************************************************************/


#include "Employee.h"


#if 0
	// Employee constructor, version 1
	Employee::Employee(int en, Date& dh)
	{
		empno = en;
		datehired = dh;
	}
#else
	// Employee constructor, version 2
	Employee::Employee(int en, Date& dh) : empno(en), datehired(dh)
	{
		/* empty */
	}
#endif

Employee::~Employee(void)
{
	/* Insert your code here */
}