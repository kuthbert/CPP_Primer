/******************************************************************************************
 * File name		: Unit_Test.cpp
 * Description		: Execute unit test cases here.
 * Creator			: Frederick Hsu
 * Creation date	: Wed.	March 25, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ******************************************************************************************/


#include "Unit_Test.h"
#include "Test_PDate.h"
#include "base_class_non_virtual_destructor.h"

void Execute_Unit_Test_Cases(void)
{
	Execute_TestCase4_OverloadStreamwiseInOutAnObject();
	Execute_TestCase4_InvokeVirtualBaseClassDestructor();
}

void Execute_TestCase4_OverloadStreamwiseInOutAnObject(void)
{
	TestCase4_OverloadStreamwiseInOutAnObject();
}

void Execute_TestCase4_InvokeVirtualBaseClassDestructor(void)
{
	TestCase4_InvokeNonVirtualBaseClassDestructor();
	TestCase4_InvokeVirtualBaseClassDestructor();
	return;
}