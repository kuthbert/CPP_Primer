/*************************************************************************************
 * File name		: AValue.h
 * Description		: Define a new class "AValue".
 * Creator			: Frederique Hsu
 * Creation date	: Wed.	March 11, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *************************************************************************************/


#ifndef AVALUE_H
#define AVALUE_H

	class AValue
	{
	private:
		int val;
		mutable int rptct;	// Number of times the object is reported.
	public:
		AValue(int v);
		~AValue(void);
		void report(void) const;
	};

#endif	/*  AVALUE_H  */