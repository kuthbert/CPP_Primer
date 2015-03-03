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
}

void TestCase4_StaticMemberAndChain(void)
{
	/* Read in some names */
	while (1)
	{
		std::cout<<"\nEnter a name ('end' when done): "<<std::endl;
		char name[25] = {0};
		std::cin>>name;

		if (0 == std::strncmp(name, "end", 3))
		{
			break;
		}
		/* Make a list entry of the name 
		 *
		 * 用new運算符來聲明一個新的表項, 但並沒有把new運算符返回的地址賦給某個指針.
		 * 這是因爲構造函數會把該表項的地址賦給前一個表項的next_entry指針,
		 * 所以程序沒有必要記下這個地址.
		 */
		new ListEntry(name);
	}
	/* Get a pointer to the head list entry */
	ListEntry *next = ListEntry::pHeadEntry;	// 直接獲取公有的靜態數據成員
	/* Display the names */
	while (next != NULL)
	{
		next->display();
		ListEntry *hold = next;
		next = next->NextEntry();
		delete hold;
	}
	return;
}