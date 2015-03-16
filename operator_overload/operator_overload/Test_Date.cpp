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
#include <iostream>

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

void TestCase4_OperatorLessthanOrEqualOverload(void)
{
#if !defined (OPERATOR_OVERLOAD_OUTSIDE_CLASS)
	Date date1(1941, 12, 7), 
		 date2(1990, 1, 22), 
		 date3(1941, 12, 7);
	if (date1 < date2)
	{
		date1.display();
		std::cout<<" is less than ";
		date2.display();
	}
	std::cout<<"\n"<<std::endl;
	if (date1 == date3)
	{
		date1.display();
		std::cout<<" is equal to ";
		date3.display();
	}
	std::cout<<"\n"<<std::endl;
	if (date1 <= date3)
	{
		date1.display();
		std::cout<<"is less than or equal to ";
		date3.display();
	}
	return;
#endif	/* OPERATOR_OVERLOAD_OUTSIDE_CLASS */
}

void TestCase4_OperatorPlusEqualOverload(void)
{
#if !defined (OPERATOR_OVERLOAD_OUTSIDE_CLASS)
	Date oldDate(1997, 2, 20);
	oldDate += 21;
	oldDate.display();
	return;
#endif	/* OPERATOR_OVERLOAD_OUTSIDE_CLASS */
}

void TestCase4_OperatorPrefixPostfixPlusPlusOverload(void)
{
#if !defined (OPERATOR_OVERLOAD_OUTSIDE_CLASS)
	Date oldDate(2012, 2, 14), 
		 newDate(2015, 2, 14), 
		 someoneDate;
	someoneDate = (oldDate++);	// oldDate was changed, but someDate (namely oldDate++) NOT changed.
	oldDate.display();			
	someoneDate.display();		

	someoneDate = (++newDate);	// newDate was changed, someoneDate (namely ++newDate) ALSO changed
	someoneDate.display();
	newDate.display();
#endif	/* OPERATOR_OVERLOAD_OUTSIDE_CLASS */
}