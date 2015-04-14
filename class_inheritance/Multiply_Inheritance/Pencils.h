/**********************************************************************************************************************
 * File name		: Pencils.h
 * Description		: Create a new class "Pencils", derived from base class "Expense".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 31, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **********************************************************************************************************************/


#ifndef PENCILS_H
#define PENCILS_H

	#include "Expense.h"

	class Pencils : public Expense
	{
	private:
	protected:
	public:
		Pencils(int id);
		virtual ~Pencils(void);
	};


#endif	/*  PENCILS_H  */