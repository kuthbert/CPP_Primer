/***********************************************************************
 * File name		: Test_Classes.cpp
 * Description		: Implement the test cases for the Classes module.
 * Creator			: XU ZAN
 * Creation date	: Thur.	Nov. 27, 2014
 * Copyright(C)		2014	All rights reserved.
 *
 ***********************************************************************/

#include "Test_Classes.h"

#include "Class_Objects.h"

void TestCase_Classes_Usage(void)
{	
	Test_Class_Objects();
}


void Test_Class_Objects(void)
{
	Define_Sales_item_Objects();
	
	Test_Screen_Class();
}