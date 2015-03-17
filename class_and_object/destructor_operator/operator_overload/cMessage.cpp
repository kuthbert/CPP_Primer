/***********************************************************************************
 * File name		: cMessage.cpp
 * Description		: Implement the class "cMessage".
 * Creator			: XU ZAN
 * Creation date	: Thur.	Feb. 12, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ***********************************************************************************/


#include "cMessage.h"
#include <iostream>
#include <string.h>


cMessage::cMessage(void)
{
	buffer = new char('\0');
}


cMessage::~cMessage(void)
{
	delete [] buffer;
}


void cMessage::display(void) const
{
	std::cout<<buffer<<std::endl;
}


void cMessage::set(char *string)
{
	delete [] buffer;
	buffer = new char[std::strlen(string)+1];
	std::strcpy(buffer, string);
}


void cMessage::operator=(const cMessage& msg)
{
	delete [] buffer;
	buffer = new char[std::strlen(msg.buffer)+1];
	std::strcpy(buffer, msg.buffer);

	return;
}