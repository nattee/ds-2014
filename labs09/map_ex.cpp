#include <iostream>
#include <map>
#include <unordered_map>
#include "slow_map.h"

using namespace std;

int test;


////
vector<int> v;
v.push_back(10);
v.push_back(11);
v.push_back(12);
v.push_back(13);
v.push_back(14);
auto it = v.begin();
it++;
it++
*it;
//
//
//
//
//

int& aaa(int x) {
  test = x+1;
  return test;
}

int main() {
  //example of return-by-reference
  cout << aaa(10) << endl;
  aaa(10) = 1234;

  CP::slow_map<int,string> m;
  CP::slow_map<string,string> m2;


  cout << m[9999] << endl;
  m[200] = "bbb";
  m[8] = "xxx";
  m[1] = "aaaa";
  m[200] = "111";

  auto it = m.begin();
  cout << it->first << endl;

  m2["aa"] = "bb";
  m2["33"] = "1";

  cout << m.size() << endl;
  cout << m2.size() << endl;

  cout << m.value_at(200) << endl;
  m.value_at(200) = "bbb";
  
}
