/************************************************************************************************
 * File name		: TestCases4classes.cpp
 * Description		: Design test cases to validate the module "classes".
 * Creator			: XU ZAN
 * Creation date	: Fri. Feb. 06, 2015
 * Copyriight(C)	2015	All rights reserved.
 *
 ************************************************************************************************/

#include "TestCases4classes.h"
#include "Test_Date.h"
#include "Test_CustomDate.h"

void TestCase4_Use_PrivateDataMember(void)
{
	Use_PrivateDataMember();
}

void TestCase4_Conversion_PrivateDataMember(void)
{
	Conversion_PrivateDataMember();
	return;
}

void TestCase4_ConversionFunc(void)
{
	TestCase4_Use_PrivateDataMember();
	TestCase4_Conversion_PrivateDataMember();
}