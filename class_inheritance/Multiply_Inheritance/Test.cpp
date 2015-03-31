/********************************************************************************************************
 * File name		: Test.cpp
 * Description		: Execute the test case to demonstrate how to use multiply inheritance and 
 *					  the calling sequence among base classes and derived classes.
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 31, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ********************************************************************************************************/

#include "Test.h"
#include "CompanyCar.h"
#include "LeaseCar.h"

void Execute_Test_Cases(void)
{
	TestCase4_MultiplyInheritance();
	return;
}

	
void TestCase4_MultiplyInheritance(void)
{
	CompanyCar	car1(1, 2010, "BMW");
	LeaseCar	car2(2, 2015, "Ford");

	car1.MaintenanceSchedule();
	car1.ReportTime();

	car2.MaintenanceSchedule();
	car2.ReportTime();
	return;
}