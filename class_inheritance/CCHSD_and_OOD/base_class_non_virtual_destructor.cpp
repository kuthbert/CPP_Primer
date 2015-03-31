 /*****************************************************************************
 * File name		: base_class_non_virtual_destructor.cpp
 * Description		: 研究虛析構函數在基類和派生類中的調用先後順序.
 * Creator			: Frederick Hsu
 * Creation date	: Mon.	March 30, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *****************************************************************************/

#include "base_class_non_virtual_destructor.h"

void TestCase4_InvokeNonVirtualBaseClassDestructor(void)
{
#if defined (NON_VIRTUAL_BASE_CLASS_DESTRUCTOR)
	Shape *pShape = new Circle;
	std::cout<<"Demonstrate the invoking sequence of non-virtual base class destructor."<<std::endl;
	delete pShape;
#endif
}

void TestCase4_InvokeVirtualBaseClassDestructor(void)
{
#if !defined (NON_VIRTUAL_BASE_CLASS_DESTRUCTOR)
	Shape *pShape = new Circle;
	std::cout<<"Demonstrate the invoking sequence of virtual base class destructor."<<std::endl;
	delete pShape;
#endif
}