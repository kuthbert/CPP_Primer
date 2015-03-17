/*******************************************************************************
 * File name		: String.h
 * Description		: Define a new class "String".
 * Creator			: Frederick Hsu
 * Creation date	: Mon.	March 16, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *******************************************************************************/


#ifndef STRING_H
#define STRING_H

	class String
	{
	private:
		char *sptr;
	public:
		String(char *s = 0);
		~String(void);

		void display(void);
		int length(void) const;

		char& operator[](int n);
		const char& operator[](int n) const;
	};

#endif	/*  STRING_H  */