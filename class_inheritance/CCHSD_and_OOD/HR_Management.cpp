/**************************************************************************************************
 * File name		: HR_Management.cpp
 * Description		: Build and implement the business logic of HR_Management application.
 * Creator			: Frederick Hsu
 * Creation date	: Fri.	March 27, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 **************************************************************************************************/


#include "HR_Management.h"

std::string ReadString(const std::string& prompt)
{
	std::string str;
	std::cout<<prompt<<" : ";
	std::getline(std::cin, str);
	return str;
}

Date ReadDate(const std::string& prompt)
{
	Date dt;
	cout<<prompt<<" (YYYY MM DD) : ";
	cin>>dt;
	return dt;
}

Money ReadMoney(const std::string& prompt)
{
	double dMoney = 0.00;
	cout<<prompt<<" : ";
	cin>>dMoney;

	return dMoney;
}

void PersonInput(Person* pPerson)
{
	static string str;
	getline(cin, str);	// Flush the input buffer
	pPerson->SetName(ReadString("Name"));
	pPerson->SetAddress(ReadString("Address"));
	pPerson->SetPhone(ReadString("Phone"));
	pPerson->SetDoB(ReadDate("Date of birth"));

	long int ssn;
	cout<<"SSN : ";
	cin>>ssn;
	pPerson->SetSsn(SSN(ssn));

	char cGender = 0;
	do
	{
		cout<<"Gender (M/F) : ";
		cin>>cGender;
	}
	while ( (cGender != 'M') && (cGender != 'm') && (cGender != 'F') && (cGender != 'f') );
	pPerson->SetGender(((cGender=='M')||(cGender=='m'))?(Person::male):(Person::female));
	return;
}

void EmployeeInput(Employee* pEmployee)
{
	pEmployee->SetDateHired(ReadDate("Date hired"));
	return;
}

void WagedEmployeeInput(WagedEmployee* pWagedEmployee)
{
	pWagedEmployee->SetHourlyWage(ReadMoney("Hourly wage"));
	return;
}

void SalariedEmployeeInput(SalariedEmployee* pSalariedEmployee)
{
	pSalariedEmployee->SetSalary(ReadMoney("Salary"));
	return;
}

void ContractorInput(Contractor* pContractor)
{
	pContractor->SetStartDate(ReadDate("Start date"));
	pContractor->SetEndDate(ReadDate("End date"));
	pContractor->SetHourlyRate(ReadMoney("Hourly rate"));
	return;
}

void HR_Management_Business_Logic(void)
{
	Person *pPerson = NULL;
	do
	{
		cout<<endl
			<<"------------------------"<<endl
			<<"1 --> Salaried employee "<<endl
			<<"2 --> Waged employee    "<<endl
			<<"3 --> Contractor        "<<endl
			<<"0 --> Exit              "<<endl
			<<"Enter your selection : ";
		int selector;
		cin>>selector;
		if (selector == 0)
			break;

		switch (selector)
		{
		case 1:
			pPerson = new SalariedEmployee;
			PersonInput(pPerson);
			EmployeeInput((Employee*)pPerson);
			SalariedEmployeeInput((SalariedEmployee*)pPerson);
			break;
		case 2:
			pPerson = new WagedEmployee;
			PersonInput(pPerson);
			EmployeeInput((Employee*)pPerson);
			WagedEmployeeInput((WagedEmployee*)pPerson);
			break;
		case 3:
			pPerson = new Contractor;
			PersonInput(pPerson);
			ContractorInput((Contractor*)pPerson);
			break;
		default:
			cout<<"\aIncorrect entry."<<endl;
			break;
		}
		if (pPerson != 0)
		{
			pPerson->FormattedDisplay(cout);
			delete pPerson;
		}
	}
	while (true);

	return;
}