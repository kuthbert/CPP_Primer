/***********************************************************************************************
 * File name		: SSN.cpp
 * Description		: Implement a class "SSN".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 24, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ***********************************************************************************************/


#include "SSN.h"

SSN::SSN(unsigned long int sn) : ssn(sn)
{
	if (sn > 999999999L)
	{
		ssn = 0;
	}
}

SSN::~SSN(void)
{
	/* empty */
}

unsigned long int SSN::GetSsn(void)
{
	return ssn;
}

void SSN::SetSsn(unsigned long int sn)
{
	if (sn > 999999999L)
	{
		std::cout<<"The ssn you set is wrong."<<std::endl;
		return;
	}
	else
	{
		ssn = sn;
		return;
	}
}

std::ostream& operator<<(std::ostream& os, const SSN& objSSN)
/* Output the social security number as the format "nnn-nn-nnnn".
 */
{
	int lssn = objSSN.ssn / 1000000L;
	int mssn = (objSSN.ssn - (lssn*1000000L)) / 10000;
	int rssn = objSSN.ssn - (lssn*1000000L) - (mssn*10000);
	os<<lssn<<"-"<<mssn<<"-"<<rssn;
	return os;
}