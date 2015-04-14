/********************************************************************************************
 * File name		: SpecialCustomDate.h
 * Description		: To study more than 2 hierarchical layers of inheritance, design a new
 *					  class "SpecialCustomDate", directly derived from "SpecialDate" class,
 *					  and more indirectly derived from bottom base class "Date".
 * Creator			: Frederick Hsu
 * Creation date	: Mon.	March 23, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ********************************************************************************************/



#ifndef SPECIAL_CUSTOM_DATE_H
#define SPECIAL_CUSTOM_DATE_H

	#include "SpecialDate.h"
	#include "CustomDate.h"

	class SpecialCustomDate : public SpecialDate
	{
	private:
	protected:
	public:
		SpecialCustomDate(int yr, int da) : SpecialDate(0, 0, 0)
		{
			CustomDate csdt(yr, da);
			SetDate(csdt.GetYear(), csdt.GetMonth(), csdt.Date::GetDay());
		}
		~SpecialCustomDate(void);
		// virtual void Display(void) const;
	};

#endif	/*  SPECIAL_CUSTOM_DATE_H  */