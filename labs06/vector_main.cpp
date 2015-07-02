#include "vector.h"
#include <iostream>

using namespace CP;
using std::cout;
using std::endl;

int main() {

  vector<int> v;
  int x;

  v.push_back(10000);
  v.push_back(10001);
  v.push_back(10002);
  v.push_back(10003);
  x = v[3]; cout << x << endl;
  x = v[2]; cout << x << endl;
  x = v[1]; cout << x << endl;
  x = v[0]; cout << x << endl;
}

