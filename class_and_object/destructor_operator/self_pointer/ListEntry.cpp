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

#if 1
	/* 
	 * Define the static pointers here:
	 *
	 * 在類中聲明的靜態成員並不能自動定義這個變量, 
	 * 必須在類定義之外定義該成員.
	 */
	ListEntry* ListEntry::pHeadEntry;
	ListEntry* ListEntry::pTailEntry;
#endif


ListEntry::ListEntry(char *str)
{
	if (pHeadEntry == NULL)
	{
		pHeadEntry = this;
	}
	if (pTailEntry != NULL)
	{
		pTailEntry->next_entry = this;
	}
	pTailEntry = this;
	list_value = new char[std::strlen(str)+1];
	std::strcpy(list_value, str);
	next_entry = NULL;
}


ListEntry::~ListEntry(void)
{
	delete [] list_value;
}


ListEntry* ListEntry::NextEntry(void) const
{
	return next_entry;
}

void ListEntry::display(void) const
{
	std::cout<<list_value<<std::endl;
}

void ListEntry::AddEntry(ListEntry& le)
/* Use the "this" pointer to chain the list
 */
{
	le.next_entry = this;
}