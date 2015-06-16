#include <iostream>
#include <vector>
#include <string>

using namespace std;

void top_n(vector<pair<string,float> > record,int n,int m){
     vector<pair<string,float> > v;
     for(int i=0;i<record.size();i++){
          for(int j=0;j<v.size();j++){
               if(v[j].first==record[i].first){
                    v.erase(v.begin()+j);
                    break;
               }
          }
          v.push_back(record[i]);
     }

     //if (n > m) n = m;
     for(int i=0;i<n;i++){
          if(v.size()==0)break;
          int max=0;
          for(int j=0;j<v.size();j++){
               if(v[j].second>v[max].second)max=j;
          }
          cout << v[max].first << endl;
          v.erase(record.begin()+max);
     }
}

int main() {
  cin >> n >> m;
  vector<pair<string,float>> record;
  for (int i = 0;i < m;i++) {
    string st;float f;
    cin >> st >> f;
    record.push_back(make_pair(st,f));
  }
  top_n(record,n,m);
}
