/***********************************************************************************
 * File name		: Class_Objects.cpp
 * Description		: Study to define the objects of class, and how to use it.
 * Creator			: XU ZAN
 * Creation date	: Fri.	Nov. 28, 2014
 * Copyright(C)		2014	ALL RIGHTS RESERVED.
 *
 ***********************************************************************************/


#include "Class_Objects.h"

#include "Sales_item.h"
#include "Screen.h"


void Define_Sales_item_Objects(void)
{
	Sales_item item;	// Default initilized object of type : Sales_item
	Sales_item accum, trans;
}

void  Test_Screen_Class(void)
{
	Screen myscreen;
	char ch = myscreen.get();	// Call Screen::get(void)
	ch = myscreen.get(0, 0);	// Call Screen::get(index, index)
	
	/* Move cursor to given position,
	 * and set that character.
	 */
	myscreen.move(4, 0).set('#');		/* This statement equals to
										   myscreen.move(4, 0);
										   myscreen.set('#');
										 */
}
