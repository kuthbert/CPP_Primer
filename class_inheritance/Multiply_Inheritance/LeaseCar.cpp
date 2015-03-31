/**********************************************************************************************************************
 * File name		: LeaseCar.cpp
 * Description		: Implement the new class "LeaseCar", derived from 2 base classes of both "Vehicle" and "Expense".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 31, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **********************************************************************************************************************/


#include "LeaseCar.h"


LeaseCar::LeaseCar(int id,
				   int year,
				   const std::string& model) : Vehicle(year, model), Expense(id)
{
	/* empty */
}

LeaseCar::~LeaseCar(void)
{
	/* empty */
}