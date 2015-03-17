/****************************************************************************************************
 * File name		: CustomDate.h
 * Description		: Define a class "CustomDate".
 * Creator			: XU ZAN
 * Creation date	: Mon. Feb. 09, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ****************************************************************************************************/


#ifndef CUSTOM_DATE_H
#define CUSTOM_DATE_H

	class Date;

	class CustomDate
	{
	private:
		int year;
		int day;
	public:
		CustomDate(void);
		CustomDate(int y, int d);
		~CustomDate(void);

		int getYear(void) const;
		int getDay(void) const;
		void setYear(int yr);
		void setDay(int da);
		
		friend class Date;
		void display(void) const;
	};

#endif	/*  CUSTOM_DATE_H  */