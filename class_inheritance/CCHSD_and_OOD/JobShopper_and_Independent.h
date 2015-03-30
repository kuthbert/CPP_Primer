/*********************************************************************************************
 * File name		: JobShopper_and_Independent.h
 * Description		: 定義2個新的派生類 "JobShopper" 和 "Independent", 分別用來描述轉包工
 *					  和自由合同工, 他們衍生于Contractor類.
 * Creator			: Frederick Hsu
 * Creation date	: MOn.	March 30, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *********************************************************************************************/

#ifndef JOBSHOPPER_AND_INDEPENDENT_H
#define JOBSHOPPER_AND_INDEPENDENT_H

	#include "Contractor.h"

	class JobShopper : public Contractor
	{
	private:
	protected:
	public:
		JobShopper(const string& name="") : Contractor(name)
		{
			/* empty */
		}
		virtual ~JobShopper(void);

		virtual void ReportCompensation(void);
		virtual void FormattedDisplay(ostream& os);
	};
	ostream& operator<<(ostream& os, JobShopper& oJbsper);

	class Independent : public Contractor
	{
	private:
	protected:
	public:
		Independent(const string& name="") : Contractor(name)
		{
			/* empty */
		}
		virtual ~Independent(void);

		virtual void ReportCompensation(void);
		virtual void FormattedDisplay(ostream& os);
	};
	ostream& operator<<(ostream& os, Independent& oIndep);


	void ReportCompensationForAll(Contractor *poContor[]);


#endif	/*  JOBSHOPPER_AND_INDEPENDENT_H  */