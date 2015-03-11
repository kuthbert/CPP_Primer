/*******************************************************************************
 * File name		: DateTime.cpp
 * Description		: Implement the new class "DateTime".
 * Creator			: Frederique Hsu
 * Creation date	: Tue.	March 10, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *******************************************************************************/


#include "DateTime.h"
#include "Date.h"
#include "Time.h"
#include <iostream>


DateTime::DateTime(const Date& d, const Time& t) : dt(d), tm(t)
/* 构造函数的参数初始化列表
 * 由冒号引出, 不能在函数体内来进行.
 * 
 * 使用构造函数的参数初始化列表对任何常量数据成员进行初始化时,
 * 和引用一样, 不能在构造函数内部为常量数据成员赋值.
 */
{
	/* empty */
}

DateTime::~DateTime(void)
{
	/* Insert your code here */
}

void DateTime::Display(void) const
{
	dt.display();
	std::cout<<" ";
	tm.Display();
}