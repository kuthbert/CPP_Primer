/*****************************************************************************
 * File name		: base_class_non_virtual_destructor.h
 * Description		: 研究虛析構函數在基類和派生類中的調用先後順序.
 * Creator			: Frederick Hsu
 * Creation date	: Mon.	March 30, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *****************************************************************************/

#ifndef BASE_CLASS_NON_VIRTUAL_DESTRUCTOR_H
#define BASE_CLASS_NON_VIRTUAL_DESTRUCTOR_H

	#include <iostream>

	// #define NON_VIRTUAL_BASE_CLASS_DESTRUCTOR

	class Shape
	{
	private:
	protected:
	public:
		Shape(void)
		{
			std::cout<<"Executing Shape constructor"<<std::endl;
		}
#if defined (NON_VIRTUAL_BASE_CLASS_DESTRUCTOR)
		~Shape(void)
#else
		virtual ~Shape(void)
#endif
		{
			std::cout<<"Executing Shape destructor"<<std::endl;
		}
	};

	class Circle : public Shape
	{
	private:
	protected:
	public:
		Circle(void)
		{
			std::cout<<"Executing Circle constructor"<<std::endl;
		}
		~Circle(void)
		{
			std::cout<<"Executing Circle destructor"<<std::endl;
		}
	};

	void TestCase4_InvokeNonVirtualBaseClassDestructor(void);
	void TestCase4_InvokeVirtualBaseClassDestructor(void);

#endif	/*  BASE_CLASS_NON_VIRTUAL_DESTRUCTOR_H  */