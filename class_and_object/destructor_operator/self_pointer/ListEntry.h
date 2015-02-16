/******************************************************************************************************
 * File name		: ListEntry.h
 * Description		: Use the self-pointer "this" to construct a link list class "ListEntry".
 * Creator			: XU ZAN
 * Creation date	: Fri. Feb. 13, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ******************************************************************************************************/


#ifndef LIST_ENTRY_H
#define LIST_ENTRY_H

	class ListEntry
	{
	private:
		char *list_value;
		ListEntry *prev_entry;
	public:
		ListEntry(char *);
		~ListEntry(void);
		ListEntry* PrevEntry(void) const;
		void display(void) const;
		ListEntry& operator=(const ListEntry& src_assignor);

		void AddEntry(ListEntry& le);
	};

#endif	/*  LIST_ENTRY_H  */