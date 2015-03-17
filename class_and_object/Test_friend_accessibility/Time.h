/**********************************************************************************************
 * File name		: Time.h
 * Description		: Define a class "Time".
 * Creator			: XU ZAN
 * Creation date	: Mon. Feb. 09, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **********************************************************************************************/


#ifndef TIME_H
#define TIME_H

	class Date;

	class Time
	{
	public:
		Time(void);
		Time(int h, int m, int s);
		~Time(void);

		friend void DisplayDateTime(const Date& dt, const Time& tm);
	private:
		int hr;
		int min;
		int sec;
	};

#endif	/*  TIME_H  */