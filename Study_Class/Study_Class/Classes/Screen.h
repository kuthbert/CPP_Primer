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
	#include <iostream>

	class Screen
	{
	public:
		typedef std::string::size_type index;
	
		/* Constructor overload
		 */
		Screen(void);
		Screen(index row, index col);
		
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
		
		/* display overloaded on whether the object is const or not
		 */
		Screen& display(std::ostream &os);
		const Screen& display(std::ostream &os) const;
		
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
		/* Changable data member
		 * It may be changed even in a const member.
		 */
		mutable size_t access_ctr;
		
		/* single function to do the work of displaying a screen,
		 * will be called by the 2 display operations.
		 */
		void do_display(std::ostream &os) const;
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