/*******************************************************************************************
 * File name		: Date.h
 * Description		: Define a new class "Date", to study the operator-overload feature.
 * Creator			: Frederick Hsu
 * Creation date	: Thur.	March 12, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *******************************************************************************************/


#ifndef DATE_H
#define DATE_H

	// #define OPERATOR_OVERLOAD_OUTSIDE_CLASS

	class Date
	{
	private:
		int yr;
		int mo;
		int da;
		static int dys[];
	public:										// Usage : 
		Date(int y=0, int m=0, int d=0);		// object()  or  object or object(y, m, d)
		Date(const Date& dt);					// object1(object2)
		~Date(void);
		void display(void) const;

		#if !defined (OPERATOR_OVERLOAD_OUTSIDE_CLASS)
			/* Overloaded various operator functions
			 */
			Date operator+(int n) const;		// object1 +  n
			Date operator-(int n);				// object1 -  n
			Date operator+=(int n);				// object1 += n
			Date operator-=(int n);				// object1 -= n
			Date operator=(const Date& dt);		// object1 = object2
			int operator==(Date& dt) const;		// object1 == object2
			int operator<(Date& dt)  const;		// object1 <  object2
			int operator<=(Date& dt) const;		// object1 <= object2
			int operator!=(Date& dt) const;		// object1 != object2
			
			Date operator++();					// ++object
			Date operator++(int);				// object++
			Date operator--();					// --object
			Date operator--(int);				// object--
		#else
			friend Date operator+(int n, Date& dt);
			friend Date operator+(Date& dt, int n);
		#endif	/* OPERATOR_OVERLOAD_OUTSIDE_CLASS */
	};

	#if !defined (OPERATOR_OVERLOAD_OUTSIDE_CLASS)
		/* Overloaded operator:
		 * int + Date
		 */
		Date operator+(int n, Date& dt);		// n + object1
		Date operator+=(int n, Date& dt);		// object1 = n + object2
	#else
		Date operator+(int n, Date& dt);
		Date operator+(Date& dt, int n);
	#endif	/* OPERATOR_OVERLOAD_OUTSIDE_CLASS */

	class DatePtr
	{
	private:
		Date *dp;
	public:
		DatePtr(Date *d = 0);
		~DatePtr(void);

		Date* operator->();
	};

#endif	/*  DATE_H  */