/*********************************************************************************************
 * File name		: Circle.cpp
 * Description		: Implement the class "Circle".
 * Creator			: XU ZAN
 * Creation date	: Tue.	Feb. 10, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *********************************************************************************************/


#include "Circle.h"

Circle::Circle(void)
{
	// To do
}

Circle::~Circle(void)
{
	// To do
}


double Circle::area(Radius a)
{
	s = a.r * a.r * Pi;		// 调用Radius类对象的私有数据成员r
	return s;
}