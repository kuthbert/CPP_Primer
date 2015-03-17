/***********************************************************************************************
 * File name		: friend_functions.h
 * Description		: Define and implement some friend functions.
 * Creator			: XU ZAN
 * Creation date	: Thur.	Feb. 12, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ***********************************************************************************************/


#ifndef FRIEND_FUNCTIONS_H
#define FRIEND_FUNCTIONS_H
	
	#include "Complex.h"

	Complex operator+(Complex& c1, Complex& c2);

	Complex operator-(Complex& c1, Complex& c2);
	
	Complex operator-(Complex& c);

	Complex operator*(Complex& c1, Complex& c2);

	Complex operator/(Complex& c1, Complex& c2);

#endif	/*  FRIEND_FUNCTIONS_H  */