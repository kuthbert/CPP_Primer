/***********************************************************************************************
 * File name		: Money.h
 * Description		: Define a class "Money".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 24, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ***********************************************************************************************/



#ifndef MONEY_H
#define MONEY_H

	#include <iostream>

	class Money
	{
	private:
		double dollars;
	protected:
	public:
		Money(double value=0);
		~Money(void);

		operator double(void) const;
		Money& operator=(const Money& oCurrency);
#if 0
		bool operator==(const Money& oCurrency);
		bool operator>(const Money& oCurrency);
		bool operator<(const Money& oCurrency);
		Money& operator+(const Money& oCurrency);
		Money& operator+(double dValue);
		Money& operator+(long int lValue);
		Money& operator+(int iValue);
		Money& operator-(const Money& oCurrency);
		Money& operator-(double dValue);
		Money& operator-(long int lValue);
		Money& operator-(int iValue);
#endif

		friend std::ostream& operator<<(std::ostream& os, const Money& oCurrency);
	};

	std::ostream& operator<<(std::ostream& os, const Money& oCurrency);

#endif	/*  MONEY_H  */