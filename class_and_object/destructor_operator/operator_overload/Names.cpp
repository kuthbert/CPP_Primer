/*******************************************************************************************
 * File name		: Names.cpp
 * Description		: Implement the class "Names", to study the new/delete operator overload.
 * Creator			: XU ZAN
 * Creation date	: Thur.	March 05, 2015
 * Copyright(C)		2015	All rights reserved.
 * 
 *******************************************************************************************/


#include "Names.h"

#if defined (NEW_DELETE_OPERATORS_OVERLOAD_INSIDE_CLASS)
	/*
	 * Simple memory pool to manage the fixed number of Names.
	 */
	char Names::pool[MAX_NAMES * sizeof(Names)];
	bool Names::inuse[MAX_NAMES];

	Names::Names(char *s)
	{
		std::strncpy(name, s, sizeof(name));
	}

	Names::~Names(void)
	{
		/* Insert your code here */
	}

	void* Names::operator new(size_t) throw(std::bad_alloc)
	{
		for (int p=0; p<MAX_NAMES; p++)
		{
			if (!inuse[p])
			{
				inuse[p] = true;
				return pool + p*sizeof(Names);
			}
		}
		throw std::bad_alloc();
	}

	void  Names::operator delete(void* p) throw()
	{
		if (p != 0)
		{
			inuse[((char *)p-pool)/(sizeof(Names))] = false;
		}
	}

	void Names::display(void) const
	{
		std::cout<<name<<std::endl;
	}
#endif	/*  NEW_DELETE_OPERATORS_OVERLOAD_INSIDE_CLASS  */

#if defined (NEW_DELETE_OPERATORS_ARRAY_OVERLOAD_INSIDE_CLASS)
	char Names::pool[MAX_NAMES * sizeof(Names)];
	short int Names::inuse[MAX_NAMES];

	Names::Names(char *s)
	{
		if (s)
		{
			std::strncpy(name, s, sizeof(name));
		}
	}

	Names::~Names(void)
	{
		/* Insert your code here */
	}

	void* Names::operator new[] (size_t size) throw(std::bad_alloc)
	/* Overloaded new[] operator for the Names class.
	 */
	{
		int class_size = sizeof(Names), elements = size / class_size;
		for (int p=0; p<MAX_NAMES; p++)
		{
			if (!inuse[p])
			{
				int i;
				for (i=0; (i<elements) && (p+i<MAX_NAMES); i++)
				{
					if (inuse[p+i])
					{
						break;
					}
				}
				if ((i == elements) && (p+i<MAX_NAMES))
				{
					for (i=0; i<elements; i++)
					{
						inuse[p+i] = elements;
					}
					return pool+p*sizeof(Names);
				}
			}
		}
		throw std::bad_alloc();
	}

	void Names::operator delete[] (void* b) throw()
	{
		if (b != NULL)
		{
			int p = ((char *)b-pool)/(sizeof(Names));
			int elements = inuse[p];
			for (int i=0; i<elements; i++)
			{
				inuse[p+i] = 0;
			}
		}
	}

	void Names::display(void) const
	{
		std::cout<<name<<std::endl;
	}
#endif	/*  NEW_DELETE_OPERATORS_ARRAY_OVERLOAD_INSIDE_CLASS  */