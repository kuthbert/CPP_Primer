/**************************************************************************************
 * File name		: ItemQty.cpp
 * Description		: Implement a new class "ItemQty".
 * Creator			: Frederick Hsu
 * Creation date	: Mon.	March 16, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **************************************************************************************/


#include "ItemQty.h"

#include <iostream>

ItemQty::ItemQty(int oh, char *d)
{
	onhand = oh;
	std::strcpy(desc, d);
}

ItemQty::ItemQty(void)
{
	onhand = 0;
	std::memset(desc, 0, 25);
}

ItemQty::~ItemQty(void)
{
	/* empty */
}

void ItemQty::display(void) const
{
	std::cout<<"\n"<<desc<<" : "<<onhand;
}

int ItemQty::operator-() const
{
	return -onhand;
}