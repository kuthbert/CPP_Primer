/*******************************************************************************************
 * File name		: Names.h
 * Description		: Define a new class "Names", to study the new/delete operator overload.
 * Creator			: XU ZAN
 * Creation date	: Thur.	March 05, 2015
 * Copyright(C)		2015	All rights reserved.
 * 
 *******************************************************************************************/

#ifndef NAMES_H
#define NAMES_H

	#include <iostream>
	
	// #define NEW_DELETE_OPERATORS_OVERLOAD_INSIDE_CLASS
	#define NEW_DELETE_OPERATORS_ARRAY_OVERLOAD_INSIDE_CLASS

	const int MAX_NAMES = 5;

	class Names
	{
#if defined (NEW_DELETE_OPERATORS_OVERLOAD_INSIDE_CLASS)
	private:
		char name[25];
		static char Names::pool[];
		static bool Names::inuse[MAX_NAMES];
	public:
		Names(char *s);
		~Names(void);
		void* operator new(size_t) throw(std::bad_alloc);
		void  operator delete(void*) throw();
		void display(void) const;
#endif	/*  NEW_DELETE_OPERATORS_OVERLOAD_INSIDE_CLASS  */
#if defined (NEW_DELETE_OPERATORS_ARRAY_OVERLOAD_INSIDE_CLASS)
	private:
		char name[25];
		static char Names::pool[];
		static short int Names::inuse[MAX_NAMES];
	public:
		Names(char *s = NULL);
		~Names(void);
		void* operator new[] (size_t size) throw(std::bad_alloc);
		void operator delete[] (void* b) throw();
		void display(void) const;
#endif	/*  NEW_DELETE_OPERATORS_ARRAY_OVERLOAD_INSIDE_CLASS  */
	};

#endif	/*  NAMES_H  */