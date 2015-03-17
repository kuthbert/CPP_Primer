/**************************************************************************************
 * File name		: ItemQty.h
 * Description		: Define a new class "ItemQty".
 * Creator			: Frederick Hsu
 * Creation date	: Mon.	March 16, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **************************************************************************************/


#ifndef ITEMQTY_H
#define ITEMQTY_H

	class ItemQty
	{
	private:
		int onhand;
		char desc[25];
	public:
		ItemQty(void);
		ItemQty(int oh, char *d);
		~ItemQty(void);
		void display(void) const;

		int operator-() const;
	};

#endif	/*  ITEMQTY_H  */