#ifndef __LIST_H__DAE__
#define __LIST_H__DAE__


#include <iostream>

namespace CP {

template <typename T>
class list {
  protected:
    class node {
        T data;
        node *next;

        node() : data( T() ), next( NULL ), prev( NULL ) {
        }

        node(const T& a,node* n,node *p,) : data( a ), next( n ), prev( p ) {
        }

    };

    class list_iterator {
      protected:
        node *ptr;
    };

    size_t mSize;
    node* mFirst;

  public:
    typedef list_iterator iterator;

    list() {

    }

    ~list() {

    }

    insert(iterator it, const T& val) {
      if (it.ptr == mFirst) {
        mFirst = new CP::node<int>(val,mFirst);
      } else {
        auto c = it.ptr->prev;
        c->next = new node(val,c->next,c);
        c->next->next->prev = c->next;
      }
      mSize++;

    }


}


}

#endif
