/*****************************************************************************************
 * File name		: Test_Date.cpp
 * Description		: Design test case to verify the implementation of class "Date".
 * Creator			: Frederick Hsu
 * Creation date	: Thur.	March 12, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *****************************************************************************************/


#include "Test_Date.h"
#include "Date.h"

void TestCase4_OperatorPlusOverload(void)
{
	Date oldDate(2014, 2, 21);
	Date newDate;
#if !defined (OPERATOR_OVERLOAD_OUTSIDE_CLASS)
	newDate = oldDate + 50;
	newDate.display();
	newDate = 20 + oldDate;
	newDate.display();
#else
	newDate = oldDate + 50;
	newDate.display();
	newDate = 20 + oldDate;
	newDate.display();
#endif

	oldDate.display();
	return;
}