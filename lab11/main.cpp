#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v;
  v.push_back(10);
  v.push_back(14);
  auto it = v.begin();
  cout << it << endl;

}
