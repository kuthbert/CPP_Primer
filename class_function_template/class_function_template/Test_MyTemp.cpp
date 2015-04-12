/************************************************************************************************
 * File name        : Test_MyTemp.cpp
 * Description      : To carry out the test case to verify the "MyTemp" class template.
 * Creator          : Frederick Hsu
 * Creation date    : Sun.  April 12, 2015
 * Copyright(C)     2015    All rights reserved.
 *
 ************************************************************************************************/


#include "Test_MyTemp.h"
#include "MyTemp.h"



void TestCase4_MyClassTemp(void)
{
    int a = 10;
    double b = 7.56;
    
    MyTemp<int, double> mt(a, b);
    mt.display();
}
