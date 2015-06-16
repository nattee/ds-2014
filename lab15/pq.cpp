#include <iostream>
#include <queue>

using namespace std;


int main() {
  priority_queue<int> pq;
  pq.push(10);
  pq.push(100);
  pq.push(2);


  while (pq.empty() == false) {
    cout << pq.top() << endl;
    pq.pop();
  }
}
