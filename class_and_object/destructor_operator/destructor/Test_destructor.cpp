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
#include <iostream>


void TestCase4_DestructorCleanMemory(void)
{
#if defined (ASSIGNMENT_OPERATOR_OVERLOAD)
	Date birthday(1983,1,2);
	birthday.display();

	return;
#endif	/*  ASSIGNMENT_OPERATOR_OVERLOAD  */
}


void TestCase4_OverloadedAssignmentOperator(void)
{
#if defined (ASSIGNMENT_OPERATOR_OVERLOAD)
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
#endif	/*  ASSIGNMENT_OPERATOR_OVERLOAD  */
}


void TestCase4_ReturnObjAssignOperator(void)
{
#if defined (ASSIGNMENT_OPERATOR_OVERLOAD)
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
#endif
}

void TestCase4_UseObjectsArray(void)
{
#if defined (ASSIGNMENT_OPERATOR_OVERLOAD)
	Date dates[2];
	Date temp(2013, 12, 19);
	dates[0] = temp;
	dates[0].display();

	dates[1].display();
	return;
#endif	/*  ASSIGNMENT_OPERATOR_OVERLOAD  */
}

void TestCase4_NewConstructorDeleteDestructor(void)
/* 測試驗證 :
 * new運算符和構造函數, delete運算符和析構函數之間的關係.
 */
{
#if defined (NEW_DELETE_OPERATOR)
	/*
	Date *dt = new Date;
	std::cout<<"Process the date object."<<std::endl;
	delete dt;
	 */
	Date *dt = new Date[5];
	std::cout<<"Process the dates array"<<std::endl;
	// delete dt;	// Error : Don't delete all objects in the array.
	delete [] dt;	// 正確地刪除指向數組的指針	Delete all 5 array elements.
#endif	/*  NEW_DELETE_OPERATOR  */
}