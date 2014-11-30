/************************************************************************
 * File name		: ConstRef.cpp
 * Description		: 對於含有const和引用的數據成員該怎樣初始化，編寫構造函數。
 * Creator			: XU ZAN
 * Creation date	: Sun.	Nov. 30, 2014
 * Copyright(C)		2014	All rights reserved.
 *
 ************************************************************************/


#include "ConstRef.h"


/* NOTICE : 
 * Constructor which contains the constant member or reference member
 * must exlicitly initialzie the const member and reference member.
 *
ConstRef::ConstRef(int ii)
{
	i = ii;
	ci = ii;	// error.  Read-only variable is not assignable
	ri = i;
}
 */