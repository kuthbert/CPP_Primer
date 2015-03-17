/**************************************************************************
 * File name		: Time.h
 * Description		: Define a new class "Time".
 * Creator			: Frederique Hsu
 * Creation date	: Tue.	March 10, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **************************************************************************/


#ifndef TIME_H
#define TIME_H

	class Time
	{
	private:
		int hr;
		int min;
		int sec;
	public:
		Time(int h, int m, int s);
		~Time(void);
		void Display(void) const;
	};

#endif	/*  TIME_H  */