#include <iostream>
#include "list.h"

using namespace std;

int main() {
  CP::node<int> n1,n2;
  CP::node<int> *a,*b;

  n1.data = 10;
  n2.data = 20;

  a = &n1;
  b = &n2;
  a->next = b;
  a->data = 1;
  b->data = 2;
  a->next->data = 99;
  b->next = a;
  a->next->next->next->data = 55;
  n1.data = 66;
  n2.data = b->next->data;
  
  cout << n1.data << endl;
  cout << n2.data << endl;
} 
