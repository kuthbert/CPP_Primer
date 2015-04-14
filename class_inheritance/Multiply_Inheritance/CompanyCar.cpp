/**********************************************************************************************************************
 * File name		: CompanyCar.cpp
 * Description		: Implement the new class "CompanyCar", derived from 2 base classes of both "Vehicle" and "Asset".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 31, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **********************************************************************************************************************/


#include "CompanyCar.h"

CompanyCar::CompanyCar(int id, 
					   int year, 
					   const std::string& model) : Vehicle(year, model),
												   Asset(id, Asset::straight)
{
	/* empty */
}

CompanyCar::~CompanyCar(void)
{
	/* empty */
}