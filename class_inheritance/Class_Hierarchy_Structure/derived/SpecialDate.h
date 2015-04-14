/************************************************************************
 * File name		: SpecialDate.h
 * Description		: Define a new derived class "SpecialDate".
 * Creator			: Frederick Hsu
 * Creation date	: Fri.	March 20, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ************************************************************************/


#ifndef SPECIALDATE_H
#define SPECIALDATE_H

	#include "../base/Date.h"

	class SpecialDate : public Date
	{
	protected:
	private:
		static char *mos[];
	public:
		SpecialDate(int yr, int mo, int da) : Date(yr, mo, da)
		{
			/* empty */
		}
		~SpecialDate(void);
		virtual void Display(void) const;
		bool IsNullDate(void) const;
	};

#endif	/*  SPECIALDATE_H  */