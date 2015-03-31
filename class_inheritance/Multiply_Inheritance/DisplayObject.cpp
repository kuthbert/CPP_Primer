/*********************************************************************************************
 * File name		: DisplayObject.h
 * Description		: Implement the root base class "DisplayObject".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 31, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *********************************************************************************************/

#include "DisplayObject.h"
#include <iostream>

DisplayObject::DisplayObject(void)
{
	tm = std::time(0);
}

DisplayObject::~DisplayObject(void)
{
	/* empty */
}

void DisplayObject::ReportTime(void)
{
	std::cout<<"Object constructed : "<<std::ctime(&tm)<<std::endl;
}