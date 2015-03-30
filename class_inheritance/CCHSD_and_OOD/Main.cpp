/****************************************************************************************************************
 * Project name		: CCHSD_and_OOD
 * Description		: 学习研究 "复杂的类层次结构设计" 与 "纯面向对象的设计".
 *					  Complicated Class Hierarchy Structure Design  (abbr. CCHSD)  and 
 *					  Object-oriented design (abbr. OOD)
 * ==============================================================================================================
 * File name		: Main.cpp
 * Description		: This file will implement the main() portal function for "CCHSD_and_OOP.vcproj" project.
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 24, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ****************************************************************************************************************/


#include <iostream>
#include "Unit_Test.h"
#include "HR_Management.h"

int main(int argc, char *argv[])
{
	Execute_Unit_Test_Cases();

	HR_Management_Business_Logic();

/******************************/
	std::exit(0);
}