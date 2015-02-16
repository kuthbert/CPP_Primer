/**********************************************************************************************
 * File name		: Test.cpp
 * Description		: Perform all test cases in this "Test" module.
 * Creator			: XU ZAN
 * Creation date	: Wed.	Feb. 11, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **********************************************************************************************/

#include "Test.h"
#include "destructor/Test_destructor.h"
#include "operator_overload/Test_Complex.h"
#include "operator_overload/Test_operator_overload.h"
#include "self_pointer/Test_ListEntry.h"

void Perform_General_TestCases(void)
{
	Perform_TestCase4_DestructorCleanMemory();
	
	Perform_TestCase4_ComplexOperatorCalculation();

	Perform_OperatorOverload();

	// Perform_TestCase4_UseThisPtr2AccessLinkListClass();

	Perform_TestCase4_UseObjectsArray();
	return;
}

	
void Perform_TestCase4_DestructorCleanMemory(void)
{
	TestCase4_DestructorCleanMemory();

	TestCase4_OverloadedAssignmentOperator();
	TestCase4_AssignmentOpertorOverload();
	return;
}

void Perform_TestCase4_ComplexOperatorCalculation(void)
{
	TestCase4_ComplexOperatorCalculation();
}

void Perform_OperatorOverload(void)
{
	TestCase4_ReturnObjAssignOperator();
	return;
}

void Perform_TestCase4_UseThisPtr2AccessLinkListClass(void)
{
	TestCase4_UseThisPtr2AccessLinkListClass();
	return;
}

void Perform_TestCase4_UseObjectsArray(void)
{
	TestCase4_UseObjectsArray();
}