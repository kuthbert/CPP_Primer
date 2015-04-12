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

void TestCase4_MyClassTemplate(void)
{
    int x = 123;
    double y = 456.789;
    
    MyTemplate<int, double> mt1(x, y);
    MyTemplate<int, double, 100> mt2(x, y);
    
    mt1.display();
    mt2.display();
    
    return;
}
