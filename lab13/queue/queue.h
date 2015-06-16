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
      return v.empty();
    }

    size_t size() const {
      int x = v.size();
      return x;
    }

    //----------------- access -----------------
    const T& front() const {
      return v.front();

    }
    const T& back() const {
      return v.back();
    }

    //----------------- modifier -------------
    void push(const T& element) {
      v.push_back(element);
    }

    void pop() {
      v.erase(v.begin());
    }


};

}

#endif


