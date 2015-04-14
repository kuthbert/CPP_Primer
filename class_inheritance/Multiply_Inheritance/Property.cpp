/**********************************************************************************************************************
 * File name		: Property.cpp
 * Description		: Implement the derived class "Property"
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 31, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **********************************************************************************************************************/

#include "Property.h"

Property::Property(int id) : idnbr(id)
{
	/* empty */
}
		
Property::~Property(void)
{
	/* empty */
}

int Property::GetNbr(void) const
{
	return idnbr;
}
		
void Property::SetName(const std::string& nm)
{
	name = nm;
}

const std::string& Property::GetName(void)
{
	return name;
}
		
void Property::SetDate(Date dt)
{
	dateacquired = dt;
}

const Date& Property::GetDate(void) const
{
	return dateacquired;
}


void Property::SetCost(Money cst)
{
	cost = cst;
}

		
Money Property::GetCost(void) const
{
	return cost;
}