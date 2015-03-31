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

		friend std::ostream& operator<<(std::ostream& os, const Money& oCurrency);
	};

	std::ostream& operator<<(std::ostream& os, const Money& oCurrency);

#endif	/*  MONEY_H  */