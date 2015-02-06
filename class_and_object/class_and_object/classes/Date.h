/**********************************************************************************************
 * File name		: Date.h
 * Description		: Define a class "Date".
 * Creator			: XU ZAN
 * Creation date	: Fri. Feb. 06, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **********************************************************************************************/


#ifndef DATE_H
#define DATE_H

	#define GETTER_CONST



	class Date;

	class Date
	{ 
	private:
		int mo;
		int da;
		int yr;
	public:
		Date(int y, int m, int d);
		~Date(void);
		/* 
		 * A member function to return the year
		 */
	#if !defined (GETTER_CONST)
		int getyear(void);
	#else	
		int getyear(void) const
		/* 注意：
		 *
		 * getter函數聲明為常量型，這樣可以保證該成員函數不會修改調用它的對象。
		 * 通過加上const修飾， 可以使訪問對象數據的成員函數僅僅完成不會引起數據變動的那些操作，如
		 * 返回用戶需要的數據，顯示數據，等等。
		 *
		 * 而且，如果某個Date對象被聲明為常量的話，那麽該對象不得調用任何非常量型成員函數，而不論
		 * 這些函數是否真的試圖修改對象的數據。
		 * 只有把那些不會引起數據改變的函數聲明為常量型，才能允許常量對象調用這些函數。
		 */
		{
			return yr;
		}
	#endif
		/*
		 * A memmber function to set the year
		 */
		void setyear(int y);
	};

#endif	/*  DATE_H  */