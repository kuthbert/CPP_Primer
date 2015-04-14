/*********************************************************************************************
 * File name		: Complex.cpp
 * Description		: Implement the complex number class.
 * Creator			: XU ZAN
 * Creation date	: Thur.	Feb. 12, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *********************************************************************************************/


#include "Complex.h"
#include <iostream>

Complex::Complex(void)
{
	real = 0;
	imag = 0;
}

Complex::Complex(double r, double i)
{
	real = r;
	imag = i;
}

Complex::~Complex(void)
{
	// To do
}

void Complex::print(void)
{
	std::cout<<"("<<real<<", "<<imag<<")"<<std::endl;
	std::cout<<"z = "<<real<<" + "<<imag<<"i"<<std::endl;
}
