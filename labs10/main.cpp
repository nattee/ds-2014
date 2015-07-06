#include <iostream>
#include <math.h>

using namespace std;

int main() {
  map<int,int> m;

  m[1] = 200;
  m[2] = 300;
  m[3] = 400;

  auto it = m.begin();
  it++;

  it = m.erase(it);



}
