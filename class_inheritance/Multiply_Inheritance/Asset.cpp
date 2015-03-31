/**********************************************************************************************************************
 * File name		: Asset.cpp
 * Description		: Implement the class "Asset", derived from base class "Property".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 31, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **********************************************************************************************************************/


#include "Asset.h"

Asset::Asset(int id, int ty) : Property(id), type(ty)
{
	/* empty */
}

Asset::~Asset(void)
{
	/* empty */
}

void Asset::Schedule(void)
{
	std::cout<<"Schedule for "<<GetName()<<std::endl;
}