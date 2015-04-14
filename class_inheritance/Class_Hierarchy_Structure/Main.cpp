/**********************************************************************************************************
 * Project			: Class_Hierarchy_Structure
 * Description		: 學習研究 C++ object-oriented programming 中的類繼承原理, 基類與派生類的層級結構關係.
 * ========================================================================================================
 * File name		: Main.cpp
 * Description		: This file will implement the main() entry function for current project.
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 17, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **********************************************************************************************************/

#include <iostream>
#include "Test.h"
#include "Test_classes.h"
#include "class_inheritance.h"




int main(int argc, char *argv[])
{
	Execute_General_Test_Cases();

	Perform_UnitTestCases();

	Test_Class_Inheritance();
/******************************/
	std::exit(0);
}