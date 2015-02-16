/************************************************************************************************
 * File name		: Test_ListEntry.cpp
 * Description		: Design the test cases to test/validate the class "ListEntry".
 * Creator			: XU ZAN
 * Creation date	: Fri.	Feb. 13, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ************************************************************************************************/


#include "Test_ListEntry.h"
#include "ListEntry.h"
#include <iostream>

void TestCase4_UseThisPtr2AccessLinkListClass(void)
{
	ListEntry *prev = NULL;
	/*
	 * Read in some names
	 */
	while (1)
	{
		std::cout<<"Enter a name ('end' when done) : "<<std::endl;
		char name[25];
		std::cin>>name;
		if (0 == std::strncmp(name, "end", 3))
		{
			break;
		}
		/* Make a list entry of the names.
		 */
		ListEntry *list = new ListEntry(name);
		/* Add the entry to the linked list. 
		 */
		if (prev != NULL)
		{
			prev->AddEntry(*list);
		}
		prev = list;
	}
	/*
	 * Display the names in reverse order
	 */
	while (prev != NULL)
	{
		prev->display();
		ListEntry *hold = prev;
		prev = prev->PrevEntry();
		// Delete the Listentry object
		delete hold;
	}
	return;
}