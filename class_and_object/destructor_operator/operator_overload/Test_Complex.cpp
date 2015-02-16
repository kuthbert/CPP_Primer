/*****************************************************************************************
 * File name		: Test_Complex.cpp
 * description		: Test and validate the class "Complex".
 * Creator			: XU ZAN
 * Creation date	: Thur.	Fe. 12, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *****************************************************************************************/


#include "Test_Complex.h"
#include "Complex.h"
#include <iostream>

void TestCase4_ComplexOperatorCalculation(void)
{
	Complex a(3, 4), b(5, 12);
	Complex Result(0, 0);

	std::cout<<"Complex a = ";
	a.print();
	std::cout<<"Complex b = ";
	b.print();
	std::cout<<std::endl;

	std::cout<<"Complex + calculation : "<<std::endl;
	Result = a + b;
	std::cout<<"a + b = ";
	Result.print();
	std::cout<<std::endl;

	std::cout<<"Complex - calculation : "<<std::endl;
	Result = a - b;
	std::cout<<"a - b = ";
	Result.print();
	std::cout<<std::endl;

	std::cout<<"Complex * calculation : "<<std::endl;
	Result = a * b;
	std::cout<<"a * b = ";  
	Result.print();
	std::cout<<std::endl;

	std::cout<<"Complex / calculation : "<<std::endl;
	Result = a / b;
	std::cout<<"a / b = ";
	Result.print();
	std::cout<<std::endl;

	return;
}