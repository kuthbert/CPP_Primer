/**********************************************************************************************************************
 * File name		: Asset.h
 * Description		: Create a new class "Asset", derived from base class "Property".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 31, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **********************************************************************************************************************/


#ifndef ASSET_H
#define ASSET_H

	#include "Property.h"

	class Asset : public Property
	{
	public:
		enum type
		{
			straight,
			sliding
		};
	private:
		int type;
	protected:
	public:
		Asset(int id, int ty);
		virtual ~Asset(void);

		virtual void Schedule(void);
	};

#endif	/*  ASSET_H  */