/****************************************************************************
 * File name		: Record.cpp
 * Description		: Implement the class "Record".
 * Creator			: XU ZAN
 * Creation date	: Thur.		Nov. 27, 2014
 * Copyright(C)		2014	All rights reserved.
 *
 ****************************************************************************/


#include "Record.h"


Record::Record(void)
{
	byte_count = 0;
}

Record::Record(size s)
{
	byte_count = s;
}

Record::Record(std::string s)
{
	name = s;
	byte_count = 0;
}

Record::size Record::get_count(void) const
{
	return byte_count;
}

std::string Record::get_name(void) const
{
	return name;
}