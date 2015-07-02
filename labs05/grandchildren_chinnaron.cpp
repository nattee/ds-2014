#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string,vector<string> > rela;
    for(int i = 0;i < n;i++){
        string parents;
        string child;
        cin >> parents >> child;
        rela[parents].push_back(child);
    }

    auto it = rela.begin();
    for(auto &m : rela){
        for(auto &v : rela[m.first]){
            it = rela.find(v);
            if(it != rela.end()){
                cout << "Grandchildren of " << m.first << " are " << endl;
                for(auto &v2 : rela[v]){
                    cout << v2 << endl;
                }
            }
        }
    }
}
