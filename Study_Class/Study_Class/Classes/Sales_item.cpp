/*******************************************************************************************
 * File name		: Sales_item.cpp
 * Description		: Implement the class "Sales_item".
 * Creator			: XU ZAN
 * Creation date	: Thur.	Nov. 27, 2014
 * Copyright(C)		2014	All rights reserved.
 *
 *******************************************************************************************/

#include "Sales_item.h"

Sales_item::Sales_item(void)
{
	units_sold = 0;
	revenue = 0.0;
}

double Sales_item::avg_price(void) const
{
	if (units_sold)
	{
		return revenue/units_sold;
	}
	else
	{
		return 0;
	}
}

bool Sales_item::same_isbn(const Sales_item &rhs) const
{
	return (isbn == rhs.isbn);
}