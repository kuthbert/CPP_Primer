/***********************************************************************************************
 * File name		: Person.cpp
 * Description		: Implement a class "Person".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 24, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ***********************************************************************************************/


#include "Person.h"

Person::Person(const string& nm) : name(nm), 
								   gender(unknown), 
								   mstatus(single)
{
	/* empty */
}

Person::~Person(void)
{
	/* empty */
}

void Person::SetName(const string& nm)
{
	name = nm;
}

void Person::SetAddress(const string& addr)
{
	address = addr;
}

void Person::SetPhone(const std::string& mobile)
{
	phone = mobile;
}

void Person::SetSsn(SSN sn)
{
	ssn = sn;
}

void Person::SetDoB(const Date& birth_date)
{
	dob = birth_date;
}

void Person::SetGender(Sex eGender)
{
	gender = eGender;
}

void Person::SetMaritalStatus(MaritalStatus mst)
{
	mstatus = mst;
}

const string& Person::GetName(void) const
{
	return name;
}

const string& Person::GetAddress(void) const
{
	return address;
}

const string& Person::GetPhone(void) const
{
	return phone;
}

SSN Person::GetSsn(void) const
{
	return ssn;
}

const Date& Person::GetDoB(void) const
{
	return dob;
}

Person::Sex Person::GetGender(void) const
{
	return gender;
}

Person::MaritalStatus Person::GetMaritalStatus(void) const
{
	return mstatus;
}

void Person::FormattedDisplay(ostream& os)
{
	os << "This guy                                   " << endl;
	os << "===========================================" << endl;
	os << "Name                      : " << name		<< endl;
	os << "Address                   : " << address		<< endl;
	os << "Phone                     : " << phone       << endl;
	os << "SSN                       : " << ssn			<< endl;
	os << "Date of birth             : " << dob			<< endl;
	os << "Gender                    : ";
	switch(gender)
	{
	case Person::male:				  os << "Male"		<< endl;	break;
	case Person::female:			  os << "Female"	<< endl;	break;
	default:						  os << "Unknown"	<< endl;	break;
	}
	os << "Marital status            : ";
	// switch (mstatus)
	switch (GetMaritalStatus())
	{
	case Person::single:			  os << "Single"	<< endl;	break;
	case Person::married:			  os << "Married"	<< endl;	break;
	case Person::divorced:			  os << "Divorced"	<< endl;	break;
	case Person::widowed:			  os << "Widowed"	<< endl;	break;
	default:						  os << "Unknown"	<< endl;	break;
	}

	os << "===========================================" << endl;
}

ostream& operator<<(ostream& os, const Person& oPeople)
{
	os << oPeople.GetName()				<< endl
	   << oPeople.GetAddress()			<< endl
	   << oPeople.GetPhone()			<< endl
	   << oPeople.GetSsn()				<< endl
	   << oPeople.GetDoB()				<< endl
	   << oPeople.GetGender()			<< endl
	   << oPeople.GetMaritalStatus()	<< endl;
	return os;
}