#include "vector.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace CP;
using std::cout;
using std::endl;

int main() {

  std::vector<int> v;

  v.push_back(10003);
  v.push_back(10001);
  v.push_back(10002);
  v.push_back(10000);
  cout << v[0] << endl;
  cout << v[1] << endl;
  cout << v[2] << endl;
  cout << v[3] << endl;


  sort(v.begin(),v.begin() + 3);

  cout << "sorted " << endl;
  cout << v[0] << endl;
  cout << v[1] << endl;
  cout << v[2] << endl;
  cout << v[3] << endl;

}

