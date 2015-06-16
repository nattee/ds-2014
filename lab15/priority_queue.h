#ifndef _CP_PRIORITY_QUEUE_INCLUDED_
#define _CP_PRIORITY_QUEUE_INCLUDED_

#include <stdexcept>
#include <iostream>
#include <vector>
#include <algorithm>

namespace CP {
template <typename T>
class priority_queue
{
  protected:
    vector<T> v;

  public:
    // default constructor
    priority_queue() { }
    ~priority_queue() { }
    //------------- capacity function -------------------
    bool empty() const { return v.size() == 0; }
    size_t size() const { return v.size(); }
    //----------------- access -----------------
    const T& top() { 
      int max = v[0];
      for (auto x & v) {
        if (x > max) max =x;
      }
      return max;
    }
    //----------------- modifier -------------
    void push(const T& element) {
      v.push_back(element);
    }
    void pop() { 
      int max = v[0];
      auto del = v.end();
      for (auto it = v.begin();it < v.end();it++){
        if (*it > max) {
          max = *it;
          del = it;
        }
      }
      v.erase(del);
    }

};

}

#endif


