/*******************************************************************************
 * File name		: DateTime.h
 * Description		: Define a new class "DateTime".
 * Creator			: Frederique Hsu
 * Creation date	: Tue.	March 10, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *******************************************************************************/

#ifndef DATETIME_H
#define DATETIME_H

	class Date;
	class Time;

	class DateTime
	{
	private:
		/* References to Date and Time.
		 */
		const Date& dt;
		const Time& tm;
	public:
		/* Constructor with reference initializers.
		 */
		DateTime(const Date& d, const Time& t);
		~DateTime(void);
		/*************************************************************
		 * 注意:
		 *
		 * 当类具有引用数据成员时, 如上有引用数据成员dt,  tm
		 * 一旦引用被实例化和初始化, 就无法修改它的值了.
		 * 所以无法为该类编写一个完全重载的赋值运算符函数.
		 * 
		 * DateTime& operator=(const DateTime&);
		 *************************************************************/
		void Display(void) const;
	};

#endif	/*  DATETIME_H  */