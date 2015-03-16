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
	public:
		Date(int y=0, int m=0, int d=0);
		Date(const Date& dt);
		~Date(void);
		void display(void) const;

		#if !defined (OPERATOR_OVERLOAD_OUTSIDE_CLASS)
			/* Overloaded various operator functions
			 */
			Date operator+(int n) const;
			Date operator-(int n);
			Date operator+=(int n);
			Date operator-=(int n);
			Date operator=(const Date& dt);
			int operator==(Date& dt) const;
			int operator<(Date& dt)  const;
			int operator<=(Date& dt) const;
			int operator!=(Date& dt) const;
			
			Date operator++();
			Date operator++(int);
			Date operator--();
			Date operator--(int);
		#else
			friend Date operator+(int n, Date& dt);
			friend Date operator+(Date& dt, int n);
		#endif	/* OPERATOR_OVERLOAD_OUTSIDE_CLASS */
	};

	#if !defined (OPERATOR_OVERLOAD_OUTSIDE_CLASS)
		/* Overloaded operator:
		 * int + Date
		 */
		Date operator+(int n, Date& dt);
		Date operator+=(int n, Date& dt);
	#else
		Date operator+(int n, Date& dt);
		Date operator+(Date& dt, int n);
	#endif	/* OPERATOR_OVERLOAD_OUTSIDE_CLASS */

#endif	/*  DATE_H  */