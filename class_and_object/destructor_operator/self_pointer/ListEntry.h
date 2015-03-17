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

#define STATIC_MEMBER_FUNCTION
// #define STATIC_DATA_MEMBER

	class ListEntry
	{
#if defined (STATIC_MEMBER_FUNCTION)
	private:
		/* Static list head and tail pointer */
		static ListEntry *pHeadEntry;
		static ListEntry *pTailEntry;
		char *list_value;
		ListEntry *next_entry;
	public:
		ListEntry(char *);
		~ListEntry(void);
		static ListEntry* HeadEntry(void)	// Static member function
		{
			return pHeadEntry;
		}
		ListEntry* NextEntry(void) const;
		void display(void) const;
#endif	/*  STATIC_MEMBER_FUNCTION  */

#if defined (STATIC_DATA_MEMBER)
	public:
		/* Static list head pointer */
		static ListEntry *pHeadEntry;
	private:
		/* Static list tail pointer */
		static ListEntry *pTailEntry;
		char *list_value;
		ListEntry *next_entry;
	public:
		ListEntry(char *);
		~ListEntry(void);
		ListEntry* NextEntry(void) const;
		void display(void) const;

		void AddEntry(ListEntry& le);
#endif	/*  STATIC_DATA_MEMBER  */
	};

#endif	/*  LIST_ENTRY_H  */