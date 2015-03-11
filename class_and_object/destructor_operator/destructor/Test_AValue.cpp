/***********************************************************************************
 * File name		: Test_AValue.cpp
 * Description		: Design test case to validate the class "AValue".
 * Creator			: Frederique Hsu
 * Creation date	: Wed.	March 10, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ***********************************************************************************/

#include "Test_AValue.h"
#include "AValue.h"

void TestCase4_ModifyMutableDataMemberViaConstMemberFunc(void)
{
	const AValue aval(10);
	aval.report();
	aval.report();
	aval.report();
	return;
}