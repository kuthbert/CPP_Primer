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
#include <iostream>

void TestCase4_OperatorPlusOverload(void)
{
	int year = 0, month = 0, day = 0;
	long int lDiff = 0;
	Date dt(2012, 3, 26),   myDate1(2012, 3, 26), myDate2(2012, 12, 31), myDate3(2012, 3, 12),
		 Add_Date(0, 0, 0), 
		 Deduct_Date(0, 0, 0);

	if (dt == myDate1)
	{
		std::cout<<"The 2 objects 'dt' and 'myDate1' are equal."<<std::endl;
	}
	if (dt < myDate2)
	{
		std::cout<<"Object 'dt' is smaller than 'myDate2'."<<std::endl;
	}
	if (dt >= myDate3)
	{
		std::cout<<"Object 'dt' is bigger than 'myDate3'."<<std::endl;
	}

	Add_Date =  dt + 70;
	Add_Date.Print();
	Add_Date = 135 + dt;
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

	 lDiff = myDate2 - myDate1;
	 std::cout<<"The difference day is "<<lDiff<<std::endl;

	 dt.GetDate(year, month, day);
	 std::cout<<"Current date is : "<<year<<"-"<<month<<"-"<<day<<std::endl;

	 dt.SetDate(2015, 3, 20);
	 dt.Print();
}