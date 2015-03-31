/*********************************************************************************************
 * File name		: DisplayObject.h
 * Description		: Create a root base class "DisplayObject".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 31, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *********************************************************************************************/


#ifndef DISPLAYOBJECT_H
#define DISPLAYOBJECT_H

	#include <ctime>

	class DisplayObject
	{
	private:
		std::time_t tm;
	protected:
		DisplayObject(void);
		virtual ~DisplayObject(void);
	public:
		void ReportTime(void);
	};

#endif	/*  DISPLAYOBJECT_H  */