#include <iostream>
#include <list>

using namespace std;

int main() {
  list<int> l;
  l.push_back(1);
  l.push_back(2);
  l.push_back(3);

  list<int>::iterator it;
  it = l.begin();

  cout << *it << endl;
  it++;
  cout << *it << endl;
  it++;
  cout << *it << endl;

  it = list.end();
  it = it - 3;
  cout << *it << endl;



}
