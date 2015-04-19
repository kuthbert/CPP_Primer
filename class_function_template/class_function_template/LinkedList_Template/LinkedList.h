/*****************************************************************************************************
 * File name        : LinkedList.h
 * Description      : 定义LinkedList链表模板，来说明模板是如何运作的。
 * Creator          : Frederick Hsu
 * Creation date    : Sun.  April 19, 2015
 * Copyright(C)     2015    All rights reserved.
 *
 *****************************************************************************************************/


#ifndef LINKEDLIST_H
#define LINKEDLIST_H

    #include "ListEntry.h"

    template <class T>
    class LinkedList
    {
    private:
        ListEntry<T> *firstEntry;
        ListEntry<T> *lastEntry;
        ListEntry<T> *iterator;
        
        void RemoveEntry(ListEntry<T> *lentry);
        void InsertEntry(T& entry, ListEntry<T> *lentry);
    protected:
    public:
        LinkedList(void);
        ~LinkedList(void);
        
        void AppendEntry(T& entry);
        void RemoveEntry(int pos=-1);
        void InsertEntry(T& entry, int pos=-1);
        T* FindEntry(int pos);
        T* CurrentEntry(void);
        T* FirstEntry(void);
        T* LastEntry(void);
        T* NextEntry(void);
        T* PrevEntry(void);
    };
    
    
    template <class T>
    LinkedList<T>::LinkedList(void)
    {
        iterator = 0;
        firstEntry = 0;
        lastEntry = 0;
    }

    template <class T>
    LinkedList<T>::~LinkedList(void)
    {
        while (firstEntry)
            RemoveEntry(firstEntry);
    }
    
    
    template <class T>
    void LinkedList<T>::AppendEntry(T& entry)
    {
        ListEntry<T> *newEntry = new ListEntry<T>(entry);
        newEntry->prevEntry = lastEntry;
        
        if (lastEntry)
        {
            lastEntry->nextEntry = newEntry;
        }
        if (firstEntry)
        {
            firstEntry = newEntry;
        }
        lastEntry = newEntry;
    }
    
#endif  /*  LINKEDLIST_H  */