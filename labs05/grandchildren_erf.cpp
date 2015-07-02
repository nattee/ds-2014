#include <iostream>
#include <map>
#include <vector>
#include <utility>
using namespace std;

int main() {
    map<pair<string,string>,string> record;
    map<string,vector<string>> Gchild;
    cout << "Number of parents-children : ";
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string par,child;
        cin >> par>> child;
        record[make_pair(par,child)]=child;
    }
    for(auto &x:record){
        for(auto &y:record){
            if(x.second==y.first.first){
                Gchild[x.first.first].push_back(y.second);
            }
        }
    }
    for(auto &a:Gchild){
        cout << a.first << " is grandparent of ";
        for(auto &b:a.second){
            cout << b << " ";
        }
    }
    return 0;
}
