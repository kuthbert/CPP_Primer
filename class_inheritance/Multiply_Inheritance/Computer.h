/**********************************************************************************************************************
 * File name		: Computer.h
 * Description		: Create a new class "Computer", derived from base class "Asset".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 31, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **********************************************************************************************************************/

#ifndef COMPUTER_H
#define COMPUTER_H

	#include "Asset.h"

	class Computer : public Asset
	{
	private:
	protected:
	public:
		Computer(int id, int type);
		virtual ~Computer(void);
	};

#endif	/*  COMPUTER_H  */