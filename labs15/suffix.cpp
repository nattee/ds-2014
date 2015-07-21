#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>

using namespace std;

bool check(string w,string s) {
  return true;
}

string right(string w,int k) {

}

void work(vector<string> words, vector<string> suffix) {
  map<string,vector<string>> ans;
  set<string> suf;
  for (auto &s : suffix) suf.insert(s);

  for(auto &w : words) {
      if (suf.find(right(w,suffix.front().length)) != suf.end()) {
        ans[right(w,suffix.front().length)].push_back(w);
      }
  }
}

int main() {

}
