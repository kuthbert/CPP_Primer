/**********************************************************************************************
 * File name		: Test_destrutor.cpp
 * Description		: Test & validate how the destructor works.
 * Creator			: XU ZAN
 * Creation date	: Tue. Feb. 11, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **********************************************************************************************/

#include "Test_destructor.h"
#include "Date.h"


void TestCase4_DestructorCleanMemory(void)
{
	Date birthday(1983,1,2);
	birthday.display();

	return;
}


void TestCase4_OverloadedAssignmentOperator(void)
{
	/* First Date's object
	 */
	Date birthday(1940, 6, 24);
	birthday.display();

	/* Second Date's object
	 */
	Date newday(1941, 7, 29);
	newday.display();

	/* Assign the 1st Date's object to the 2nd Date's object.
	 */
	newday = birthday;
	newday.display();

	return;
}


void TestCase4_ReturnObjAssignOperator(void)
{
	// Original date
	Date birthday(2014, 6, 24);
	Date old_day, new_day;

	// Assign 1st to 2nd to 3rd
#if 1
	old_day = new_day = birthday;
#else
	old_day = birthday;
	new_day = birthday;
#endif

	birthday.display();
	new_day.display();
	old_day.display();
	
	return;
}

void TestCase4_UseObjectsArray(void)
{
	Date dates[2];
	Date temp(2013, 12, 19);
	dates[0] = temp;
	dates[0].display();

	dates[1].display();
	return;
}