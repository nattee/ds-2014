#include <iostream>
#include <map>

using namespace std;

int main()
{
    int m; // number of record
    int n; // number of tickets
    cin >> m;
    cin >> n;
    map<string,float> bid;
    for(int i =0;i < m; i++){
        string st;
        float f;
        cin >> st >> f;
        bid[st] = f;
    }

    priority_queue<pair<float,string>> pq;
    for (auto &x : bid) {
      pq.push(make_pair(x.second,x.first));
    }

    if (n > m) n = m;
    for (int i = 0;i < n;i++) {
      pair<float,string> p = pq.top();
      pq.pop();
      cout << p.second << endl;
    }
}
