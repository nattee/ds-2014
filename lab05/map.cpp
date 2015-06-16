#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

int main() {
  map<string,int> m;
  m["somchai"] = 30;
  m["a"] = 10;
  m["b"] = 15;
  
  cout << "size is " << m.size() << endl;
  cout << m["b"] << endl;
  cout << m["somchai"] << endl;
  cout << m["xxx"] << endl;
  cout << "size is " << m.size() << endl;

  map<string,int>::iterator it = m.begin();

  while (it != m.end()) {
    cout << "map of " <<  (*it).first << " is " << (*it).second << endl;
    it++;
  }
}
