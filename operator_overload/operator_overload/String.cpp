/*******************************************************************************
 * File name		: String.cpp
 * Description		: Implement a new class "String".
 * Creator			: Frederick Hsu
 * Creation date	: Mon.	March 16, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *******************************************************************************/


#include "String.h"
#include <cstring>
#include <iostream>

String::String(char *s)
{
	if (s)
	{
		sptr = new char[std::strlen(s)+1];
		std::strcpy(sptr, s);
	}
	else
	{
		sptr = NULL;
	}
}

String::~String(void)
{
	delete sptr;
}

void String::display(void)
{
	std::cout<<sptr<<std::endl;
}

int String::length(void) const
{
	return std::strlen(sptr);
}

char& String::operator[](int n)
{
	return *(sptr+n);
}

const char& String::operator[](int n) const
{
	return *(sptr+n);
}