/**********************************************************************************************
 * File name		: Date.h
 * Description		: Define a class "Date".
 * Creator			: XU ZAN
 * Creation date	: Fri. Feb. 06, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **********************************************************************************************/


#ifndef DATE_H
#define DATE_H

	class Date;

	class Date
	{ 
	private:
		int mo;
		int da;
		int yr;
	public:
		Date(int y, int m, int d);
		~Date(void);
		/* 
		 * A member function to return the year
		 */
		int getyear(void);
		/*
		 * A memmber function to set the year
		 */
		void setyear(int y);
	};

#endif	/*  DATE_H  */