/*********************************************************************************
 * File name		: Test_SpecialDate.cpp
 * Description		: Design test case to verify how an object of derived class 
 *					  access his base class.
 * Creator			: Frederick Hsu
 * Creation date	: Mon.	March 23, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *********************************************************************************/


#include "Test_SpecialDate.h"
#include "SpecialDate.h"

#include <iostream>



void TestCase4_DerivedClassObject2AccessBaseClass(void)
{
	for (;;)
	{
		std::cout<<"Enter YYYY/MM/DD (0/0/0 to quit) : ";
		int year = 0, month = 0, day = 0;
		std::cin>>year>>month>>day;
		if (day == 0)
		{
			break;
		}
		SpecialDate spdt(2015, 3, 23);
		if (spdt.IsNullDate())
		{
			std::cout<<"Try again."<<std::endl;
		}
		else
		{
			spdt.Display();
			spdt.Date::Display();	// 绕过派生类的方法，而调用基类中的方法
		}
		std::cout<<std::endl;
	}
	return;
}