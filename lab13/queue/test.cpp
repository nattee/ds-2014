#include <iostream>
#include <sys/time.h>
#include "queue.h"


using namespace std;

int main() {
  //time measurement
  struct timeval t1,t2;
  //get current time
  gettimeofday(&t1, 0);


  //do work here
  CP::queue<int> q;
  int n = 8e5;
  for (int i = 0;i < n;i++) {
    q.push(i);
  }
  for (int i = 0;i < n;i++) {
    q.pop();
  }

  //get current time again and show diff
  gettimeofday(&t2, 0);
  cout << (t2.tv_sec-t1.tv_sec)*1.0 + (t2.tv_usec-t1.tv_usec)/1000000.0 << endl;

}
