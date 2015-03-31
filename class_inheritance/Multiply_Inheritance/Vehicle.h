/**********************************************************************************************************************
 * File name		: Vehicle.h
 * Description		: Create a new class "Vehicle", derived from root base class "DisplayObject".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 31, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **********************************************************************************************************************/


#ifndef VEHICLE_H
#define VEHICLE_H

	#include "DisplayObject.h"
	#include <string>

	class Vehicle : public virtual DisplayObject
	{
	private:
		int year;
		std::string model;
	protected:
	public:
		Vehicle(int yr, const std::string& md);
		virtual ~Vehicle(void);

		void MaintenanceSchedule(void);
	};

#endif	/*  VEHICLE_H  */