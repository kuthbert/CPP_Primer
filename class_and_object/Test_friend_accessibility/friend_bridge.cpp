/****************************************************************************************
 * File name		: friend_bridge.cpp
 * Description		: Use common friend function to bridge between 2 classes.
 * Creator			: XU ZAN
 * Creation date	: Tue.	Febb. 10, 2015
 * Coppyright(C)	2015	All rights reserved.
 *
 ****************************************************************************************/


#include "friend_bridge.h"
#include <iostream>

using namespace std;

bool is_equal(const Screen& srn, const Window& wnd)
{
	bool bResult = true;

	cout<<"The screen's size is "<<srn.height<<"*"<<srn.width<<endl;
	cout<<"The window's coordinate is : x="<<wnd.iCoordinate_X<<", y="<<wnd.iCoordinate_Y<<endl;

	return bResult;
}

void DisplayDateTime(const Date& dt, const Time& tm)
{
	cout<<dt.yr<<"/"<<dt.mo<<"/"<<dt.da;
	cout<<" ";
	cout<<tm.hr<<":"<<tm.min<<":"<<tm.sec<<endl;
	return;
}