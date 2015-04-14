/***********************************************************************************
 * File name		: cMessage.h
 * Description		: Define a new class "cMessage".
 * Creator			: XU ZAN
 * Creation date	: Thur.	Feb. 12, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ***********************************************************************************/


#ifndef CMESSAGE_H
#define CMESSAGE_H

	class cMessage
	{
	public:
		cMessage(void);
		~cMessage(void);
		void display(void) const;
		void set(char *string);
		void operator=(const cMessage& msg);
	private:
		char *buffer;
	};

#endif	/*  CMESSAGE_H  */