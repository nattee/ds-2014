#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int num;
    cin >> num;
    map<string,vector<string> > family;

    //a,b
    //a,c
    //b,xxx
    //family[a] = <b,c>;   family[b] = <xxx>,  family[c] =<>, family[xxx] = <> 
    string parent, child;
    for(int i = 0 ; i < num ;i++){
        cin >> parent >> child;
        family[parent].push_back(child);
    }
 /*
    map<string,vector<string> >::iterator its;
    for(its = family.begin() ; its != family.end() ;its++){
        cout << its->first << " : ";
        for(size_t j = 0; j < its->second.size(); j++)
            cout << its->second[j]  << " ";
        cout << endl;
    }
*/
    map<string,vector<string> >::iterator it;
    for(it = family.begin() ; it != family.end() ;it++){
        cout << it->first << " is grandma of ";

        for(size_t j = 0 ; j < it->second.size() ; j++){
            int child = it->second[j];

            if(family.find(child) != family.end()){
                for(size_t k = 0 ; k < family[child].size() ;k++ ){
                    cout << family[child][k] << " ";
                }
            }
            else{
                cout << "No " ;
            }

        }
        cout << endl;

    }

}
