/*********************************************************************************************
 * File name        : barray.h
 * Description      : 类模版数组的下标越界。
 * Creator          : Frederick Hsu
 * Creation date    : Sun.  April 12, 2015
 * Copyright(C)     2015    All rights reserved.
 *
 *********************************************************************************************/


#ifndef BARRAY_H
#define BARRAY_H

    #include <cassert>

    template <class T, int b>
    class Array
    {
    private:
        T elem[b];
    protected:
    public:
        Array(void);
        
        T& operator[](int sub);
    };

    template <class T, int b>
    Array<T, b>::Array(void)
    {
        /* empty */
    }

    template <class T, int b>
    T& Array<T, b>::operator[](int sub)
    {
        assert((sub>=0) && (sub<b));
        return elem[sub];
    }

#endif  /*  BARRAY_H  */