/**************************************************************************************************
 * File name		: HR_Management.h
 * Description		: Build and implement the business logic of HR_Management application.
 * Creator			: Frederick Hsu
 * Creation date	: Fri.	March 27, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **************************************************************************************************/


#ifndef HR_MANAGEMENT_H
#define HR_MANAGEMENT_H

	#include "Date.h"
	#include "Money.h"
	#include "Person.h"
	#include "Employee.h"
	#include "WagedEmployee.h"
	#include "SalariedEmployee.h"
	#include "Contractor.h"

	std::string ReadString(const std::string& prompt);

	Date ReadDate(const std::string& prompt);

	Money ReadMoney(const std::string& prompt);

	void PersonInput(Person* pPerson);

	void EmployeeInput(Employee* pEmployee);

	void WagedEmployeeInput(WagedEmployee* pWagedEmployee);

	void SalariedEmployeeInput(SalariedEmployee* pSalariedEmployee);

	void ContractorInput(Contractor* pContractor);

	void HR_Management_Business_Logic(void);

#endif	/*  HR_MANAGEMENT_H  */