/************************************************************************
 * File name		: ConstRef.h
 * Description		: 對於含有const和引用的數據成員該怎樣初始化，編寫構造函數。
 * Creator			: XU ZAN
 * Creation date	: Sun.	Nov. 30, 2014
 * Copyright(C)		2014	All rights reserved.
 *
 ************************************************************************/


#ifndef CONST_REF_H
#define CONST_REF_H

	class ConstRef
	{
	private:
		int i;
		const int ci;
		int &ri;
	public:
		/* Notice : 
		 * Blinding reference member 'ri' to stack allocated parameter 'ii'.
		 */
		ConstRef(int ii) : i(ii), ci(i), ri(ii) {}
	};


#endif	/*  CONST_REF_H  */