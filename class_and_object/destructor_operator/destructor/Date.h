/**********************************************************************************************
 * File name		: Date.h
 * Description		: Define a new class "Date".
 * Creator			: XU ZAN
 * Creation date	: Wed.	Feb. 11, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **********************************************************************************************/


#ifndef DATE_H
#define DATE_H

	class Date
	{
	private:
		int mo;
		int da;
		int yr;
		char *month;
	public:
		Date(void);
		Date(int y, int m, int d);
		~Date(void);
		void display(void) const;

		/* Overloaded assignment operator
		 */
	#if defined (RETURN_OBJECT_OVERLOADED_ASSIGNMENT_OPERATOR)
		void operator=(const Date&);
	#else
		Date& operator=(const Date&);
	#endif
		void month_display(void);
	};

#endif	/*  DATE_H  */