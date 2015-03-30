/***********************************************************************************************
 * File name		: Person.h
 * Description		: Define a class "Person".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 24, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ***********************************************************************************************/


#ifndef PERSON_H
#define PERSON_H

	#include <string>
	#include "SSN.h"
	#include "Date.h"

	using namespace std;

	class Person
	{
	public:
		enum Sex
		{
			unknown,
			male, 
			female
		};
		enum MaritalStatus
		{
			single,
			married,
			divorced,
			widowed
		};
	private:

	protected:
		string name;
		string address;
		string phone;
		SSN ssn;
		Date dob;	// Date of birth
		Sex gender;
		MaritalStatus mstatus;
	public:
		Person(const string& nm="");
		virtual ~Person(void);

		/*Setter functions */
		void SetName(const string& nm);
		void SetAddress(const string& addr);
		void SetPhone(const string& mobile);
		void SetSsn(SSN sn);
		void SetDoB(const Date& birth_date);
		void SetGender(Sex eGender);
		void SetMaritalStatus(MaritalStatus mst);

		/* Getter functions */
		const string& GetName(void) const;
		const string& GetAddress(void) const;
		const string& GetPhone(void) const;
		SSN GetSsn(void) const;
		const Date& GetDoB(void) const;
		Sex GetGender(void) const;
		MaritalStatus GetMaritalStatus(void) const;

		virtual void FormattedDisplay(ostream& os) = 0;		// Pure virtual function
	};

	ostream& operator<<(ostream& os, const Person& oPeople);

#endif	/*  PERSON_H  */