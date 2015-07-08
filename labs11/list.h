#ifndef __LIST_H__DAE__
#define __LIST_H__DAE__


#include <iostream>


namespace CP {

template <typename T>
class node {
  public:
    T data;
    node *next;

    node() : data( T() ), next( NULL ) { }

    node(const T& a,node* n) : data( a ), next( n ) {}
};

}

#endif
