/*********************************************************************************************
 * File name		: Circle.h
 * Description		: Define a class "Circle".
 * Creator			: XU ZAN
 * Creation date	: Tue.	Feb. 10, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *********************************************************************************************/

#ifndef CIRCLE_H
#define CIRCLE_H

	#include "Radius.h"

	const double Pi = 3.1415926;

	class Circle
	{
	public:
		Circle(void);
		~Circle(void);
		double area(Radius a);
	private:
		double s;
	};

#endif	/*  CIRCLE_H  */