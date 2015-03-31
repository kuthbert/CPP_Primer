/**********************************************************************************************************************
 * File name		: Expense.h
 * Description		: Create a new class "Expense", derived from base class "Property".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 31, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **********************************************************************************************************************/


#ifndef EXPENSE_H
#define EXPENSE_H

	#include "Property.h"

	class Expense : public Property
	{
	private:
	protected:
	public:
		Expense(int id);
		virtual ~Expense(void);
	};

#endif	/*  EXPENSE_H  */