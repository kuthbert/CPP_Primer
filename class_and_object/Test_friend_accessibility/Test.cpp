/*********************************************************************************************
 * File name		: Test.cpp
 * Description		: Perform all test cases in this file.
 * Creator			: XU ZAN
 * Creation date	: Mon. Feb. 09, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *********************************************************************************************/

#include "Test.h"
#include "Radius.h"
#include "Circle.h"
#include "friend_bridge.h"

#include <iostream>
using namespace std;

void Friend_Accessibility(void)
{
	Radius objRadius(9);
	Circle objCircle;

	Show_r(objRadius);
	cout<<"The area is "<<objCircle.area(objRadius)<<endl;

	return;
}

void Perform_General_Test_Cases(void)
{
	Friend_Accessibility();
	Test_CommonFriendBridgeFunction();
}

void Test_CommonFriendBridgeFunction(void)
{
	cout<<"The common friend function can bridge with 2 different calsses."<<endl;
	cout<<"Bridge class Screen and class Window :"<<endl;
	Screen srn(10, 20);
	Window wnd(2, 5);
	is_equal(srn, wnd);

	cout<<"Bridge class Date and class Time :"<<endl;
	Date dt(2015, 2, 10);
	Time tm(19, 32, 50);
	DisplayDateTime(dt, tm);
}