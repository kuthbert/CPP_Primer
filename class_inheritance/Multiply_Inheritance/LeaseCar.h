/**********************************************************************************************************************
 * File name		: LeaseCar.h
 * Description		: Create a new class "LeaseCar", derived from 2 base classes of both "Vehicle" and "Expense".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 31, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **********************************************************************************************************************/

#ifndef LEASECAR_H
#define LEASECAR_H

	#include "Vehicle.h"
	#include "Expense.h"

	class LeaseCar : public Vehicle, public Expense
	{
	private:
	protected:
	public:
		LeaseCar(int id,
				 int year,
				 const std::string& model);
		virtual ~LeaseCar(void);
	};

#endif	/*  LEASECAR_H  */