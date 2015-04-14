/*************************************************************************************
 * File name		: AValue.cpp
 * Description		: Implement the class "AValue".
 * Creator			: Frederique Hsu
 * Creation date	: Wed.	March 11, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *************************************************************************************/

#include "AValue.h"
#include <iostream>

AValue::AValue(int v) : val(v), rptct(0)
{
	/* empty */
}

AValue::~AValue(void)
{
	std::cout<<"AValue: "<<val<<" was reported "<<rptct<<" times."<<std::endl;
}

void AValue::report(void) const
{
	/* Modify the data member 'rptct',
	 * even though the report() function is const.
	 */
	rptct++;
	std::cout<<"Value = "<<val<<std::endl;
	return;
}