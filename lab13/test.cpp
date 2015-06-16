#include <iostream>
#include <queue>
#include "queue.h"

using namespace std;

int main() {
  CP::queue<int> q;

  q.push(10);
  q.push(11);
  q.push(12);

  cout << q.front() << endl;
  cout << q.back() << endl;
  cout << "size = " << q.size() << endl;
  q.pop();
  
  cout << q.front() << endl;
  cout << "size = " << q.size() << endl;

}
