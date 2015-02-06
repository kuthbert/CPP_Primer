/**********************************************************************************************
 * File name		: Date.cpp
 * Description		: Implement the class "Date".
 * Creator			: XU ZAN
 * Creation date	: Fri. Feb. 06, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **********************************************************************************************/


#include "Date.h"

Date::Date(int y, int m, int d)
{
	yr = y;
	mo = m;
	da = d;
}

Date::~Date(void)
{
	// To do
}

int Date::getyear(void)
/* 取值成員函數
 * getter
 */
{
	return yr;
}

void Date::setyear(int y)
/* 賦值成員函數
 * setter
 */
{
	yr = y;
}