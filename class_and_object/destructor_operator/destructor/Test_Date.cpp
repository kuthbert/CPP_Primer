/********************************************************************************************
 * File name		: Test_Date.cpp
 * Description		: Design test cases to verify the class "Date".
 * Creator			: XU ZAN
 * Creation date	: Mon.	March 09, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ********************************************************************************************/

#include "Test_Date.h"
#include "Date.h"


void TestCase4_How2UseCopyConstructor(void)
{
#if defined (COPY_CONSTRUCTOR)
	// 1st Date object
	Date birthday(1983, 1, 2);
	birthday.display();

	// 2nd Date object
	Date newday = birthday;
	newday.display();

	// 3rd Date object
	Date lastday(birthday);
	lastday.display();
	return;
#endif	/*  COPY_CONSTRUCTOR  */
}