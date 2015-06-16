#include <iostream>
#include <vector>

using namespace std;

typedef bool(*somchai)(int, int); // Function pointer type named "CompFunctor" 

bool vishnu(int a,int b) {
  cout << " a is " << a << endl;
  cout << " b is " << b << endl;

  return true;
}

bool nuttapong(int a,int b) {
  cout << " b is " << b << endl;
  cout << " a is " << a << endl;

  return true;
}

int main() {
  int a,b;
  a = 10;
  b = 20;

  somchai MyFunction;

  MyFunction = vishnu;

  MyFunction(a,b);
  MyFunction = nuttapong;

  MyFunction(a,b);

}
