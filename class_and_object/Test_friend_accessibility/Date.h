/**********************************************************************************************
 * File name		: Date.h
 * Description		: Define a class "Date".
 * Creator			: XU ZAN
 * Creation date	: Mon. Feb. 09, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **********************************************************************************************/

#ifndef DATE_H
#define DATE_H

	#include "CustomDate.h"

	class Time;

	class Date
	{
	private:
		int yr;
		int mo;
		int da;
	public:
		Date(void);
		Date(int y, int m, int d);
		Date(const CustomDate& cd);
		~Date(void);
		void display(void) const;

		operator CustomDate(void) const;

		friend void DisplayDateTime(const Date& dt, const Time& tm);
	};

#endif	/*  DATE_H  */