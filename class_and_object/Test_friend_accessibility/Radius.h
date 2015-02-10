/******************************************************************************************
 * File name		: Radius.h
 * Description		: Define a class "Radius".
 * Creator			: XU ZAN
 * Creation date	: Tue.	Feb. 10, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ******************************************************************************************/

#ifndef RADIUS_H
#define RADIUS_H


	class Circle;	

	class Radius
	{
	public:
		Radius(int x);
		~Radius(void);

		friend class Circle;				// 声明Circle为Radius的友元类
		friend void Show_r(Radius &n);		// 声明Show_r为友元函数
	private:
		int r;
	};

	void Show_r(Radius &n);

#endif	/*  RADIUS_H  */