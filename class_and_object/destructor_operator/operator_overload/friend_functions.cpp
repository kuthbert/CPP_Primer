/***********************************************************************************************
 * File name		: friend_functions.cpp
 * Description		: Define and implement some friend functions.
 * Creator			: XU ZAN
 * Creation date	: Thur.	Feb. 12, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ***********************************************************************************************/

#include "friend_functions.h"

Complex operator+(Complex& c1, Complex& c2)
{
	double r_part, i_part;
	r_part = c1.real + c2.real;
	i_part = c1.imag + c2.imag;
	return Complex(r_part, i_part);
}

Complex operator-(Complex& c1, Complex& c2)
{
	double r_part, i_part;
	r_part = c1.real - c2.real;
	i_part = c1.imag - c2.imag;

	return Complex(r_part, i_part);
}

Complex operator-(Complex& c)
{
	return Complex((-1)*c.real, (-1)*c.imag);
}

Complex operator*(Complex& c1, Complex& c2)
{
	double r_part, i_part;

	r_part = (c1.real)*(c2.real) - (c1.imag)*(c2.imag);
	i_part = (c1.real)*(c2.imag) + (c2.real)*(c1.imag);

	return Complex(r_part, i_part);
}

Complex operator/(Complex& c1, Complex& c2)
{
	double r_part, i_part;

	r_part = ((c1.real)*(c2.real)+(c1.imag)*(c2.imag))/((c2.real)*(c2.real)+(c2.imag)*(c2.imag));
	i_part = ((c2.real)*(c1.imag)-(c1.real)*(c2.imag))/((c2.real)*(c2.real)+(c2.imag)*(c2.imag));

	return Complex(r_part, i_part);
}