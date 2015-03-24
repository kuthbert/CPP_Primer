/*****************************************************************************************
 * File name		: Test_SpecialCustomDate.cpp
 * Description		: Verify the hierarchical structure of more than 2 levels.
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 24, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *****************************************************************************************/


#include "Test_SpecialCustomDate.h"
#include "SpecialCustomDate.h"
#include <iostream>

void TestCase4_MultiHierarchyClassInheritance(void)
{
	/* Process a SpecialCustomDate object */
	SpecialCustomDate scdt(1941, 321);
	std::cout<<"Wendy : ";
	scdt.Display();
	scdt.Date::Display();
}