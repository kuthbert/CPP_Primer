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

	#define GETTER_CONST

	#include "CustomDate.h"

	class Date;

	class Date
	{ 
	private:
		int mo;
		int da;
		int yr;
	public:
		Date(void);
		Date(int y, int m, int d);
		~Date(void);
		/* 
		 * A member function to return the year
		 */
	#if !defined (GETTER_CONST)
		int getyear(void);
	#else	
		int getyear(void) const;
	#endif
		/*
		 * A memmber function to set the year
		 */
		void setyear(int y);
		void display(void) const;
		operator CustomDate(void) const;
	};

#endif	/*  DATE_H  */