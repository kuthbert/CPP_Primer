/***********************************************************************************
 * File name		: Test_PDate.cpp
 * Description		: To verify the stream-wise input or output an object.
 * Creator			: Frederick Hsu
 * Creation date	: Wed.	March 25, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ***********************************************************************************/


#include "Test_PDate.h"
#include "PDate.h"

void TestCase4_OverloadStreamwiseInOutAnObject(void)
{
	Date dt;
	std::cout<<"Enter date : YYYY/MM/DD  ";
	std::cin>>dt;
	std::cout<<"The date is : "<<dt<<std::endl;

	return;
}