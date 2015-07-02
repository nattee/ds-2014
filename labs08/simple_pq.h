#ifndef _CP_PRIORITY_QUEUE_INCLUDED_
#define _CP_PRIORITY_QUEUE_INCLUDED_

#include <stdexcept>
#include <iostream>
//#pragma once

namespace CP {

template <typename T>

class priority_queue
{
  protected:
    T *mData;
    size_t mCap;
    size_t mSize;

    void expand(size_t capacity) {
      T *arr = new T[capacity]();
      for (size_t i = 0;i < mSize;i++) {
        arr[i] = mData[i];
      }
      delete [] mData;
      mData = arr;
      mCap = capacity;
    }



  public:
    //-------------- constructor ----------


    // default constructor
    priority_queue( ) :
       mData( new T[1]() ),
       mCap( 1 ),
       mSize( 0 ),
    { }


    ~priority_queue() {
      delete [] mData;
    }

    //------------- capacity function -------------------
    bool empty() const {
      return mSize == 0;
    }

    size_t size() const {
      return mSize;
    }

    //----------------- access -----------------
    const T& top() {
      return mData[0];
    }

    //----------------- modifier -------------
    void push(const T& element) {
      size_t pos = mSize;
      for (size_t i = 0;i < mSize;i++) {
        if (mData[i] < element) {
          pos = i;
          break;
        }
      }

      for (size_t i = mSize;i > pos;i--) {
        mData[i] = mData[i-1];
      }
      mData[pos] = element;
    }

    void pop() {
      for (size_t i = 0;i < mSize - 1;i++) {
        mData[i] = mData[i+1];
      }
      mSize--;
    }
};

}

#endif


