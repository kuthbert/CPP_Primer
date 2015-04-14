/**********************************************************************************************************************
 * File name		: Property.h
 * Description		: Create a new class "Property", derived from root base class "DisplayObject".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 31, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **********************************************************************************************************************/


#ifndef PROPERTY_H
#define PROPERTY_H

	#include "DisplayObject.h"
	#include <string>
	#include "Date.h"
	#include "Money.h"


	class Property : public virtual DisplayObject
	{
	private:
		int idnbr;
		std::string name;
		Date dateacquired;
		Money cost;
	protected:
		Property(int id);
		virtual ~Property(void);
	public:
		int GetNbr(void) const;
		void SetName(const std::string& nm);
		const std::string& GetName(void);
		void SetDate(Date dt);
		const Date& GetDate(void) const;
		void SetCost(Money cst);
		Money GetCost(void) const;
	};

#endif	/*  PROPERTY_H  */