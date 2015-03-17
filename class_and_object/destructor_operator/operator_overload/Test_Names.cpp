/********************************************************************************************
 * File name		: Test_Names.cpp
 * Description		: Design some test cases to verify the "Names" class.
 * Creator			: XU ZAN
 * Creation date	: Fri.	March 06, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ********************************************************************************************/

#include "Test_Names.h"
#include "Names.h"

void TestCase4_NewDeleteOperatorsOverloadInsideClass(void)
{
#if defined (NEW_DELETE_OPERATORS_OVERLOAD_INSIDE_CLASS)
	Names* nm[MAX_NAMES];
	int i = 0;
	for (i=0; i<MAX_NAMES; i++)
	{
		std::cout<<"Enter name #"<<i+1<<std::endl;
		char name[25];
		std::cin>>name;
		nm[i] = new Names(name);
	}

	for (i=0; i<MAX_NAMES; i++)
	{
		nm[i]->display();
		delete nm[i];
	}
	return;
#endif	/*  NEW_DELETE_OPERATORS_OVERLOAD_INSIDE_CLASS  */
#if defined (NEW_DELETE_OPERATORS_ARRAY_OVERLOAD_INSIDE_CLASS)
	Names *np = new Names[MAX_NAMES+1];
	int i = 0;
	for (i=0; i<MAX_NAMES; i++)
	{
		std::cout<<std::endl<<"Enter name #"<<i+1<<": ";
		char name[25] = {0};
		std::cin>>name;
		*(np+i) = name;
	}
	for (i=0; i<MAX_NAMES; i++)
	{
		(np+i)->display();
	}
	delete [] np;
	return;
#endif	/*  NEW_DELETE_OPERATORS_ARRAY_OVERLOAD_INSIDE_CLASS  */
}