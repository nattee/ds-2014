#include <iostream>
#include "vector.h"

using namespace std;

void test(int &T) {

}

int main() {

  int x,y,z;
  x = 10; y = 1; z = 2;
  int *px,*py,*pz;

  px = &x; py = &y; pz = &z;

  cout << " address " << endl;
  cout << px << endl; cout << py << endl; cout << pz << endl;
  cout << " value " << endl;
  cout << x << endl; cout << y << endl; cout << z << endl; 

  py++;
  *py = 100;
  cout << " value " << endl;
  cout << x << endl;
  cout << y << endl;
  cout << z << endl;




}
