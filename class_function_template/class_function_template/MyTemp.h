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

/**********************************************************************************************/
    
    template <class T1, class T2, int num=10>
    class MyTemplate
    {
    private:
        T1 t1;
        T2 t2;
    protected:
    public:
        MyTemplate(T1 obj_t1, T2 obj_t2);
        ~MyTemplate(void);
        
        void display(void);
    };

    template <class T1, class T2, int num>
    MyTemplate<T1, T2, num>::MyTemplate(T1 obj_t1, T2 obj_t2)
    {
        t1 = obj_t1 + num;
        t2 = obj_t2 + num;
    }

    template <class T1, class T2, int num>
    MyTemplate<T1, T2, num>::~MyTemplate(void)
    {
        /* empty */
    }

    template <class T1, class T2, int num>
    void MyTemplate<T1, T2, num>::display(void)
    {
        std::cout<<t1<<",    "<<t2<<std::endl;
    }

#endif  /*  MYTEMP_H  */