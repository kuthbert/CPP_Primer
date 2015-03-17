/********************************************************************************************
 * File name		: Date.h
 * Description		: Define a new base class "Date".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 17, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ********************************************************************************************/


#ifndef DATE_H
#define DATE_H

	class Date
	{
	private:
		int year;
		int month;
		int day;
	protected:
		static const int dys[];
		long int ndays;
	public:
		Date(int yr=0, int mo=0, int da=0);
		Date(const Date& dt);
		virtual ~Date(void);

		/* Overloaded assignment operator */
		Date& operator=(const Date& dt);
		/* Overload arithmetic operators */
		Date	operator+(int n) const;
		Date	operator-(int n) const;
		Date&	operator+=(int n);
		Date&	operator-=(int n);
		Date&	operator++(void);
		Date	operator++(int);
		Date&	operator--(void);
		Date	operator--(int);
		long int operator-(const Date& dt) const;
		/* Overload relational operators */
		bool operator==(const Date& dt) const;
		bool operator!=(const Date& dt) const;
		bool operator< (const Date& dt) const;
		bool operator> (const Date& dt) const;
		bool operator<=(const Date& dt) const;
		bool operator>=(const Date& dt) const;

		/* Getter and setter functions */
		void SetDate(int yr, int mo, int da);
		void SetMonth(int mo);
		void SetDay(int da);
		void SetYear(int yr);
		void GetDate(int& yr, int& mo, int& da) const;
		int GetMonth(void) const;
		int GetDay(void) const;
		int GetYear(void) const;

		/* Display method */
		//virtual void Display() const;

		bool IsLeapYear(int yr) const;
		bool IsLeapYear(void) const;
	};

	inline Date operator+(int n, const Date& dt);

#endif	/*  DATE_H  */