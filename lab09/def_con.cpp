#include <iostream>

using namespace std;

class test {
  public:
    int member;
};

int main() {
  float a = float();
  cout << a << endl;


  test b = test();
  cout << b.member << endl;
}
