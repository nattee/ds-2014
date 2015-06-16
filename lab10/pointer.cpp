#include <iostream>

using namespace std;

void set(int *&x,int *y) {
  x = y;
}

int main() {
  int a,b;

  a = 10;
  b = 20;
  int *pa,*pb;

  pa = &a;
  pb = &b;

  set(pa,pb);
  *pa = 77;

  cout << a << endl;
  cout << b << endl;
  cout << pa << endl;
  cout << pb << endl;

}
