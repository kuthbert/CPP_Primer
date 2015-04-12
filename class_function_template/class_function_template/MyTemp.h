/**********************************************************************************************
 * File name        : MyTemp.h
 * Description      : Define and implement a class template "MyTemp".
 * Creator          : Frederick Hsu
 * Creation date    : Sun.  April 12, 2015
 * Copyright(C)     2015    All rights reserved.
 *
 **********************************************************************************************/


#ifndef MYTEMP_H
#define MYTEMP_H

    #include <iostream>

    template <class T1, class T2>
    class MyTemp
    {
    private:
        T1 t1_obj;
        T2 t2_obj;
    public:
        MyTemp(T1 objT1, T2 objT2);
        ~MyTemp(void);
        
        void display(void);
    };


    template <class T1, class T2>
    MyTemp<T1, T2>::MyTemp(T1 objT1, T2 objT2)
    {
        t1_obj = objT1;
        t2_obj = objT2;
    }

    template <class T1, class T2>
    MyTemp<T1, T2>::~MyTemp(void)
    {
        /* empty */
    }

    template <class T1, class T2>
    void MyTemp<T1, T2>::display(void)
    {
        std::cout<<t1_obj<<",    "<<t2_obj<<std::endl;
    }

#endif  /*  MYTEMP_H  */