/**********************************************************************************************************************
 * File name		: Vehicle.cpp
 * Description		: Implement the derived class "Vehicle".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 31, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **********************************************************************************************************************/


#include "Vehicle.h"
#include <iostream>


Vehicle::Vehicle(int yr, const std::string& md) : year(yr), model(md)
{
	/* empty */
}

Vehicle::~Vehicle(void)
{
	/* empty */
}

void Vehicle::MaintenanceSchedule(void)
{
	std::cout<<"Maintenance Schedule"<<std::endl;
	std::cout<<year<<",  "<<model<<std::endl;
}