#include <iostream>
#include <map>

using namespace std;

int main()
{
    int m; // number of record
    int n; // number of tickets
    cin >> m;
    cin >> n;
    map<float,string> record;
    for(int i =0;i < m; i++){
        string st;
        float f;
        cin >> st >> f;
        map<float,string> :: iterator chk;
        for(chk = record.begin();chk != record.end(); chk++){
                if(chk->second == st){
                    record.erase(chk);
                    break;
                }
        }
        record.insert(make_pair(f,st));
        //record[f] = st;
    }
    if (n > m) n = m;

    map<float,string> :: iterator it = record.end();
    it--;
    for(int count =0 ; count != n ;it--){
            cout << "\t" << it->second << "\t" << it -> first<< endl;
            count++;
    }


}
