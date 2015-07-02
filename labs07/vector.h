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

    void ensureCapacity(size_t new_size) {
      if (new_size > mCap) {
        mCap = (new_size > mCap * 2 ? new_size : mCap * 2);
        T *tmp = new T[mCap * 2];
        for (size_t i = 0;i < mSize;i++) {
          tmp[i] = mData[i];
        }
        delete mData;
        mData = tmp;
      }
    }


  public:
    typedef T* iterator;

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
      ensureCapacity(mSize+1);
      mData[mSize] = val;
      mSize++;
    }

    T& operator[](size_t n) {
      return mData[n];
    }
    void pop_back() { mSize--; }

    iterator begin() { return mData; }

    iterator end() {  return mData + mSize;}

    iterator insert(iterator position, const T& val) {
      int pos = position - begin();
      ensureCapacity(mSize+1);
      for (size_t i = mSize;i > pos;i--) {
        mData[i] = mData[i-1];
      }
      mData[pos] = val;
      mSize++;

    }
    iterator insert(iterator position, iterator first, iterator last) {
      auto it = first;
      while (it != last) {
        insert(position,*it);
        it++;
        position++;
      }
    }

    iterator erase(iterator position) {
      for (auto it =  position; it != end()-1;it++) {
        *it = *(it+1);
      }
      mSize--;
    }

    iterator erase(iterator first, iterator last) {
    }

    void insert_by_position(size_t pos, const T& val) {
      ensureCapacity(mSize+1);
      for (size_t i = mSize;i > pos;i--) {
        mData[i] = mData[i-1];
      }
      mData[pos] = val;
      mSize++;
    }

    void erase_by_position(size_t pos) {
      for (size_t i = pos;i < mSize-1;i++) {
        mData[pos] = mData[pos+1];
      }
      mSize--;
    }

};


}
#endif
