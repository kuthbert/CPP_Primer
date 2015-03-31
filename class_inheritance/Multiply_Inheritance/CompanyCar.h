/**********************************************************************************************************************
 * File name		: CompanyCar.h
 * Description		: Create a new class "CompanyCar", derived from 2 base classes of both "Vehicle" and "Asset".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 31, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **********************************************************************************************************************/


#ifndef COMPANYCAR_H
#define COMPANYCAR_H

	#include "Vehicle.h"
	#include "Asset.h"

	class CompanyCar : public Vehicle, public Asset
	{
	private:
	protected:
	public:
		CompanyCar(int id, int year, const std::string& model);
		virtual ~CompanyCar(void);
	};

#endif	/*  COMPANYCAR_H  */