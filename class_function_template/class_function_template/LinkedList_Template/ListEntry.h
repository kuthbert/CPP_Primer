/******************************************************************************************************
 * File name        : ListEntry.h
 * Description      : Define a ListEntry class template.
 * Creator          : Frederick hsu
 * Creation date    : Sun.  April 19, 2015
 * Copyright(C)     2015    All rights reserved.
 *
 ******************************************************************************************************/

#ifndef LISTENTRY_H
#define LISTENTRY_H

    template <class T> class LinkedList;

    template <class T>
    class ListEntry
    {
    private:
        T thisEntry;
        ListEntry *nextEntry;
        ListEntry *prevEntry;
    protected:
    public:
        ListEntry(T& entry);
        ~ListEntry(void);
        friend class LinkedList<T>;
    };

    template <class T>
    ListEntry<T>::ListEntry(T& entry)
    {
        thisEntry = entry;
        nextEntry = 0;
        prevEntry = 0;
    }

    template <class T>
    ListEntry<T>::~ListEntry(void)
    {
    }

#endif  /*  LISTENTRY_H  */