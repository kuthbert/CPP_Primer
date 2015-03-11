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
#if defined (STATIC_DATA_MEMBER)
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
#endif	/*  STATIC_DATA_MEMBER  */
}

void TestCase4_StaticMemberFunction(void)
{
#if defined (STATIC_MEMBER_FUNCTION)
	// Read in some names
	while (1)
	{
		std::cout<<"\nEnter a name ('end' when done): "<<std::endl;
		char name[25] = {0};
		std::cin>>name;
		if (!std::strncmp(name, "end", 3))
		{
			break;
		}
		/* Make a list entry of the names */
		new ListEntry(name);
	}
	/* Get a pointer to the head list entry. 
	 *
	 * 如果一個靜態成員是公有的,那麽在整個程序中都可以訪問它.
	 * 可以在任何地方調用公有靜態成員函數,而且不需要有類的實例存在.
	 * 但公有靜態成員函數不完全是全局的,它僅僅存在于定義該類的作用域中.
	 * 在這個作用域中,只要在函數名前加上類名和域解析運算符::, 就可以調用該函數了.
	 *
	 */
	ListEntry *next = ListEntry::HeadEntry();	// 調用的是靜態成員函數.
	/* Display the names list */
	while (next != NULL)
	{
		next->display();
		ListEntry *hold = next;
		next = next->NextEntry();
		delete hold;
	}
	return;
#endif	/*  STATIC_MEMBER_FUNCTION  */
}