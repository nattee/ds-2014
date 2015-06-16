#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
  set<int> s;
  s.insert(4);
  s.insert(20);
  s.insert(1);
  s.insert(9);

  set<int>::iterator it1 = s.begin();
  set<int>::iterator it2 = s.end();
  it1++;
  it1++;

  if (find(it1,it2,4) == s.end()) cout << "NOT FOUND" << endl;
      else cout << "FOUND" << endl;

  it1++;
  if (find(it1,it2,,9) == s.end()) cout << "NOT FOUND" << endl;
      else cout << "FOUND" << endl;
  set<int>::iterator it3 =s.begin(); ++(++(++it3));

  if (find(it1,it3,20) == s.end()) cout << "NOT FOUND" << endl;
      else cout << "FOUND" << endl;
  if (find(it1,it2,,1) == s.end()) cout << "NOT FOUND" << endl;
      else cout << "FOUND" << endl;

}
