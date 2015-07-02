#ifndef __VECTOR_H_HAHAHA__
#define __VECTOR_H_HAHAHA__

#include <iostream>

namespace CP {

template <typename T>
class vector {
  protected:
    T*      mData;
    size_t  mSize;
    size_t  mCap;

    size_t count;

    typedef T* iterator;

  public:

    vector() {
      mCap = 1;
      mSize = 0;
      mData = new T[mCap];
    }

    ~vector() {
      delete [] mData;
    }

    size_t size() {
      return mSize;
    }

    bool empty() {
      return false;

    }

    void push_back(const T& val) {
      if (mSize == mCap) {
        T *tmp = new T[mSize * 2];
        for (size_t i = 0;i < mSize;i++) {
          tmp[i] = mData[i];
        }
        delete mData;
        mData = tmp;
        mCap = mCap * 2;
      }
      mData[mSize] = val;
      mSize++;
    }

    T operator[](size_t n) {
      return mData[n];
    }
    void pop_back() { mSize--; }

    iterator begin() { }

    iterator end() { }

    iterator insert(iterator position, const T& val) { }
    iterator insert(iterator position, iterator first, iterator last) { }
    iterator erase(iterator position) { } 
    iterator erase(iterator first, iterator last) { }

    void insert_by_position(size_t pos, const T& val) {
      T* tmp = new T[mCap + 1];
      for (size_t i = 0;i <= mSize;i++) {
        if (i < pos) tmp[i] = mData[i];
        if (i ==pos) tmp[i] = val;
        if (i > pos) tmp[i] = mData[i-1];
      }
      delete mData;
      mData = tmp;

      mSize++;
    }

};


}
#endif
