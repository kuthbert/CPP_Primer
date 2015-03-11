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

// #define ASSIGNMENT_OPERATOR_OVERLOAD
// #define NEW_DELETE_OPERATOR
#define COPY_CONSTRUCTOR

	class Date
	{
#if defined (ASSIGNMENT_OPERATOR_OVERLOAD)
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
#endif	/*  ASSIGNMENT_OPERATOR_OVERLOAD  */

#if defined (NEW_DELETE_OPERATOR)
	private:
		int yr;
		int mo;
		int da;
	public:
		Date(void);
		~Date(void);
#endif	/*  NEW_DELETE_OPERATOR  */

#if defined (COPY_CONSTRUCTOR)
	private:
		int yr;
		int mo;
		int da;
		char *month;
	public:
		Date(int y=0, int m=0, int d=0);
		~Date(void);
		Date(const Date&);	// Copy constructor
		void display(void) const;
#endif	/*  COPY_CONSTRUCTOR  */
	};

#endif	/*  DATE_H  */