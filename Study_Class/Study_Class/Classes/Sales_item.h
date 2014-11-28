/*******************************************************************************************
 * File name		: Sales_item.h
 * Description		: Define the class "Sales_item".
 * Creator			: XU ZAN
 * Creation date	: Thur.	Nov. 27, 2014
 * Copyright(C)		2014	All rights reserved.
 *
 *******************************************************************************************/

#ifndef SALES_ITEM_H
#define SALES_ITEM_H

	#include <string>

	class Sales_item
	{
	public:
		/* Default constructor needed to initialize members of build-in type
		 */
		Sales_item(void);
		/* Operations on Sales_item objects
		 */
		double avg_price(void) const;
		bool same_isbn(const Sales_item &rhs) const;
	private:
		std::string isbn;
		unsigned int units_sold;
		double revenue;
	};

#endif	/*  SALES_ITEM_H  */