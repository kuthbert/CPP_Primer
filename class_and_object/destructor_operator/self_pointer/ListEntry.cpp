/******************************************************************************************************
 * File name		: ListEntry.cpp
 * Description		: Use the self-pointer "this" to construct a link list class "ListEntry".
 * Creator			: XU ZAN
 * Creation date	: Fri. Feb. 13, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ******************************************************************************************************/

#include "ListEntry.h"
#include <cstring>
#include <iostream>


ListEntry::ListEntry(char *str)
{
	list_value = new char[std::strlen(str)+1];
	std::strcpy(list_value, str);
	prev_entry = NULL;
};


ListEntry::~ListEntry(void)
{
	delete [] list_value;
}


ListEntry* ListEntry::PrevEntry(void) const
{
	return prev_entry;
}


void ListEntry::display(void) const
{
	std::cout<<list_value<<std::endl;
}

void ListEntry::AddEntry(ListEntry& le)
/* Use the "this" pointer to chain the list
 */
{
	le.prev_entry = this;
}

ListEntry& ListEntry::operator=(const ListEntry& src_assignor)
{
	if (this != &src_assignor)
	{
		delete [] list_value;
		delete prev_entry;

		if (src_assignor.list_value != 0)
		{
			list_value = new char[std::strlen(src_assignor.list_value)+1];
			std::strcpy(list_value, src_assignor.list_value);
		}
		else
		{
			list_value = 0;
		}
		if (src_assignor.prev_entry != NULL)
		{
			// delete prev_entry;
			prev_entry = src_assignor.prev_entry;
		}
		else
		{
			prev_entry = NULL;
		}
	}
	return *this;
}