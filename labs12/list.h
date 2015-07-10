#ifndef __LIST_H__DAE__
#define __LIST_H__DAE__


#include <iostream>

namespace CP {

template <typename T>
class node {
  public:
    T data;
    node *next;

    node() : data( T() ), next( NULL ), prev( NULL ) {
    }

    node(const T& a,node* n,node *p,) : data( a ), next( n ), prev( p ) {
    }

};

}

#endif
