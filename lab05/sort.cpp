#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
  vector<int> s;
  s.push_back(4);
  s.push_back(20);
  s.push_back(1);
  s.push_back(9);

  cout << "before" << endl;
  for (auto &value : s) { cout << value << endl; }

  sort(s.begin()+1,s.end());
 
  cout << "after" << endl;
  for (auto &value : s) { cout << value << endl; }
}
