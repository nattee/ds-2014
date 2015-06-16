#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
  priority_queue<string> pq;
  pq.push("somchai");
  pq.push("echelon");
  pq.push("row");
  pq.push("gauss");

  while (!pq.size() == 0) {
    cout << pq.top() << endl;
    pq.pop();
  }

}
