/**********************************************************************************************
 * File name		: Date.cpp
 * Description		: Implement the class "Date".
 * Creator			: XU ZAN
 * Creation date	: Wed.	Feb. 11, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **********************************************************************************************/


#include "Date.h"
#include <iostream>
#include <cstring>

	static char *mos[] = {"January",
						  "February",
						  "Marh",
						  "April",
						  "May",
						  "June",
						  "July",
						  "August",
						  "September",
						  "October",
						  "November",
						  "December"};

Date::Date(int y, int m, int d)
/* The constructor definition.
 */
{
	yr = y;
	mo = m;
	da = d;
	if (m != 0)
	{
		month = new char[std::strlen(mos[m-1])+1];
		std::strcpy(month, mos[m-1]);
	}
	else
	{
		month = 0;
	}
}

Date::Date(void)
{
	std::cout<<"Date constructor running."<<std::endl;
	yr = 0;
	mo = 0;
	da = 0;

	if (mo != 0)
	{
		month = new char[std::strlen(mos[mo-1])+1];
		std::strcpy(month, mos[mo-1]);
	}
	else
	{
		month = 0;
	}
}

Date::~Date(void)
{
	std::cout<<"Date destrutor is called."<<std::endl;
	delete [] month;
}

void Date::display(void) const
{
	if (month != 0)
	{
		std::cout<<month<<" "<<da<<", "<<yr<<std::endl;
	}
}
	
#if defined (RETURN_OBJECT_OVERLOADED_ASSIGNMENT_OPERATOR)
	void Date::operator=(const Date& dt)
	/* 重載賦值運算符函數
	 */
	{
		if (this != &dt)	// 比較賦值對象的地址this與被賦值對象的地址
		{					// 這個操作可以確保對象不會自己給自己賦值
			mo = dt.mo;
			da = dt.da;
			yr = dt.yr;

			delete [] month;	/* 先把Date的對象this(即源對象, 亦即被賦值的)的month指針所佔的内存
								 * 釋放掉, 返還給堆.
								 */
			if (dt.month != 0)
			{
				/* 接着, 如果對象dt(即賦值對象)的month指針被初始化過,那麽就用new運算符為目標對象重新分配内存,
				 * 並把dt的month字符串複製給接受方(即被賦值方).
				 */
				month = new char[std::strlen(dt.month)+1];
				std::strcpy(month, dt.month);
			}
			else
			{
				month = 0;
			}
		}
	}
#else
	Date& Date::operator=(const Date& dt)
	/* 讓重載賦值運算符函數返回Date對象的一個引用
	 */
	{
		if (this != &dt)
		{
			mo = dt.mo;
			da = dt.da;
			yr = dt.yr;

			delete [] month;
			if (dt.month != 0)
			{
				month = new char[std::strlen(dt.month)+1];
				std::strcpy(month, dt.month);
			}
			else
			{
				month = 0;
			}
		}
		return *this;	// this指針作爲返回值得用法
	}
#endif	/*  RETURN_OBJECT_OVERLOADED_ASSIGNMENT_OPERATOR  */

void Date::month_display(void)
{
	// These 2 statements do the same thing.
	std::cout<<mo;			// 隱式地使用了this指針(對象本身)
	std::cout<<this->mo;	// 顯式地使用了this指針
}