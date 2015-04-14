/*********************************************************************************************************************
 * File name		: CustomDate.h
 * Description		: Define a new class "CustomDate" derived from base class "Date".
 * Creator			: Frederick Hsu
 * Creation date	: Mon.	March 23, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *********************************************************************************************************************/


#ifndef CUSTOMDATE_H
#define CUSTOMDATE_H

	#include "../base/Date.h"
	
	class CustomDate : public Date
	{
	protected:
	private:
	public:
		CustomDate(int yr, int da);
		~CustomDate(void);
		int GetDay(void) const;		// Return the nth day of one year.
		virtual void Display(void) const;
	};


#endif	/*  CUSTOMDATE_H  */