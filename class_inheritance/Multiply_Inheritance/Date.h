/***********************************************************************************************
 * File name		: Date.h
 * Description		: Define a class "Date".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 24, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ***********************************************************************************************/


#ifndef DATE_H
#define DATE_H

	#include <iostream>

	class Date
	{
	private:
		int year;
		int month;
		int day;
	protected:
		static const int DaysOfEachMonth[];
		long int TotalDays;
	public:
		Date(int yr, int mo, int da);
		Date(const Date& dt);
		Date(void);
		virtual ~Date(void);

		Date& operator=(const Date& dt);
		void SetDate(int yr, int mo, int da);
		void SetYear(int yr);
		void SetMonth(int mo);
		void SetDay(int da);

		void GetDate(int &yr, int &mo, int &da) const;
		int GetYear(void) const;
		int GetMonth(void) const;
		int GetDay(void) const;

		virtual void Display(std::ostream& os) const;

		bool IsLeapYear(int yr) const;
		bool IsLeapYear(void) const;
	};

	long ComputeTotalDays(int year, int month, int day);
	bool IsLeapYear(int year);

	#include "PDate.h"

#endif	/*  DATE_H  */ 