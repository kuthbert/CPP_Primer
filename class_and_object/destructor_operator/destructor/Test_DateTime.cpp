/**********************************************************************************************
 * File name		: Test_DateTime.cpp
 * Description		: Design test cases to validate the class reference calling.
 * Creator			: Frederique Hsu
 * Creation date	: Tue.	March 10, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **********************************************************************************************/


#include "Test_DateTime.h"
#include "DateTime.h"
#include "Time.h"
#include "Date.h"

void TestCase4_ClassReferenceCall(void)
{
	Date today(2015, 3, 10);
	Time now(15, 36, 45);

	DateTime dtm(today, now);
	dtm.Display();
}