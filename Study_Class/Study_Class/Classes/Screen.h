/*******************************************************************************************
 * File name		: Screen.h
 * Description		: Define the class "Screen".
 * Creator			: XU ZAN
 * Creation date	: Thur.	Nov. 27, 2014
 * Copyright(C)		2014	All rights reserved.
 *
 *******************************************************************************************/

#ifndef SCREEN_H
#define SCREEN_H

	#include <string>

	class Screen
	{
	public:
		/* interface member function
		 */
		Screen(void);

		typedef std::string::size_type index;
		
		/* Member function overload
		 */
		
		char get(void) const	// Implicitly inline when defined inside the class declaration
		{
			return contents[cursor];
		}
		
		/* Explicitly declared as inline; will be defined outside the class declaration.
		 */
		inline char get(index ht, index wd) const
		{
			index row = ht*width;
			return contents[row + wd];
		}
		
		
		/* inline not specified in class declaration, but can be defined in later.
		 */
		index get_cursor(void) const;
		
		/* 返回对调用该函数的对象的引用
		 * 此时需要使用this指针。
		 */
		Screen& move(index r, index c);
		Screen& set(char);
		Screen& set(index, index, char);
		
	private:
		std::string contents;		
		#if 0
			std::string::size_type cursor;
			std::string::size_type height;
			std::string::size_type width;	
		#else
			index cursor;
			index height;
			index width;
		#endif
	};


	class LinkScreen
	{
		/* Define a link list of class "LinkScreen"
		 * The member list contains the pointer member of class "LinkScreen"-self.
		 */
		Screen window;
		LinkScreen *prev;
		LinkScreen *next;
	};

#endif	/*  SCREEN_H  */