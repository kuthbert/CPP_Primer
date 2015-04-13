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
	Sales_item empty;		// use the default constructor
	empty.Print_Information();
	
	Sales_item Primer_3rd_Edition("0-201-82470-1");
	Primer_3rd_Edition.Print_Information();
	
	Sales_item Primer_4th_Edition(std::cin);
	Primer_4th_Edition.Print_Information();
}

void  Test_Screen_Class(void)
{
	Screen myscreen(5, 3);
	const Screen blank(5, 3);
	
	char ch = myscreen.get();	// Call Screen::get(void)
	ch = myscreen.get(0, 0);	// Call Screen::get(index, index)
	
	/* Move cursor to given position,
	 * and set that character.
	 */
	myscreen.move(4, 0).set('#');		/* This statement equals to
										   myscreen.move(4, 0);
										   myscreen.set('#');
										 */

	#if 0
		/* Move cursor to given position, set that character
		 * and display the screen.
		 */
		myscreen.move(4, 0).set('#').display(std::cout);
		/* The below code will fail if display is a const member function
		 * display return a const reference.
		 * We cannot call set on a const.
		 */
		myscreen.display(std::cout).set('*');
	#else
		myscreen.set('#').display(std::cout);	// calls non-const version
		blank.display(std::cout);				// calls const version
	#endif
}
