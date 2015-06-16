#ifndef _CP_QUEUE_INCLUDED_
#define _CP_QUEUE_INCLUDED_

#include <stdexcept>
#include <iostream>
#include <vector>
//#pragma once

namespace CP {

template <typename T>
class queue
{
  protected:

    std::vector<T> v;

  public:
    //-------------- constructor ----------

    // copy constructor
    queue(const queue<T>& a) {
      v = a.v;
    }

    // default constructor
    queue() {
      v = vector<T>();

      vector<T> tmp;
      v = tmp;
    }

    // copy assignment operator
    queue<T>& operator=(queue<T> other) {
      v = other.v;
      return (*this);
    }

    ~queue() {
    }

    //------------- capacity function -------------------
    bool empty() const {
      //return v.empty();
      if (v.empty()) return true; else return false;
    }

    size_t size() const {
      int x = v.size();
      return x;
    }

    //----------------- access -----------------
    const T& front() const {
      return v[0];
      return v.front();
      return *v.begin();

    }
    const T& back() const {
      return v[v.size()-1];
      return v.back();
      return *(v.end()-1);
      return *(--v.end());
    }

    //----------------- modifier -------------
    void push(const T& element) {
      v.insert(v.end(),element);
      v.push_back[element];
    }

    void pop() {
      v.erase(v.begin());
      v.erase(v.begin(),v.begin()+1);

      for (int i = 1;i < v.size();i++) {
        v[i-1] = v[i];
      }
      v.pop_back();
    }


};

}

#endif


