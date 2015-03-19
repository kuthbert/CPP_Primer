/******************************************************************************************
 * File name		: Test_Date.cpp
 * Description		: Test and validate the class "Date".
 * Creator			: Frederick Hsu
 * Creation date	: Wed.	March 18, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ******************************************************************************************/

#include "Test_Date.h"
#include "Date.h"

void TestCase4_OperatorPlusOverload(void)
{
	Date dt(2012, 3, 26),  
		 Add_Date(0, 0, 0), 
		 Deduct_Date(0, 0, 0);

	Add_Date =  dt + 70;
	Add_Date.Print();

	Deduct_Date = dt - 27;
	Deduct_Date.Print();

	dt += 70;
	dt.Print();
	dt -= 70;
	dt.Print();

	 Add_Date = (++dt);
	 Add_Date.Print();
	 dt.Print();

	 Add_Date = (dt++);
	 Add_Date.Print();
	 dt.Print();
}