#include <iostream>
#include <queue>
#include <utility>
#include <map>

using namespace std;

int main() {
  cout << "number of available tickets : ";
  int n,m;
  cin >> n;
  cout <<"number of buyers : ";
  cin >> m;
  priority_queue<pair<float,string>> p;
  if(n>=m) n=m;
  for(int i=0;i<m;i++){
    string s; float f;
    cin >> s >> f;
    p.push(make_pair(f,s));
  }
  vector<pair<float,string>> v;
  int a=p.size();
  for(int i=0;i<a;i++){
    v.push_back(p.top());
    p.pop();
  }
  int n1=v.size();
  for(int i=0;i<n1;i++){
    for(int j=0;j<n1;j++){
        if(v[i].second==v[j].second){
            if(i<j) v.erase(v.begin()+i);
        }
    }
  }
  cout << "The "<< n << " people who won are "<<endl;
  for(int k=0;k<v.size();k++){
    cout << v[k].second << endl;
  }
}
