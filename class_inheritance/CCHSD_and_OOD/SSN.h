/***********************************************************************************************
 * File name		: SSN.h
 * Description		: Define a class "SSN".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 24, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ***********************************************************************************************/


#ifndef SSN_H
#define SSN_H

	#include <iostream>

	class SSN	// Social security number
	{
	private:
		unsigned long int ssn;
	protected:
	public:
		explicit SSN(unsigned long int sn=0);
		~SSN(void);

		unsigned long int GetSsn(void);
		void SetSsn(unsigned long int sn);

		friend std::ostream& operator<<(std::ostream& os, const SSN& objSSN);
		friend std::istream& operator>>(std::istream& is, SSN& objSSN);
	};

	std::ostream& operator<<(std::ostream& os, const SSN& objSSN);
	std::istream& operator>>(std::istream& is, SSN& objSSN);	// Not implemented.

#endif	/*  SSN_H  */