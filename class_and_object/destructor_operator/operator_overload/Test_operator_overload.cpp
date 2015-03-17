/***************************************************************************************
 * File name		: Test_operator_overload.cpp
 * Description		: Design test cases to verify & test the operator overlooad function.
 * Creator			: XU ZAN
 * Creation date	: Thur. Feb. 12, 2015
 * Copyright(C)		2015	All rights reservved.
 *
 ***************************************************************************************/


#include "Test_operator_overload.h"
#include "cMessage.h"

void TestCase4_AssignmentOpertorOverload(void)
{
	cMessage msg1, msg2;
	msg2.set("Exercise!");
	msg2.display();

	msg1 = msg2;
	msg1.display();

	return;
}