#ifndef __MY_HASH_H__
#define __MY_HASH_H__

#include <vector>
#include <iostream>

using namespace std;

class Hash {

protected:
  vector<int> mData;
  vector<int> mStatus; // 0 = available, 1 = occupied, 2 = was here
  size_t      mSize;
  float       mMaxLoadFactor;

  size_t hash(int element) {
    return element % mData.size();
  }

public:
  Hash() : mMaxLoadFactor(0.5) { }
  ~Hash() { }

  void insert(int element) {
    if (load_factor() >= max_load_factor()) {
      size_t new_size = mData.size() * 2;
      //
      bool isPrime = false;
      while (!isPrime) {
        bool ok = true;
        for (size_t i = 2;i * i < new_size;i++) {
          if (new_size % i == 0) {
            new_size++;
            ok = false;
            break;
          }
        }
        if (ok) { isPrime = true; }
      }
      //
      vector<int> backup(mData.begin(),mData.end());
      vector<int> backupStatus(mStatus.begin(),mStatus.end());
      mData.resize(new_size);
      mData.clear();
      mStatus.resize(new_size);
      mStatus.clear();
      mSize = 0;
      for (size_t i = 0;i < backup.size();i++) {
        if (backupStatus[i] == 1) insert(backup[i]);
      }
    }

    size_t h = hash(element);
    size_t pos = h;
    size_t step = 1;
    while (mStatus[pos] == 1) {
      if (mData[pos] == element) {
        return ;
      } else {
        //calculate next position
        pos = (pos + step) % mData.size();
        //  step += 2;
      }
    }
    mData[pos] = element;
    mStatus[pos] = 1;
    mSize++;
  }

  void erase(int element) {
    size_t h = hash(element);
    size_t pos = h;
    size_t step = 1;
    while (mStatus[pos] != 0) {
      if (mData[pos] == element) {
        mData[pos] = 0;
        mStatus[pos] = 2;
        mSize--;
        return ;
      } else {
        //calculate next position
        pos = (pos + step) % mData.size();
        //  step += 2;
      }
    }
    return ;
  }

  bool find(int element) {
    size_t h = hash(element);
    size_t pos = h;
    size_t step = 1;
    while (mStatus[pos] != 0) {
      if (mData[pos] == element) {
        return true;
      } else {
        //calculate next position
        pos = (pos + step) % mData.size();
        //  step += 2;
      }
    }
    return false;
  }

  bool empty() { return mSize == 0; }

  size_t size() { return mSize; }

  float load_factor() {
    return (mSize + 0.0) / mData.size();
  }

  float max_load_factor() {
    return mMaxLoadFactor;
  }

  vector<int> to_vector() {
    vector<int> v;
    return v;
  }


  bool isEqual(Hash h) {
    if (h.size() != size()) return false;
    for (size_t i = 0;i < mData.size();i++) {
      if (mStatus[i] == 1) {
        if (h.find(mData[i]) == false) return false;
      }
    }
    return true;
  }

};


#endif
