#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  map<string,int> m;
  m["somchai"] = 10;
  m["abcc"] = 200;
  m["x"] = 42;

  //your code
  auto it2 = m.find("x");
  m.erase(it2);

  auto it = m.begin();
  while (it != m.end()) {
    pair<string,int> tmp;
    tmp = *it;

    cout << " m[" << tmp.first << "] = " << tmp.second << endl;
    it++;
  }

}
