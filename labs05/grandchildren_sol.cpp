#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  int k;
  cout << "Enter number of records: ";
  cin >> k;
  vector<pair<string,string>> record;
  vector<string> person;
  while(k--) {
    string a,b;
    cout << "Enter parent: "; cin >> a;
    cout << "Enter child: "; cin >> b;
    record.push_back(make_pair(a,b));
  }

  //get list of unique person
  for (auto &x : record) {
    if (find(person.begin(),person.end(),x.first) == person.end())
      person.push_back(x.first);
    if (find(person.begin(),person.end(),x.second) == person.end())
      person.push_back(x.second);
  }

  //display grandchildren
  for (auto &x : person) {
    cout << "The grandchildren of " << x << " are" << endl;
    for (auto &s1 : record) {
      if (s1.first == x) {

        string child = s1.second;

        for (auto &s2 : record) {
          if (s2.first == child) {
            cout << "   " << s2.second << endl;
          }
        }

      }
    }
  }
}
