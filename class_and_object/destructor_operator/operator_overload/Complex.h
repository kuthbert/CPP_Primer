/*********************************************************************************************
 * File name		: Complex.h
 * Description		: Define a complex number class.
 * Creator			: XU ZAN
 * Creation date	: Thur.	Feb. 12, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *********************************************************************************************/

#ifndef COMPLEX_H
#define COMPLEX_H

	class Complex
	{
	public:
		Complex(void);
		Complex(double r, double i);
		~Complex(void);

		friend Complex operator+(Complex& c1, Complex& c2);
		friend Complex operator-(Complex& c1, Complex& c2);
		friend Complex operator-(Complex& c);
		friend Complex operator*(Complex& c1, Complex& c2);
		friend Complex operator/(Complex& c1, Complex& c2);

		void print(void);
	private:
		double real;
		double imag;
	};

#endif	/*  COMPLEX_H  */