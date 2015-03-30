/*********************************************************************************************
 * File name		: JobShopper_and_Independent.cpp
 * Description		: 定義2個新的派生類 "JobShopper" 和 "Independent", 分別用來描述轉包工
 *					  和自由合同工, 他們衍生于Contractor類.
 * Creator			: Frederick Hsu
 * Creation date	: MOn.	March 30, 2015
 * Copyright(C)		2015	All rights reserved.
 *
 *********************************************************************************************/


#include "JobShopper_and_Independent.h"


JobShopper::~JobShopper(void)
{
	/* empty */
}


void JobShopper::ReportCompensation(void)
{
}

void JobShopper::FormattedDisplay(ostream& os)
{
}


Independent::~Independent(void)
{
	/* empty */
}

void Independent::ReportCompensation(void)
{
}

void Independent::FormattedDisplay(ostream& os)
{
}


void ReportCompensationForAll(Contractor *poContor[])
{
	int i = 0;
	
	while (poContor[i++] != 0)
	{
		poContor[i++]->ReportCompensation();
	}
}