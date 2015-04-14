/***********************************************************************************************
 * File name		: Money.cpp
 * Description		: Implement a class "Money".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 24, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ***********************************************************************************************/


#include "Money.h"
#include <iomanip>

Money::Money(double value)
{
	/* Ensure that the value is only 2 decimal places
	 * and rounded up to the nearest penny.
	 *
	 */
	long int nval = ((value + 0.005)*100);
	float cents = nval % 100;
	cents /= 100;
	dollars = (nval/100) + cents;
}

Money::~Money(void)
{
	/* empty */
}

Money::operator double(void) const
{
	return dollars;
}

std::ostream& operator<<(std::ostream& os, const Money& oCurrency)
{
	os<<"$"
	  <<std::setw(10)
	  <<std::setprecision(2)
	  <<std::setiosflags(std::ios::fixed)
	  <<oCurrency.dollars;

	return os;
}

Money& Money::operator=(const Money& oCurrency)
{
	this->dollars = oCurrency.dollars;
	return *this;
}