/************************************************************************************************
 * File name        : Test_MyTemp.h
 * Description      : To carry out the test case to verify the "MyTemp" class template.
 * Creator          : Frederick Hsu
 * Creation date    : Sun.  April 12, 2015
 * Copyright(C)     2015    All rights reserved.
 *
 ************************************************************************************************/


#include "Test.h"
#include "Test_MyTemp.h"

void Execute_General_Test_Cases(void)
{
    Execute_TestCase4_MyClassTemp();
    
    Execute_TestCase4_MyClassTemplate();
}

void Execute_TestCase4_MyClassTemp(void)
{
    TestCase4_MyClassTemp();
}

void Execute_TestCase4_MyClassTemplate(void)
{
    TestCase4_MyClassTemplate();
}