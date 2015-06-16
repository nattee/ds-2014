#include <iostream>
#include <stack>

using namespace std;
int main() {
  CP::stack<int> s;
  s.push(10);
  s.push(20);
  s.push(30);
  cout << s.top() << endl;
  cout << "size is " << s.size() << endl;

  s.pop();

  cout << s.top() << endl;
  cout << "size is " << s.size() << endl;



}
