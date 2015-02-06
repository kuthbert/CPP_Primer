/*********************************************************************************************************
 * File name		: Test_Date.cpp
 * Description		: Design test case to test the class "Date".
 * Crator			: XU ZAN
 * Creation date	: Fri. Feb. 06, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *********************************************************************************************************/


#include "Test_Date.h"
#include "Date.h"

#include <iostream>


/*******************************************************************************
 * 注意：
 *
 * 根據面向對象的約定，應該使用私有數據成員和公有成員函數.
 * 保證所有數據成員為私有.
 * 那麽，訪問類的用戶如何獲取對象中的數據的值啦？
 * 在設計類時，通過提供公有成員函數作爲公共接口來對數据的值進行讀寫.
 * 有些程序員稱這樣的函數為取值函數(getter)和賦值函數(setter).
 *
 * 要養成通過成員函數來訪問和改變類中數據的習慣，這有利於軟件的設計和維護.
 *
 *******************************************************************************/
void Use_PrivateDataMember(void)
/* 通過成員函數（取值和賦值）來使用數據成員
 */
{
	// Set up a Date object.
	Date dt(1989, 4, 1);
	// Use a member function to read the year value.
	std::cout<<"This year is "<<dt.getyear()<<std::endl;
	// Use a member function to change the year.
	dt.setyear(2015);
	std::cout<<"The new year is : "<<dt.getyear()<<std::endl;

	return;
}