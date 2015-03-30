/************************************************************************************
 * File name		: PDate.h
 * Description		: Overload the streamed input/ output operator to Date's object.
 * Creator			: Frederick Hsu
 * Creation date	: Wed.	March 25, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ************************************************************************************/


#ifndef PDATE_H
#define PDATE_H

	#include "Date.h"

	// #define INLINE_FUNC_OUTSIDE_IMPLEMENT

	#if defined (INLINE_FUNC_OUTSIDE_IMPLEMENT)
		inline std::ostream& operator<<(std::ostream& os, const Date& dt);
		inline std::istream& operator>>(std::istream& is, Date& dt);
	#else
		inline std::ostream& operator<<(std::ostream& os,  const Date& dt)
		{
			os<<dt.GetYear()<<"/"<<dt.GetMonth()<<"/"<<dt.GetDay();
			return os;
		}

		inline std::istream& operator>>(std::istream& is, Date& dt)
		{
			int year = 0, month = 0, day = 0;
			is>>year>>month>>day;
			dt.SetDate(year, month, day);
			return is;
		}
	#endif

#endif	/*  PDATE_H  */