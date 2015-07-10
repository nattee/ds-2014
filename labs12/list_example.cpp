#include <iostream>
#include "list.h"

using namespace std;

void insert(size_t k,int val,CP::node<int>* &start) {
  if (k == 0) {
    start = new CP::node<int>(val,start);
  } else {
    auto p = start;
    for (size_t i = 0;i < k-1;i++) {
      p = p->next;
    }
    p->next = new CP::node<int>(val,p->next);
  }
}

int main() {
  CP::node<int> *start;
  start = new CP::node<int>(10,
      new CP::node<int>(20,
        new CP::node<int>(30,
          new CP::node<int>(40,NULL))));

  insert(0,100,start);




}
