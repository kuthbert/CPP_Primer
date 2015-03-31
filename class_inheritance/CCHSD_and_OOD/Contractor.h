/***********************************************************************************************
 * File name		: Contractor.h
 * Description		: Define a class "Contractor".
 * Creator			: Frederick Hsu
 * Creation date	: Tue.	March 24, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 ***********************************************************************************************/


#ifndef CONTRACTOR_H
#define CONTRACTOR_H

	#include "Person.h"
	#include "Date.h"
	#include "Money.h"

	class Contractor : public Person
	{
	private:
		Date start_date;
		Date end_date;
		Money hourly_rate;
	protected:
	public:
		Contractor(const string& nm="") : Person(nm)
		{
			/* empty */
		}
		virtual ~Contractor(void);

		Date GetStartDate(void) const;
		Date GetEndDate(void) const;
		Money GetHourlyRate(void) const;

		void SetStartDate(Date dt);
		void SetEndDate(Date dt);
		void SetHourlyRate(Money rate);

		virtual void ReportCompensation(void);

		virtual void FormattedDisplay(ostream& os);

	};

	ostream& operator<<(ostream& os, Contractor& cntr);

#endif	/*  CONTRACTOR_H  */