/****************************************************************************************************
 * File name		: CustomDate.h
 * Description		: Define a class "CustomDate".
 * Creator			: XU ZAN
 * Creation date	: Fri. Feb. 06, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ****************************************************************************************************/


#ifndef CUSTOMDATE_H
#define CUSTOMDATE_H

	class CustomDate;

	class CustomDate
	{
	private:
		int da;
		int yr;
	public:
		CustomDate(void);
		CustomDate(int y, int d);
		~CustomDate(void);

		void display(void) const;

		int getday(void) const;
		void setday(int d);
	};
	

#endif	/*  CUSTOMDATE_H  */