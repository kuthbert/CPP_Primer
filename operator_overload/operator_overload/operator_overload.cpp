/********************************************************************************************
 * File name		: operator_overload.cpp
 * Description		: Compose and test the feature of operator-overload in C++ programming.
 * Creator			: Frédérick Hsu
 * Creation date	: Thur.	March 12, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ********************************************************************************************/


#include "operator_overload.h"
#include "Test_Date.h"
#include "ItemQty.h"
#include "String.h"
#include <iostream>


void Perform_TestCase4_OperatorPlusOverload(void)
{
	TestCase4_OperatorPlusOverload();
}

void Perform_TestCase4_OperatorLessthanOrEqualOverload(void)
{
	TestCase4_OperatorLessthanOrEqualOverload();
	return;
}

void Perform_TestCase4_OperatorPlusEqualOverload(void)
{
	TestCase4_OperatorPlusEqualOverload();
	return;
}

void Perform_TestCase4_OperatorPrefixPostfixPlusPlusOverload(void)
{
	TestCase4_OperatorPrefixPostfixPlusPlusOverload();
	return;
}

void Perform_TestCase4_OperatorSingleMinusOverload(void)
{
	ItemQty item1(100, "CrankShaft");
	ItemQty item2(-50, "DriveShaft");

	item1.display();
	std::cout<<"\n"<<-item1;

	item2.display();
	std::cout<<"\n"<<-item2<<std::endl;
	return;
}

void Perform_TestCase4_OperatorIndexOverload(void)
{
	String str1("The Ides of March");
	str1.display();

	/* Change some string characters.
	 */
	str1[4] = '1';
	str1[5] = '5';
	str1[6] = 't';
	str1[7] = 'h';
	str1.display();

	/* Change a substring
	 */
	std::strncpy(&str1[4], "21st", 4);
	str1.display();

	/* Constant string, cannot be modified.
	 */
	const String str2("Et tu, Brute?");
	for (int i=0; i<str2.length(); i++)
	{
		std::cout<<str2[i];
	}
	return;
}

void Perform_TestCase4_OperatorSmartPointerOverload(void)
{
	TestCase4_OperatorSmartPointerOverload();
	return;
}