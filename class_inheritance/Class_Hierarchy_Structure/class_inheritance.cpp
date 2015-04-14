/*********************************************************************************************
 * File name		: class_inheritance.cpp
 * Description		: Construct and test the mechanism of class inheritance in C++ OOP.
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 17, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *********************************************************************************************/


#include "class_inheritance.h"
#include "derived/Test_SpecialDate.h"
#include "derived/CustomDate.h"
#include "derived/SpecialDate.h"
#include "derived/Test_SpecialCustomDate.h"

#include <iostream>

void Test_Class_Inheritance(void)
{
	// Execute_TestCase4_DerivedClassObject2AccessBaseClass();

	// TestCase4_MultiDerivedClasses();

	Execute_TestCase4_MultiHierarchyClassInheritance();
}

void Execute_TestCase4_DerivedClassObject2AccessBaseClass(void)
{
	TestCase4_DerivedClassObject2AccessBaseClass();
	return;
}

void TestCase4_MultiDerivedClasses(void)
{
	/* Process a Date */
	Date dt(1961, 4, 6);
	std::cout<<"Alan : ";
	dt.Display();

	/* Process a CustomDate */
	CustomDate csdt(1962, 285);
	std::cout<<"Sharon : ";
	csdt.Display();
	std::cout<<"(";
	csdt.Date::Display();
	std::cout<<")"<<std::endl;

	/* Process a SpecialDate */
	SpecialDate spdt(1965, 4, 28);
	std::cout<<"Wendy : ";
	spdt.Display();

	return;
}

void Execute_TestCase4_MultiHierarchyClassInheritance(void)
{
	TestCase4_MultiHierarchyClassInheritance();
}