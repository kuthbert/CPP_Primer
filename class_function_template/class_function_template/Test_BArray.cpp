/******************************************************************************************
 * File name        : Test_BArray.cpp
 * Description      : 測試“使用有界數組模板”的情形。
 * Creator          : Frederick Hsu
 * Creation date    : Wed.  April 15, 2015
 * Copyright(C)     2015    All rights reserved.
 *
 ******************************************************************************************/


#include "Test_BArray.h"
#include "barray.h"
#include "Date.h"



void TestCase4_BoundedArrayTemplate(void)
{
    /* A bounded array of dates */
    Array<Date, 5> dateArray;
    
    /* Some date objects */
    Date dt1(1999, 12, 17), dt2(2000, 11, 30), dt3(2010, 6, 24),
         dt4(2012, 10, 31), dt5(2014, 8, 5);
    
    /* Put the date objects in the array */
    dateArray[0] = dt1;
    dateArray[1] = dt2;
    dateArray[2] = dt3;
    dateArray[3] = dt4;
    dateArray[4] = dt5;
    
    /* Display these dates */
    for (int i=0; i<5; i++)
    {
        std::cout<<dateArray[i]<<std::endl;
    }
    std::cout<<std::flush;
    
    /* Try to put an additional date into the array
     * outside the range of the subscript.
     */
    Date dt6(2015, 4, 15);
    // dateArray[5] = dt6;     // Template's assertion aborts.
    
    return;
}