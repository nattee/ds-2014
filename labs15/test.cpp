#include <iostream>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

int main() {
  srand(0);

  set<int> m;

  for (int i = 0;i < 100000;i++) {
    int k = rand();
    m.insert(k);
  }


  int count = 0;
  for (int j = 0;j < 1000;j++) {
    if (m.find(rand()) != m.end() ) {
        count++;
    }
//    if (m.end() == find(m.begin(),m.end(),rand())) {
//    } else {
//      count++;
//    }
  }
}
