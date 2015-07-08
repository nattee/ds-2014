#include <iostream>
#include "list.h"

using namespace std;

int main() {
  CP::node<int> n1,n2;
  CP::node<int> *start;

  n1.data = 10;
  n2.data = 20;

  int x;

  start = &n1;
//  if (*start == n1.next)
//    cout << "YES" << endl;
//
//  if ((*start).next == n1.next)
//    cout << "YES" << endl;

  n1.next = &n2;
//  (*start).next = &n2;
//  start->next = &n2;
//

//  start->next = &n1;
  start->next->data
    = start->data; // (1)
//    = (*start).data // (2)
//    = n1.data // (3)
//    = (*(&(*(&n1)))).data // (4++++)

} 
