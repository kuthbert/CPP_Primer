/**********************************************************************************************
 * File name		: Date.cpp
 * Description		: Implement the class "Date".
 * Creator			: XU ZAN
 * Creation date	: Fri. Feb. 06, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **********************************************************************************************/


#include "Date.h"
#include <iostream>

static int iDaysOfEachMonth[] = {31,	// Jan.
								 28,	// Feb.
								 31,	// March
								 30,	// April
								 31,	// May
								 30,	// June
								 31,	// July
								 31,	// Aug.
								 30,	// Sept.
								 31,	// Oct.
								 30,	// Nov.
								 31		// Dec.
								};

Date::Date(int y, int m, int d)
{
	yr = y;
	mo = m;
	da = d;
}

Date::~Date(void)
{
	// To do
}
	
#if !defined (GETTER_CONST)
	int Date::getyear(void)
	/* 取值成員函數
	 * getter
	 */
#else	
	int Date::getyear(void) const
	/* 注意：
	 *
	 * getter函數聲明為常量型，這樣可以保證該成員函數不會修改調用它的對象。
	 * 通過加上const修飾， 可以使訪問對象數據的成員函數僅僅完成不會引起數據變動的那些操作，如
	 * 返回用戶需要的數據，顯示數據，等等。
	 *
	 * 而且，如果某個Date對象被聲明為常量的話，那麽該對象不得調用任何非常量型成員函數，而不論
	 * 這些函數是否真的試圖修改對象的數據。
	 * 只有把那些不會引起數據改變的函數聲明為常量型，才能允許常量對象調用這些函數。
	 */
#endif
	{
		return yr;
	}

void Date::setyear(int y)
/* 賦值成員函數
 * setter
 */
{
	yr = y;
}

void Date::display(void) const
{
	std::cout<<yr<<"/"<<mo<<"/"<<da<<std::endl;
	return;
}

Date::operator CustomDate(void) const
/* 轉化為CustomDate類對象返回。
 */
{
	CustomDate cd(yr, 0);
	int days = da;
	for (int i=0; i<mo-1; i++)
	{
		days += iDaysOfEachMonth[i];
	}
	cd.setday(days);
	return cd;
}