/******************************************************************************************
 * File name		: Radius.cpp
 * Description		: Implement the class "Radius".
 * Creator			: XU ZAN
 * Creation date	: Tue.	Feb. 10, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ******************************************************************************************/

#include "Radius.h"
#include <iostream>

using namespace std;

Radius::Radius(int x)
{
	r = x;
}

Radius::~Radius(void)
{
	// To do
}

void Show_r(Radius &n)
{
	cout<<"The radius of a circle is "<<n.r<<endl;	// 调用Radius对象的私有数据成员
}