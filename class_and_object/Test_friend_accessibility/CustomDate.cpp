/****************************************************************************************************
 * File name		: CustomDate.cpp
 * Description		: Implement the class "CustomDate".
 * Creator			: XU ZAN
 * Creation date	: Mon. Feb. 09, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ****************************************************************************************************/


#include "CustomDate.h"
#include <iostream>

using namespace std;


CustomDate::CustomDate(void)
{
	year = 0;
	day = 0;
}

CustomDate::CustomDate(int y, int d)
{
	year = y;
	day = d;
}

CustomDate::~CustomDate(void)
{
	// To do
}

int CustomDate::getYear(void) const
{
	return year;
}

int CustomDate::getDay() const
{
	return day;
}

void CustomDate::setYear(int yr)
{
	year = yr;
	return;
}


void CustomDate::setDay(int da)
{
	day = da;
	return;
}

void CustomDate::display(void) const
{
	cout<<year<<"-"<<day<<endl;
}